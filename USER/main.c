#include"stm32f10x.h"
#include"key.h"
#include"exti.h"
#include"led.h"

int main(){
	
	key_init();
	led_init();
//	led_on(1);
	key_on();
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	exti0_init();
	while(1){
		
	}
}
