////////////////////////////////////////////////////////////
//
//
// Function name    :   Display
// Function Date    :   19 Apr 2022
// Function Author  :   Prasad Yeole
// Parameters       :   Int
// Description      :   To display Hello n times on screen. 
// Returns          :   NONE
//
//
////////////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo)
{
     int iCnt=0;
     
     for(iCnt=1;iCnt<=iNo;iCnt++)
     {
         printf("Hello\n");
     }
}

int main()
{
    int iValue=0;
    
    printf("How many times you want to print the printf statement : ");
    scanf("%d",&iValue);
    
    Display(iValue);
    
    return 0;
}
