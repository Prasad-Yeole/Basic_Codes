#include<stdio.h>

////////////////////////////////////////////////////////////
//
//
// Function name    :   Print
// Function Date    :   19 Apr 2022
// Function Author  :   Prasad Yeole
// Parameters       :   NONE
// Description      :   Accept one number from user and print the factors of that number.
// Returns          :   NONE
//
//
////////////////////////////////////////////////////////////


void DisplayFactor(int iNo)
{
     int iCnt=0;
     
     if(iNo<0)
     {
        printf("Entered value should be positive.");
        return;
     }
     
     for(iCnt=1;iCnt<iNo;iCnt++)
     {
         if(iNo%iCnt == 0)
         {
            printf("%d\t",iCnt);
         }
     }
}


int main()
{
    int iValue=0;
    
    printf("Enter The Value : ");
    scanf("%d",&iValue);
    
    DisplayFactor(iValue);
    printf("\n");
    
    return 0;
}
