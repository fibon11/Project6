#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int y;
	scanf_s("%d", &y);
	if (y % 4 != 0)
	{
		printf("%d年不是闰年",y);
	}
	else if (y % 4 == 0)
	{
		if (y % 400 != 0 && y % 100 == 0)
		{
			printf("%d年不是闰年", y);
		}
		else
		{
			printf("%d年是闰年", y);
		}
	}
	
	else   printf("Error");
	system("pause");
}
