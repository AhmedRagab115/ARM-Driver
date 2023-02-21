

#ifndef CONFIG_H_
#define CONFIG_H_
   
# include "TM4C123GH6PM.h" // header file contains registers addresses
# include "TM4C123.h" 
#include "Std_Macros.h" // header file contains typedefs 
/*define base addresses for all ports****************************** 

********Note*************
**these addresses needs to be changed for for every architecture **
**these addresses is for APP bus access if you want to access    **
**using AHP you need to change them or adding baseaddress for it **

*/

# define GPIO_PORTA_BASE_ADDRESS 0x40004000
# define GPIO_PORTB_BASE_ADDRESS 0x40005000
# define GPIO_PORTC_BASE_ADDRESS 0x40006000
# define GPIO_PORTD_BASE_ADDRESS 0x40007000
# define GPIO_PORTE_BASE_ADDRESS 0x40024000
# define GPIO_PORTF_BASE_ADDRESS 0x40025000

// *****************************************************************



/* 
****************************** GPIO DATA Register ********************************************* 
** define GPIO DATA Register for all ports to read or write to the port pins ******************
** In order to write to GPIODATA, the corresponding bits in the mask resulting from ***********
** the address bus bits [9:2], must be set. Otherwise, the bit values remain unchanged ********
** by the write.Similarly, the values read from this register are determined for each bit******
** by the mask bit derived from the address used to access the data register, bits [9:2]*******
** Bits that are set in the address mask cause the corresponding bits in GPIODATA to be read***
** and bits that are clear in the address mask cause the corresponding bits in GPIODATA *******
** to be read as 0, regardless of their value**************************************************
*/

# define GPIODATA_PORTA (*(( volatile unsigned long *) (GPIO_PORTA_BASE_ADDRESS + 0x000)
# define GPIODATA_PORTB (*(( volatile unsigned long *) (GPIO_PORTB_BASE_ADDRESS + 0x000)
# define GPIODATA_PORTC (*(( volatile unsigned long *) (GPIO_PORTC_BASE_ADDRESS + 0x000)
# define GPIODATA_PORTD (*(( volatile unsigned long *) (GPIO_PORTD_BASE_ADDRESS + 0x000)
# define GPIODATA_PORTE (*(( volatile unsigned long *) (GPIO_PORTE_BASE_ADDRESS + 0x000)
# define GPIODATA_PORTF (*(( volatile unsigned long *) (GPIO_PORTF_BASE_ADDRESS + 0x000)

//*********************************************************************************************

/* 
****************************** GPIO DIR Register **********************************************
** define GPIO DIR Register for all ports to config pins as input or output *******************
** Setting a bit in the GPIODIR register configures the corresponding pin to be an output******
** while clearing a bit configures the corresponding pin to be an input************************
** All bits are cleared by a reset, meaning all GPIO pins are inputs by default****************

*/

# define GPIODIR_PORTA (*(( volatile unsigned long *) (GPIO_PORTA_BASE_ADDRESS + 0x400)))
# define GPIODIR_PORTB (*(( volatile unsigned long *) (GPIO_PORTB_BASE_ADDRESS + 0x400)))
# define GPIODIR_PORTC (*(( volatile unsigned long *) (GPIO_PORTC_BASE_ADDRESS + 0x400)))
# define GPIODIR_PORTD (*(( volatile unsigned long *) (GPIO_PORTD_BASE_ADDRESS + 0x400)))
# define GPIODIR_PORTE (*(( volatile unsigned long *) (GPIO_PORTE_BASE_ADDRESS + 0x400)))
# define GPIODIR_PORTF (*(( volatile unsigned long *) (GPIO_PORTF_BASE_ADDRESS + 0x400)))

//*********************************************************************************************


/* 
****************************** GPIO DEN Register **********************************************
** define GPIO DEN Register for all ports to enable or disable pins use as digital I/O ********
** By default, all GPIO signals except pins with special conseiderations are configured *******
** out of reset to be undriven (tristate). Their digital function is disabled; they do not*****
** drive a logic value on the pin and they do not allow the pin voltage into the GPIO receiver*
** To use the pin as a digital input or output (either GPIO or alternate function) ************
** the corresponding GPIODEN bit must be set.

*/

# define GPIODEN_PORTA (*(( volatile unsigned long *) (GPIO_PORTA_BASE_ADDRESS + 0x51C)))
# define GPIODEN_PORTB (*(( volatile unsigned long *) (GPIO_PORTB_BASE_ADDRESS + 0x51C)))
# define GPIODEN_PORTC (*(( volatile unsigned long *) (GPIO_PORTC_BASE_ADDRESS + 0x51C)))
# define GPIODEN_PORTD (*(( volatile unsigned long *) (GPIO_PORTD_BASE_ADDRESS + 0x51C)))
# define GPIODEN_PORTE (*(( volatile unsigned long *) (GPIO_PORTE_BASE_ADDRESS + 0x51C)))
# define GPIODEN_PORTF (*(( volatile unsigned long *) (GPIO_PORTF_BASE_ADDRESS + 0x51C)))

