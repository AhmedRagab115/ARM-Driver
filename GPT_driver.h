
#ifndef GPT_DRIVER_H_
#define GPT_DRIVER_H_

# include "Config.h"

typedef enum {Timer0=0,Timer1,Timer2,Timer3,Timer4,Timer5,Timer6,Timer7,Timer8,Timer9,Timer10,Timer11}Gpt_ChannelType;
typedef enum {OneShot=0,Continuse}Gpt_ModeType;
typedef enum {_1us_16bit=0,_1us_24bit,_1us_32bit,_100us_32bit} Gpt_PreDefType;

void Gpt_InitTimer(Gpt_ChannelType timer,Gpt_ModeType mode,Gpt_PreDefType predef,uint32 value);
void Gpt_StartTimer(Gpt_ChannelType timer);
void Gpt_StopTimer(Gpt_ChannelType timer);






#endif
