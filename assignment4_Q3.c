/*
3. Accept number from user and check whether number is prime or not.
Prime number is such a number without any factor except 1.
In this question you have to write the logic which should not be dependent on
other function.
Input :
Output : 7
7 is prime number
Input :
Output : 36
36 is not prime number
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;


BOOL ChkPrime(int iNo)
{
	BOOL bRet = TRUE;

	for(int i = 2;i <= iNo/2 ; i++)
	{
		if(iNo % i == 0)
		{
			bRet = FALSE;		
			break;			
		}
	}

	return bRet;
}

void Display(BOOL iAns,int iNo)
{
	if(iAns)
	{
		printf("The number %d is prime \n",iNo);
		return;
	}

	printf("The number %d is not prime \n",iNo);
}

int main()
{
	int iNo = 0;

	printf("Enter the number \n");
	scanf("%d",&iNo);
	
	BOOL iAns = ChkPrime(iNo);
	Display(iAns,iNo);

	return 0;
}