//*********************************************************************************************


/*
***************************************General Perpuse Timer Register *************************

*/


# define GPT_TIMER0_BASE_ADDRESS 	0x40030000
# define GPT_TIMER1_BASE_ADDRESS 	0x40031000
# define GPt_TIMER2_BASE_ADDRESS	0x40032000
# define GPt_TIMER3_BASE_ADDRESS 	0x40033000
# define GPt_TIMER4_BASE_ADDRESS 	0x40034000
# define GPt_TIMER5_BASE_ADDRESS 	0x40035000
# define GPT_TIMER6_BASE_ADDRESS 	0x40036000
# define GPT_TIMER7_BASE_ADDRESS 	0x40037000
# define GPt_TIMER8_BASE_ADDRESS 	0x4004C000
# define GPt_TIMER9_BASE_ADDRESS 	0x4004D000
# define GPt_TIMER10_BASE_ADDRESS 0x4004E000
# define GPt_TIMER11_BASE_ADDRESS 0x4004F000

//*********************************************************************************************


/*
****************************************Timer 0 registers****************************************
*/

# define	GPTMCFG_TIMER0 			(*(( volatile unsigned long *) (GPT_TIMER0_BASE_ADDRESS + 0x000)))   //select 16 or 32 bit configration
# define 	GPTMTAMR_TIMER0 		(*(( volatile unsigned long *) (GPT_TIMER0_BASE_ADDRESS + 0x004)))	 //select mode of timer0 
# define	GPTMCTL_TIMER0 			(*(( volatile unsigned long *) (GPT_TIMER0_BASE_ADDRESS + 0x00C)))	 //disable & enable timer 0 output
# define	GPTMTAPR_TIMER0 		(*(( volatile unsigned long *) (GPT_TIMER0_BASE_ADDRESS + 0x038)))   //timer0 prescaler value
# define 	GPTMTAILR_TIMER0 		(*(( volatile unsigned long *) (GPT_TIMER0_BASE_ADDRESS + 0x028)))   //timer0 staring count value 
# define 	GPTMICR_TIMER0 			(*(( volatile unsigned long *) (GPT_TIMER0_BASE_ADDRESS + 0x024)))   //timer0 interrupt clear
# define 	GPTMIMR_TIMER0 			(*(( volatile unsigned long *) (GPT_TIMER0_BASE_ADDRESS + 0x018)))   //timer0 enable or disable interrupt mask




/*
***************************************** SYSTEM CONTROL REGISTERS ****************************
** define RCGCGPIO register to enable and disable GPIO modules in Run mode ********************
** When enabled, a module is provided a clock and accesses to module registers are allowed ****
** When disabled, the clock is disabled to save power and accesses to module registers ********

*/

# define SYSCTRL_BASE_ADDRESS 0x400FE000
# define SYSCTRL_RCGCGPIO 		(*(( volatile unsigned long *) (SYSCTRL_BASE_ADDRESS + 0x608)))		 // enable or disable Gpio port clock
# define SYSCTRL_RCGCTIMER 		(*(( volatile unsigned long *) (SYSCTRL_BASE_ADDRESS + 0x604)))    // enable or disable 16/32timer clock
# define SYSCTRL_RCGCWTIMER 	(*(( volatile unsigned long *) (SYSCTRL_BASE_ADDRESS + 0x65C)))		 // enable or disable 32/64timer clock
//*********************************************************************************************


/*
************************************SYSTICK TIMER Registers*************************************

*/
# define SYSTICK_BASE_ADDRESS 	0xE000E000
# define SYSTICK_CTRL 					(*(( volatile unsigned long *) (SYSTICK_BASE_ADDRESS + 0x010)))		 //  enables the SysTick features
# define SYSTICK_RELOAD 				(*(( volatile unsigned long *) (SYSTICK_BASE_ADDRESS + 0x014)))		 //  specifies the start value to load into the SysTick Current Value(STCURRENT) register when the counter reaches 0
# define SYSTICK_STCURRENT 			(*(( volatile unsigned long *) (SYSTICK_BASE_ADDRESS + 0x018)))		 //  initialize current value register 

//***********************************************************************************************

typedef enum {PortA=1,PortB,PortC,PortD,PortE,PortF} PortType ;
typedef enum {Pin0=0,Pin1,Pin2,Pin3,Pin4,Pin5,Pin6,Pin7} ChannelType ;
typedef enum {low=0,high} LevelType ;



#endif
