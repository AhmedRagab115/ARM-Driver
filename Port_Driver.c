

# include "Port_Driver.h"



void Dio_Init(PortType port,ChannelType pin,Port_Dir dir){

	switch ( port ){
	
		case PortA : 
								switch (pin){
								
									case Pin0 : break;
									case Pin1 : break;
									case Pin2 : break;										
									case Pin3 : break;
									case Pin4 : break;
									case Pin5 : break;
									case Pin6 :
														switch (dir){
															case Init_In  : GPIODEN_PORTA |=0x40; GPIODIR_PORTA &=0xBF; break;
															case Init_OUT : GPIODEN_PORTA |=0x40; GPIODIR_PORTA |=0x40; break; 
															}
														 break;
									case Pin7 : 
														 switch (dir){
															case Init_In  : GPIODEN_PORTA |=0x80; GPIODIR_PORTA &=0x7F; break;
															case Init_OUT : GPIODEN_PORTA |=0x80; GPIODIR_PORTA |=0x80; break;
															}
														 
														 break;
								
								}
								SYSCTRL_RCGCGPIO |=0x01;
								break;
		case PortB :
								switch (pin){
								
									case Pin0 :
														switch (dir){
															case Init_In  : GPIODEN_PORTB |=0x01; GPIODIR_PORTB &=0xFE; break;
															case Init_OUT : GPIODEN_PORTB |=0x01; GPIODIR_PORTB |=0x01; break;
															}
														 break;
									case Pin1 :
														switch (dir){
															case Init_In  : GPIODEN_PORTB |=0x02; GPIODIR_PORTB &=0xFD; break;
															case Init_OUT : GPIODEN_PORTB |=0x02; GPIODIR_PORTB |=0x02; break;
															}
														 break;
									case Pin2 : break;										
									case Pin3 : break;
									case Pin4 :
														switch (dir){
															case Init_In  : GPIODEN_PORTB |=0x10; GPIODIR_PORTB &=0xEF; break;
															case Init_OUT : GPIODEN_PORTB |=0x10; GPIODIR_PORTB |=0x10; break;
															}                           
														 break;                       
									case Pin5 :                             
														switch (dir){                 
															case Init_In  : GPIODEN_PORTB |=0x20; GPIODIR_PORTB &=0xDF; break;
															case Init_OUT : GPIODEN_PORTB |=0x20; GPIODIR_PORTB |=0x20; break;
															}
														 break;
									case Pin6 :
														switch (dir){
															case Init_In  : GPIODEN_PORTB |=0x40; GPIODIR_PORTB &=0xBF; break;
															case Init_OUT : GPIODEN_PORTB |=0x40; GPIODIR_PORTB |=0x40; break;
															}
														 break;
									case Pin7 : 
														 switch (dir){
															case Init_In  : GPIODEN_PORTB |=0x80; GPIODIR_PORTB &=0x7F; break;
															case Init_OUT : GPIODEN_PORTB |=0x80; GPIODIR_PORTB |=0x80; break;
															}
														 
														 break;
								
								}
								SYSCTRL_RCGCGPIO |=0x02;
								break;
		case PortC :
								switch (pin){
								
									case Pin0 : break;
									case Pin1 : break;
									case Pin2 : break;										
									case Pin3 : break;
									case Pin4 :
														switch (dir){
															case Init_In  : GPIODEN_PORTC |=0x10; GPIODIR_PORTC &=0xEF; break;
															case Init_OUT : GPIODEN_PORTC |=0x10; GPIODIR_PORTC |=0x10; break;
															}
														 break;
									case Pin5 :
														switch (dir){
															case Init_In  : GPIODEN_PORTC |=0x20; GPIODIR_PORTC &=0xDF; break;
															case Init_OUT : GPIODEN_PORTC |=0x20; GPIODIR_PORTC |=0x20; break;
															}
														 break;
									case Pin6 :
														switch (dir){
															case Init_In  : GPIODEN_PORTC |=0x40; GPIODIR_PORTC &=0xBF; break;
															case Init_OUT : GPIODEN_PORTC |=0x40; GPIODIR_PORTC |=0x40; break;
															}
														 break;
									case Pin7 : 
														 switch (dir){
															case Init_In  : GPIODEN_PORTC |=0x80; GPIODIR_PORTC &=0x7F; break;
															case Init_OUT : GPIODEN_PORTC |=0x80; GPIODIR_PORTC |=0x80; break;
															}
														 
														 break;
								
								}
								SYSCTRL_RCGCGPIO |=0x04;
								break;
		case PortD :
								switch (pin){
								
									case Pin0 :
														switch (dir){
															case Init_In  : GPIODEN_PORTD |=0x01; GPIODIR_PORTD &=0xFE; break;
															case Init_OUT : GPIODEN_PORTD |=0x01; GPIODIR_PORTD |=0x01; break;
															}
														 break;
									case Pin1 :
														switch (dir){
															case Init_In  : GPIODEN_PORTD |=0x02; GPIODIR_PORTD &=0xFD; break;
															case Init_OUT : GPIODEN_PORTD |=0x02; GPIODIR_PORTD |=0x02; break;
															}
														 break;
									case Pin2 :
														switch (dir){
															case Init_In  : GPIODEN_PORTD |=0x04; GPIODIR_PORTD &=0xFB; break;
															case Init_OUT : GPIODEN_PORTD |=0x04; GPIODIR_PORTD |=0x04; break;
															}
														 break;										
									case Pin3 : 
														switch (dir){
															case Init_In  : GPIODEN_PORTD |=0x08; GPIODIR_PORTD &=0xF7; break;
															case Init_OUT : GPIODEN_PORTD |=0x08; GPIODIR_PORTD |=0x08; break;
															}
														 break;
									case Pin4 :
														switch (dir){
															case Init_In  : GPIODEN_PORTD |=0x10; GPIODIR_PORTD &=0xEF; break;
															case Init_OUT : GPIODEN_PORTD |=0x10; GPIODIR_PORTD |=0x10; break;
															}
														 break;
									case Pin5 :
														switch (dir){
															case Init_In  : GPIODEN_PORTD |=0x20; GPIODIR_PORTD &=0xDF; break;
															case Init_OUT : GPIODEN_PORTD |=0x20; GPIODIR_PORTD |=0x20; break;
															}
														 break;
									case Pin6 :
														switch (dir){
															case Init_In  : GPIODEN_PORTD |=0x40; GPIODIR_PORTD &=0xBF; break;
															case Init_OUT : GPIODEN_PORTD |=0x40; GPIODIR_PORTD |=0x40; break;
															}
														 break;
									case Pin7 : break;
								
								}
								SYSCTRL_RCGCGPIO |=0x08;
								break;
		
		case PortE :
								switch (pin){
								
									case Pin0 :
														switch (dir){
															case Init_In  : GPIODEN_PORTE |=0x01; GPIODIR_PORTE &=0xFE; break;
															case Init_OUT : GPIODEN_PORTE |=0x01; GPIODIR_PORTE |=0x01; break;
															}
														 break;
									case Pin1 :
														switch (dir){
															case Init_In  : GPIODEN_PORTE |=0x02; GPIODIR_PORTE &=0xFD; break;
															case Init_OUT : GPIODEN_PORTE |=0x02; GPIODIR_PORTE |=0x02; break;
															}
														 break;
									case Pin2 :
														switch (dir){
															case Init_In  : GPIODEN_PORTE |=0x04; GPIODIR_PORTE &=0xFB; break;
															case Init_OUT : GPIODEN_PORTE |=0x04; GPIODIR_PORTE |=0x04; break;
															}
														 break;									
									case Pin3 :
														switch (dir){
															case Init_In  : GPIODEN_PORTE |=0x08; GPIODIR_PORTE &=0xF7; break;
															case Init_OUT : GPIODEN_PORTE |=0x08; GPIODIR_PORTE |=0x08; break;
															}
														 break;
									case Pin4 :
														switch (dir){
															case Init_In  : GPIODEN_PORTE |=0x10; GPIODIR_PORTE &=0xEF; break;
															case Init_OUT : GPIODEN_PORTE |=0x10; GPIODIR_PORTE |=0x10; break;
															}
														 break;
									case Pin5 :
														switch (dir){
															case Init_In  : GPIODEN_PORTE |=0x20; GPIODIR_PORTE &=0xDF; break;
															case Init_OUT : GPIODEN_PORTE |=0x20; GPIODIR_PORTE |=0x20; break;
															}
														 break;
									case Pin6 :
														switch (dir){
															case Init_In  : GPIODEN_PORTE |=0x40; GPIODIR_PORTE &=0xBF; break;
															case Init_OUT : GPIODEN_PORTE |=0x40; GPIODIR_PORTE |=0x40; break;
															}
														 break;
									case Pin7 : 
														 switch (dir){
															case Init_In  : GPIODEN_PORTE |=0x80; GPIODIR_PORTE &=0x7F; break;
															case Init_OUT : GPIODEN_PORTE |=0x80; GPIODIR_PORTE |=0x80; break;
															}
														 
														 break;
								
								}
								SYSCTRL_RCGCGPIO |=0x10;
								break;
		
		case PortF :
								switch (pin){
								
									case Pin0 : 
														switch (dir){
															case Init_In  : GPIODEN_PORTF |=0x01; GPIODIR_PORTF &=0xFE; break;
															case Init_OUT : GPIODEN_PORTF |=0x01; GPIODIR_PORTF |=0x01; break;
															}
														 break;
									case Pin1 : 
														switch (dir){
															case Init_In  : GPIODEN_PORTF |=0x02; GPIODIR_PORTF &=0xFD; break;
															case Init_OUT : GPIODEN_PORTF |=0x02; GPIODIR_PORTF |=0x02; break;
															}
														 break;
									case Pin2 :
														switch (dir){
															case Init_In  : GPIODEN_PORTF |=0x04; GPIODIR_PORTF &=0xFB; break;
															case Init_OUT : GPIODEN_PORTF |=0x04; GPIODIR_PORTF |=0x04; break;
															}
														 break;										
									case Pin3 : 
														switch (dir){
															case Init_In  : GPIODEN_PORTF |=0x08; GPIODIR_PORTF &=0xF7; break;
															case Init_OUT : GPIODEN_PORTF |=0x08; GPIODIR_PORTF |=0x08; break;
															}
														 break;
									case Pin4 :
														switch (dir){
															case Init_In  : GPIODEN_PORTF |=0x10; GPIODIR_PORTF &=0xEF; break;
															case Init_OUT : GPIODEN_PORTF |=0x10; GPIODIR_PORTF |=0x10; break;
															}
														 break;
									case Pin5 :
														switch (dir){
															case Init_In  : GPIODEN_PORTF |=0x20; GPIODIR_PORTF &=0xDF; break;
															case Init_OUT : GPIODEN_PORTF |=0x20; GPIODIR_PORTF |=0x20; break;
															}
														 break;
									case Pin6 :
														switch (dir){
															case Init_In  : GPIODEN_PORTF |=0x40; GPIODIR_PORTF &=0xBF; break;
															case Init_OUT : GPIODEN_PORTF |=0x40; GPIODIR_PORTF |=0x40; break;
															}
														 break;
									case Pin7 : 
														 switch (dir){
															case Init_In  : GPIODEN_PORTF |=0x80; GPIODIR_PORTF &=0x7F; break;
															case Init_OUT : GPIODEN_PORTF |=0x80; GPIODIR_PORTF |=0x80; break;
															}
														 
														 break;
								
								}
								SYSCTRL_RCGCGPIO |=0x20;
								break;
	}
}
