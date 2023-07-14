#include _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("어서 오시랑께  몇살이여\n");
	int age;
	scanf("%d", &age);

	printf("%d살 이라고?");

	if (age > 21)
	{
		printf("늙었구만");
	}
	else
	{
		printf("어리구만");
	}

}