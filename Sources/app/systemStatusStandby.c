/*
 * systemStatusStandby.c
 *
 *  Created on: 2020Äê1ÔÂ10ÈÕ
 *      Author: jiangxl
 */


#include "Cpu.h"
#include "hal.h"
#include "systemTask.h"
#include "systemStatus.h"
#include "systemTimers.h"

//
//static uint8_t   APCounter =0;


void SysStandbyEntry(SysEventId eventId, uint8_t eventParam)
{
    KeyChargeStateInit();
    KeyChargeSelectionEntry();
}


void SysStandbyExit()
{


}


boolean SysStandbyAction(SysEventInfo* pEvtInfo)
{
	uint8 ret;

	ret = FALSE;

	//NFC_Task_LPCD_Cail();
	//if(NxpNci_LPCD_Cail_Results_Success==NFC_Task_LPCD_Detect())
	//{

	//	if(ImobEnaReq || CdcBtReq || CdcWifiReq)
	//	{
	//		pEvtInfo->SyseventId= EvtSysTransNext;
	//		pEvtInfo->Sysparam1 = SysStateNfc;
	//		ret = TRUE;
	//	}
	//	else if(WLCChrgFctEna && (!HmiMute) && (((VehState==Parked)&&ComfEna)||(VehState==DriverPresent)||(VehState==Driving)))
		{
			pEvtInfo->SyseventId= EvtSysTransNext;
			pEvtInfo->Sysparam1 = SysStateCharge;
			ret = TRUE;
		}
	//}


	return ret;

}







