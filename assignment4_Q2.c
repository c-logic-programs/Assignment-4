/*
2. Accept number from user and return difference between summation of non
factors and summation of factors.
In this question you have to write the logic which should not be dependent on
other function.
Input :
Output : 12
34 ((5 + 7 + 8 + 9 + 10 + 11) - (1 + 2 + 3 + 4 + 6))
Input :
Output : 9
28 ((2 + 4 + 5 + 6 + 7 + 8) - (1 + 3))
*/

#include<stdio.h>

int FactorDiff(int iNo)
{
	int iFact = 0;
	int iNonFact = 0;
	

	if(iNo < 0)
	{
		iNo = -iNo;
	}

	for(int i = 1; i < iNo; i++)
	{
		if(iNo % i == 0)
		{
			iFact += i;	
		}
		else
		{
			iNonFact += i;
		}
	}

	
	return iNonFact - iFact;
}

void Display(int iNo,int iAns)
{
	printf("The difference between factors and non factors of number %d is %d \n",iNo,iAns);
}

int main()
{
	int iNo = 0;

	printf("Enter the number \n");
	scanf("%d",&iNo);
	
	int iAns = FactorDiff(iNo);
	Display(iNo,iAns);

	return 0;
}
