////////////////////////////////////////////////////////////
//
//
// Function name    :   Divide
// Function Date    :   19 Apr 2022
// Function Author  :   Prasad Yeole
// Parameters       :   Int
// Description      :   To divide two numbers 
// Returns          :   Int
//
//
////////////////////////////////////////////////////////////


#include<stdio.h>

float Divide(int iNo1,int iNo2)
{
      float fAns=0.0;
      
      if(No2>No1)
      {
        return -1;
      }
      
      fAns=iNo1/iNo2;
      
      return fAns;
}

int main()
{
    int iValue1=0,iValue2=0;
    float fRet=0.0;
    
    printf("Enter the First number :");
    scanf("%d",&iValue1);
    
    printf("Enter the Seconde number :");
    scanf("%d",&iValue2);
    
    fRet=Divide(iValue1,iValue2);
    printf("The Division of the numbers is :%f\n",fRet);
    
    return 0;
}
