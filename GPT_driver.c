
# include"GPT_driver.h"

void Gpt_InitTimer(Gpt_ChannelType timer,Gpt_ModeType mode,Gpt_PreDefType predef,uint32 value){

	switch (timer){
			
		case Timer0	:
								SYSCTRL_RCGCTIMER |=0x01;											// enable timer0 clock
								GPTMCTL_TIMER0=0;															// disable timer output
								switch (predef){
									case _1us_16bit		: GPTMCFG_TIMER0=0x4;			//select 16-bit configuration option
																			break;
									case _1us_24bit		:	GPTMCFG_TIMER0=0x4;			//select 16-bit configuration option 
																			GPTMTAPR_TIMER0=255-1;  // Timer prescaler value 8 bits
																			break;
									case _1us_32bit		:	GPTMCFG_TIMER0=0x0;			//select 32-bit configuration option
																			break;
									case _100us_32bit	:	break;									// for 32/64 wide timers
									}
								switch (mode){
									case OneShot 	: GPTMTAMR_TIMER0=0x001;  			// select one shot mode 
																	break;
									case Continuse:	GPTMTAMR_TIMER0=0x002;  			// select periodic mode 
																	break;			
									}
								
								GPTMTAILR_TIMER0= value-1;											// timer start count down value
								GPTMICR_TIMER0=0x001;														// timeout flage bit clear
								GPTMIMR_TIMER0|=0x001;													// enable interrupt 
								GPTMCTL_TIMER0|=0x001;													// enable timer0 output
								NVIC->ISER[0]|=(1<<19);													// enable IRQ21 
								break;
								
								
							
									
		case Timer1	:	break;
		case Timer2	:	break;
		case Timer3	:	break;
		case Timer4	:	break;
		case Timer5	:	break;
		case Timer6	:	break;
		case Timer7	:	break;
		case Timer8	:	break;
		case Timer9	:	break;
		case Timer10:	break;
		case Timer11:	break;
			
	}	
	
}
