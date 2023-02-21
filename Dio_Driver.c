
# include"Dio_Driver.h"

uint8 Dio_ReadChannel(ChannelType pin,PortType port){
	uint8 data;
	switch ( port ){
	
		case PortA : 
								switch (pin){
								
									case Pin0 :data = (uint8)(*((  unsigned long *) (GPIO_PORTA_BASE_ADDRESS + 0x000+0x004))); break;
									case Pin1 :data = (uint8)(*((  unsigned long *) (GPIO_PORTA_BASE_ADDRESS + 0x000+0x008))); break;
									case Pin2 :data = (uint8)(*((  unsigned long *) (GPIO_PORTA_BASE_ADDRESS + 0x000+0x010))); break;										
									case Pin3 :data = (uint8)(*((  unsigned long *) (GPIO_PORTA_BASE_ADDRESS + 0x000+0x020))); break;
									case Pin4 :data = (uint8)(*((  unsigned long *) (GPIO_PORTA_BASE_ADDRESS + 0x000+0x040))); break;
									case Pin5 :data = (uint8)(*((  unsigned long *) (GPIO_PORTA_BASE_ADDRESS + 0x000+0x080))); break;
									case Pin6 :data = (uint8)(*((  unsigned long *) (GPIO_PORTA_BASE_ADDRESS + 0x000+0x100))); break;
									case Pin7 :data = (uint8)(*((  unsigned long *) (GPIO_PORTA_BASE_ADDRESS + 0x000+0x200))); break;
								
								}
								
								break;
		case PortB :
								switch (pin){
								
									case Pin0 :data = (uint8)(*((  unsigned long *) (GPIO_PORTB_BASE_ADDRESS + 0x000+0x004))); break;
									case Pin1 :data = (uint8)(*((  unsigned long *) (GPIO_PORTB_BASE_ADDRESS + 0x000+0x008))); break;
									case Pin2 :data = (uint8)(*((  unsigned long *) (GPIO_PORTB_BASE_ADDRESS + 0x000+0x010))); break;										
									case Pin3 :data = (uint8)(*((  unsigned long *) (GPIO_PORTB_BASE_ADDRESS + 0x000+0x020))); break;
									case Pin4 :data = (uint8)(*((  unsigned long *) (GPIO_PORTB_BASE_ADDRESS + 0x000+0x040))); break;
									case Pin5 :data = (uint8)(*((  unsigned long *) (GPIO_PORTB_BASE_ADDRESS + 0x000+0x080))); break;
									case Pin6 :data = (uint8)(*((  unsigned long *) (GPIO_PORTB_BASE_ADDRESS + 0x000+0x100))); break;
									case Pin7 :data = (uint8)(*((  unsigned long *) (GPIO_PORTB_BASE_ADDRESS + 0x000+0x200))); break;
								
								}
								
								break;
		case PortC :
								switch (pin){
								
									case Pin0 :data = (uint8)(*((  unsigned long *) (GPIO_PORTC_BASE_ADDRESS + 0x000+0x004))); break;
									case Pin1 :data = (uint8)(*((  unsigned long *) (GPIO_PORTC_BASE_ADDRESS + 0x000+0x008))); break;
									case Pin2 :data = (uint8)(*((  unsigned long *) (GPIO_PORTC_BASE_ADDRESS + 0x000+0x010))); break;										
									case Pin3 :data = (uint8)(*((  unsigned long *) (GPIO_PORTC_BASE_ADDRESS + 0x000+0x020))); break;
									case Pin4 :data = (uint8)(*((  unsigned long *) (GPIO_PORTC_BASE_ADDRESS + 0x000+0x040))); break;
									case Pin5 :data = (uint8)(*((  unsigned long *) (GPIO_PORTC_BASE_ADDRESS + 0x000+0x080))); break;
									case Pin6 :data = (uint8)(*((  unsigned long *) (GPIO_PORTC_BASE_ADDRESS + 0x000+0x100))); break;
									case Pin7 :data = (uint8)(*((  unsigned long *) (GPIO_PORTC_BASE_ADDRESS + 0x000+0x200))); break;
								
								}
								
								break;
		case PortD :
								switch (pin){
								
									case Pin0 :data = (uint8)(*((  unsigned long *) (GPIO_PORTD_BASE_ADDRESS + 0x000+0x004))); break;
									case Pin1 :data = (uint8)(*((  unsigned long *) (GPIO_PORTD_BASE_ADDRESS + 0x000+0x008))); break;
									case Pin2 :data = (uint8)(*((  unsigned long *) (GPIO_PORTD_BASE_ADDRESS + 0x000+0x010))); break;										
									case Pin3 :data = (uint8)(*((  unsigned long *) (GPIO_PORTD_BASE_ADDRESS + 0x000+0x020))); break;
									case Pin4 :data = (uint8)(*((  unsigned long *) (GPIO_PORTD_BASE_ADDRESS + 0x000+0x040))); break;
									case Pin5 :data = (uint8)(*((  unsigned long *) (GPIO_PORTD_BASE_ADDRESS + 0x000+0x080))); break;
									case Pin6 :data = (uint8)(*((  unsigned long *) (GPIO_PORTD_BASE_ADDRESS + 0x000+0x100))); break;
									case Pin7 :data = (uint8)(*((  unsigned long *) (GPIO_PORTD_BASE_ADDRESS + 0x000+0x200))); break;
								
								}
								break;
		
		case PortE :
								switch (pin){
								
									case Pin0 :data = (uint8)(*((  unsigned long *) (GPIO_PORTE_BASE_ADDRESS + 0x000+0x004))); break;
									case Pin1 :data = (uint8)(*((  unsigned long *) (GPIO_PORTE_BASE_ADDRESS + 0x000+0x008))); break;
									case Pin2 :data = (uint8)(*((  unsigned long *) (GPIO_PORTE_BASE_ADDRESS + 0x000+0x010))); break;										
									case Pin3 :data = (uint8)(*((  unsigned long *) (GPIO_PORTE_BASE_ADDRESS + 0x000+0x020))); break;
									case Pin4 :data = (uint8)(*((  unsigned long *) (GPIO_PORTE_BASE_ADDRESS + 0x000+0x040))); break;
									case Pin5 :data = (uint8)(*((  unsigned long *) (GPIO_PORTE_BASE_ADDRESS + 0x000+0x080))); break;
									case Pin6 :data = (uint8)(*((  unsigned long *) (GPIO_PORTE_BASE_ADDRESS + 0x000+0x100))); break;
									case Pin7 :data = (uint8)(*((  unsigned long *) (GPIO_PORTE_BASE_ADDRESS + 0x000+0x200))); break;
								
								}
								break;
		
		case PortF :
								switch (pin){
								
									case Pin0 :data = (uint8)(*((  unsigned long *) (GPIO_PORTF_BASE_ADDRESS + 0x000+0x004))); break;
									case Pin1 :data = (uint8)(*((  unsigned long *) (GPIO_PORTF_BASE_ADDRESS + 0x000+0x008))); break;
									case Pin2 :data = (uint8)(*((  unsigned long *) (GPIO_PORTF_BASE_ADDRESS + 0x000+0x010))); break;										
									case Pin3 :data = (uint8)(*((  unsigned long *) (GPIO_PORTF_BASE_ADDRESS + 0x000+0x020))); break;
									case Pin4 :data = (uint8)(*((  unsigned long *) (GPIO_PORTF_BASE_ADDRESS + 0x000+0x040))); break;
									case Pin5 :data = (uint8)(*((  unsigned long *) (GPIO_PORTF_BASE_ADDRESS + 0x000+0x080))); break;
									case Pin6 :data = (uint8)(*((  unsigned long *) (GPIO_PORTF_BASE_ADDRESS + 0x000+0x100))); break;
									case Pin7 :data = (uint8)(*((  unsigned long *) (GPIO_PORTF_BASE_ADDRESS + 0x000+0x200))); break;
								
								}
								
							break;
	}
	return data;

}


