#include<stdio.h>

#define True  1
#define False 0

typedef int BOOL;

////////////////////////////////////////////////////////////
//
//
// Function name    :   ChkDivisible
// Function Date    :   19 Apr 2022
// Function Author  :   Prasad Yeole
// Parameters       :   Int
// Description      :   To check whether the number is divisible by 5 or not.
// Returns          :   Int
//
//
////////////////////////////////////////////////////////////

BOOL ChkDivisible(int iNo)
{
     BOOL bAns = False;
     
     if((iNo % 5) == 0)
     {
        return True;
     }
     
     return bAns;
}

int main()
{
    int iValue=0;
    BOOL bRet=False;
    
    printf("Enter the number you want to check :");
    scanf("%d",&iValue);
    
    bRet=ChkDivisible(iValue);
    if(bRet == True)
    {
       printf("%d is divisible by 5\n",iValue);
    }
    else
    {
       printf("%d is not Divisible by 5\n",iValue);
    }
    
    return 0;
}
