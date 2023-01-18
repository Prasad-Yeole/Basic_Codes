#include<stdio.h>

typedef int BOOL;

#define False 0
#define True  1


////////////////////////////////////////////////////////////
//
//
// Function name    :   ChkEvenOdd
// Function Date    :   19 Apr 2022
// Function Author  :   Prasad Yeole
// Parameters       :   Int
// Description      :   Accept number from user and check whether number is even or odd.
// Returns          :   Int
//
//
////////////////////////////////////////////////////////////


BOOL ChkEvenOdd(int iNo)
{
     BOOL bAns=False;
     
     if(iNo<0)
     {
        iNo=-iNo;
     }
     
     if(iNo%2 == 0)
     {
        bAns=True;
     }
     
     return bAns;
}

int main()
{
    int iValue = 0;
    BOOL bRet = 0;
    
    printf("Enter the value :");
    scanf("%d",&iValue);
    
    bRet=ChkEvenOdd(iValue);
    if(bRet == True)
    {
       printf("%d is a Even number\n",iValue);
    }
    else
    {
       printf("%d is a Odd number\n",iValue);
    }
    
    return 0;
}