uint8 Dio_ReadPort(PortType port){
uint8 data;
	switch ( port ) {
	
		case PortA :data = (uint8)(*((  unsigned long *) (GPIO_PORTA_BASE_ADDRESS + 0x000+0x3FC))); break;
		case PortB :data = (uint8)(*((  unsigned long *) (GPIO_PORTB_BASE_ADDRESS + 0x000+0x3FC))); break;
		case PortC :data = (uint8)(*((  unsigned long *) (GPIO_PORTC_BASE_ADDRESS + 0x000+0x3FC))); break;
		case PortD :data = (uint8)(*((  unsigned long *) (GPIO_PORTD_BASE_ADDRESS + 0x000+0x3FC))); break;
		case PortE :data = (uint8)(*((  unsigned long *) (GPIO_PORTE_BASE_ADDRESS + 0x000+0x3FC))); break;
		case PortF :data = (uint8)(*((  unsigned long *) (GPIO_PORTF_BASE_ADDRESS + 0x000+0x3FC))); break;

	}	


return data;
}






void Dio_WriteChannel( ChannelType pin,PortType port,LevelType data){
	
	switch ( port ){
	
		case PortA : 
								switch (pin){
								
									case Pin0 : (*((  unsigned long *) (GPIO_PORTA_BASE_ADDRESS + 0x000+0x004)))=data; break;
									case Pin1 :	(*((  unsigned long *) (GPIO_PORTA_BASE_ADDRESS + 0x000+0x008)))=data; break;
									case Pin2 : (*((  unsigned long *) (GPIO_PORTA_BASE_ADDRESS + 0x000+0x010)))=data; break;										
									case Pin3 :	(*((  unsigned long *) (GPIO_PORTA_BASE_ADDRESS + 0x000+0x020)))=data; break;
									case Pin4 :	(*((  unsigned long *) (GPIO_PORTA_BASE_ADDRESS + 0x000+0x040)))=data; break;
									case Pin5 :	(*((  unsigned long *) (GPIO_PORTA_BASE_ADDRESS + 0x000+0x080)))=data; break;
									case Pin6 :	(*((  unsigned long *) (GPIO_PORTA_BASE_ADDRESS + 0x000+0x100)))=data; break;
									case Pin7 :	(*((  unsigned long *) (GPIO_PORTA_BASE_ADDRESS + 0x000+0x200)))=data; break;
								
								}
								
								break;
		case PortB :
								switch (pin){
								
									case Pin0 : (*((  unsigned long *) (GPIO_PORTB_BASE_ADDRESS + 0x000+0x004)))=data; break;
									case Pin1 :	(*((  unsigned long *) (GPIO_PORTB_BASE_ADDRESS + 0x000+0x008)))=data; break;
									case Pin2 : (*((  unsigned long *) (GPIO_PORTB_BASE_ADDRESS + 0x000+0x010)))=data; break;										
									case Pin3 :	(*((  unsigned long *) (GPIO_PORTB_BASE_ADDRESS + 0x000+0x020)))=data; break;
									case Pin4 :	(*((  unsigned long *) (GPIO_PORTB_BASE_ADDRESS + 0x000+0x040)))=data; break;
									case Pin5 :	(*((  unsigned long *) (GPIO_PORTB_BASE_ADDRESS + 0x000+0x080)))=data; break;
									case Pin6 :	(*((  unsigned long *) (GPIO_PORTB_BASE_ADDRESS + 0x000+0x100)))=data; break;
									case Pin7 :	(*((  unsigned long *) (GPIO_PORTB_BASE_ADDRESS + 0x000+0x200)))=data; break;
								
								}
								
								break;
		case PortC :
								switch (pin){
								
									case Pin0 : (*((  unsigned long *) (GPIO_PORTC_BASE_ADDRESS + 0x000+0x004)))=data; break;
									case Pin1 :	(*((  unsigned long *) (GPIO_PORTC_BASE_ADDRESS + 0x000+0x008)))=data; break;
									case Pin2 : (*((  unsigned long *) (GPIO_PORTC_BASE_ADDRESS + 0x000+0x010)))=data; break;										
									case Pin3 :	(*((  unsigned long *) (GPIO_PORTC_BASE_ADDRESS + 0x000+0x020)))=data; break;
									case Pin4 :	(*((  unsigned long *) (GPIO_PORTC_BASE_ADDRESS + 0x000+0x040)))=data; break;
									case Pin5 :	(*((  unsigned long *) (GPIO_PORTC_BASE_ADDRESS + 0x000+0x080)))=data; break;
									case Pin6 :	(*((  unsigned long *) (GPIO_PORTC_BASE_ADDRESS + 0x000+0x100)))=data; break;
									case Pin7 :	(*((  unsigned long *) (GPIO_PORTC_BASE_ADDRESS + 0x000+0x200)))=data; break;
								
								}
								
								break;
		case PortD :
								switch (pin){
								
									case Pin0 : (*((  unsigned long *) (GPIO_PORTD_BASE_ADDRESS + 0x000+0x004)))=data; break;
									case Pin1 :	(*((  unsigned long *) (GPIO_PORTD_BASE_ADDRESS + 0x000+0x008)))=data; break;
									case Pin2 : (*((  unsigned long *) (GPIO_PORTD_BASE_ADDRESS + 0x000+0x010)))=data; break;										
									case Pin3 :	(*((  unsigned long *) (GPIO_PORTD_BASE_ADDRESS + 0x000+0x020)))=data; break;
									case Pin4 :	(*((  unsigned long *) (GPIO_PORTD_BASE_ADDRESS + 0x000+0x040)))=data; break;
									case Pin5 :	(*((  unsigned long *) (GPIO_PORTD_BASE_ADDRESS + 0x000+0x080)))=data; break;
									case Pin6 :	(*((  unsigned long *) (GPIO_PORTD_BASE_ADDRESS + 0x000+0x100)))=data; break;
									case Pin7 :	(*((  unsigned long *) (GPIO_PORTD_BASE_ADDRESS + 0x000+0x200)))=data; break;
								
								}
								break;
		
		case PortE :
								switch (pin){
								
									case Pin0 : (*((  unsigned long *) (GPIO_PORTE_BASE_ADDRESS + 0x000+0x004)))=data; break;
									case Pin1 :	(*((  unsigned long *) (GPIO_PORTE_BASE_ADDRESS + 0x000+0x008)))=data; break;
									case Pin2 : (*((  unsigned long *) (GPIO_PORTE_BASE_ADDRESS + 0x000+0x010)))=data; break;										
									case Pin3 :	(*((  unsigned long *) (GPIO_PORTE_BASE_ADDRESS + 0x000+0x020)))=data; break;
									case Pin4 :	(*((  unsigned long *) (GPIO_PORTE_BASE_ADDRESS + 0x000+0x040)))=data; break;
									case Pin5 :	(*((  unsigned long *) (GPIO_PORTE_BASE_ADDRESS + 0x000+0x080)))=data; break;
									case Pin6 :	(*((  unsigned long *) (GPIO_PORTE_BASE_ADDRESS + 0x000+0x100)))=data; break;
									case Pin7 :	(*((  unsigned long *) (GPIO_PORTE_BASE_ADDRESS + 0x000+0x200)))=data; break;
								
								}
								break;
		
		case PortF :
								switch (pin){
								
									case Pin0 : (*((  unsigned long *) (GPIO_PORTF_BASE_ADDRESS + 0x000+0x004)))=data; break;
									case Pin1 :	(*((  unsigned long *) (GPIO_PORTF_BASE_ADDRESS + 0x000+0x008)))=data; break;
									case Pin2 : (*((  unsigned long *) (GPIO_PORTF_BASE_ADDRESS + 0x000+0x010)))=data; break;										
									case Pin3 :	(*((  unsigned long *) (GPIO_PORTF_BASE_ADDRESS + 0x000+0x020)))=data; break;
									case Pin4 :	(*((  unsigned long *) (GPIO_PORTF_BASE_ADDRESS + 0x000+0x040)))=data; break;
									case Pin5 :	(*((  unsigned long *) (GPIO_PORTF_BASE_ADDRESS + 0x000+0x080)))=data; break;
									case Pin6 :	(*((  unsigned long *) (GPIO_PORTF_BASE_ADDRESS + 0x000+0x100)))=data; break;
									case Pin7 :	(*((  unsigned long *) (GPIO_PORTF_BASE_ADDRESS + 0x000+0x200)))=data; break;
								
								}
								
							break;
	}
	
}




void Dio_WritePort(PortType port,uint8 data){
	

	switch ( port ) {
	
		case PortA :(*((  unsigned long *) (GPIO_PORTA_BASE_ADDRESS + 0x000+0x3FC)))=data; break;
		case PortB :(*((  unsigned long *) (GPIO_PORTB_BASE_ADDRESS + 0x000+0x3FC)))=data; break;
		case PortC :(*((  unsigned long *) (GPIO_PORTC_BASE_ADDRESS + 0x000+0x3FC)))=data; break;
		case PortD :(*((  unsigned long *) (GPIO_PORTD_BASE_ADDRESS + 0x000+0x3FC)))=data; break;
		case PortE :(*((  unsigned long *) (GPIO_PORTE_BASE_ADDRESS + 0x000+0x3FC)))=data; break;
		case PortF :(*((  unsigned long *) (GPIO_PORTF_BASE_ADDRESS + 0x000+0x3FC)))=data; break;

	}
}
