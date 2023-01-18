////////////////////////////////////////////////////////////
//
//
// Function name    :   Print
// Function Date    :   19 Apr 2022
// Function Author  :   Prasad Yeole
// Parameters       :   NONE
// Description      :   To print 5 to 1 on the screen 
// Returns          :   NONE
//
//
////////////////////////////////////////////////////////////
 
#include<stdio.h>

void Print()
{
     int iCnt=0;
     
     for(iCnt=5;iCnt>0;iCnt--)
     {
         printf("%d\n",iCnt);
     }
}

int main()
{
   Print();
   
   return 0;
}
