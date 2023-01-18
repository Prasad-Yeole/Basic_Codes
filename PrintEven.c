#include<stdio.h>

////////////////////////////////////////////////////////////
//
//
// Function name    :   PrintEven
// Function Date    :   19 Apr 2022
// Function Author  :   Prasad Yeole
// Parameters       :   Int
// Description      :   Accept one number from user and print that number of even numbers on scrren. 
// Returns          :   NONE
//
//
////////////////////////////////////////////////////////////


void PrintEven(int iNo)
{
     int iCnt=0;
     
     if(iNo<0)
     {
        printf("Entered value should be positive.");
        return;
     }
     
     for(iCnt=1;iCnt<=iNo*2;iCnt++)
     {
         if(iCnt%2 == 0)
         {
            printf("%d\t",iCnt);
         }
     }
}

int main()
{
    int iValue=0;
    
    printf("Enter the value : ");
    scanf("%d",&iValue);
    
    PrintEven(iValue);
    printf("\n");
    
    return 0;
}
