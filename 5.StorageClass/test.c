#include <stdint.h>

/*
Description: delay x giay
*/
void delay(void)
{
	uint32_t i;
	for (i = 0; i < 5000000; ++i)
	{
		
	}
	
}

static int count = 0;


void funCount(void)
{
	count++;
	delay(); // delay x giay
}
