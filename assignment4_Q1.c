/*
1. Accept number from user and return difference between largest factor and
smallest factor of that number.
In this question you have to write the logic which should not be dependent on
other function.
(Smallest factor should not be 1 and largest factor should not be that number
itself)
Input :
Output : 18
7 (9-2)
Input :
Output : 51
14 (17-3)
Input :
Output : 7
0 (0 - 0)
Input :
Output : 4
0 (2 - 2)

*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

int FactorSmallLarge(int iNo)
{
	int iSmall = 0;
	int iLarge = 0;
	BOOL Flag = TRUE;

	if(iNo < 0)
	{
		iNo = -iNo;
	}

	for(int i = 2; i <= iNo/2; i++)
	{
		if(iNo % i == 0)
		{
			iLarge = i;
			
			if(Flag == TRUE)
			{
				iSmall = i;
				Flag = FALSE;
			}			
		}
	}

	
	return iLarge - iSmall;
}

void Display(int iNo,int iAns)
{
	printf("The difference between largest factor and smallest factor of number %d is %d \n",iNo,iAns);
}

int main()
{
	int iNo = 0;

	printf("Enter the number \n");
	scanf("%d",&iNo);
	
	int iAns = FactorSmallLarge(iNo);
	Display(iNo,iAns);

	return 0;
}
