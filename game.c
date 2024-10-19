#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
	int i = 0;
	char buffer[64];
	
	strcpy(buffer,argv[1]);

	if(i>0)
	printf("You have completed this challenge.I variable overwritten with 0x%x\n",i);
	else
	printf("Try again! I variable still %d\n",i);
	return 0;
}

//gcc -g -z execstack -fno-stack-protector game.c -o game