/*
4. Write program which accept number from user and return multiplication of all
factors of that number.
In this question you have to write the logic which should not be dependent on
other function.
Input :
Output : 7
7 (1)
Input :
Output : 9
3 (1 * 3)
Input :
Output : 12
144 (1 * 2 * 3 * 4 * 6)
*/

#include<stdio.h>

int FactMult(int iNo)
{
	int iAns = 1;
	
	for(int i = 1;i <= iNo/2 ; i++)
	{
		if(iNo % i == 0)
		{
			iAns *= i;			
		}
	}

	return iAns;
}

void Display(int iAns)
{
	printf("The multiplication of factors is %d \n",iAns);
}

int main()
{
	int iNo = 0;

	printf("Enter the number \n");
	scanf("%d",&iNo);
	
	int iAns = FactMult(iNo);
	Display(iAns);

	return 0;
}
