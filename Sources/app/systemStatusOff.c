/*
 * systemStatusOff.c
 *
 *  Created on: 2020年2月9日
 *      Author: jiangxl
 */


#include "Cpu.h"
#include "hal.h"
#include "systemTask.h"
#include "systemStatus.h"
#include "systemTimers.h"

//
//static uint8_t   APCounter =0;


void SysOffEntry(SysEventId eventId, uint8_t eventParam)
{

}


void SysOffExit()
{


}


boolean SysOffAction(SysEventInfo* pEvtInfo)
{
	uint8 ret;

	ret = FALSE;

	//if()				//CAN 唤醒信号


	return ret;

}







