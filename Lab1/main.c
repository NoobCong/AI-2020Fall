#include <stdio.h>

int step = 0;

void monkeyGo(char x,char y)
{
	printf("Step %d�����Ӵ�%c�ߵ�%c\n",++step,x,y);
}

void moveBox(char x,char y)
{
	printf("Step %d�����Ӱ����Ӵ�%c�ᵽ%c\n",++step,x,y);
}

void climbBox()
{
	printf("Step %d��������������\n",++step);
}

void catchBanana()
{
	printf("Step %d�������õ��㽶\n",++step);
}

int main(void)
{

	char atMonkey = 65; 
    char atBox = 66; 
    char atBanana = 67; 

	if(atMonkey != atBox)
	{
		monkeyGo(atMonkey,atBox);
	}

	if(atBox != atBanana)
	{
		moveBox(atBox,atBanana);
	}

	climbBox();
	catchBanana();

	return 0;
}
