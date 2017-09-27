#include <stdio.h>
#include <unistd.h>
#include <wiringPi.h>
#define LED0 1 //gpio 18
int main()
{
	wiringPiSetup();
	pinMode(LED0,OUTPUT);
	
	while(1)
	{
		printf("1\n");
		digitalWrite(LED0,1);
		delay(7000);
		printf("2\n");
		digitalWrite(LED0,0);
		delay(5000);
	}
	return 0;

}

