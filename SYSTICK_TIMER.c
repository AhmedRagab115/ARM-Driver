
# include"SYSTICK_TIMER.h"


void Systick_Init(uint8 systick_ctrl,uint32 ReloadValue,uint32 CurrentValue){

	SYSTICK_RELOAD = ReloadValue;
	SYSTICK_STCURRENT = CurrentValue;
	SYSTICK_CTRL =systick_ctrl;
		
}
