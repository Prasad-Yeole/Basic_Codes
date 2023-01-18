/* Q. Accept charater from user and check whether the character is vowel or not.

Input : E
Output: True

Input : d
Output: False

*/
#include<stdio.h>

typedef int BOOL;

#define False 0
#define True  1

////////////////////////////////////////////////////////////
//
//
// Function name    :   ChkVowel
// Function Date    :   19 Apr 2022
// Function Author  :   Prasad Yeole
// Parameters       :   Char
// Description      :   Accept charater from user and check whether the character is vowel or not.
// Returns          :   Int
//
//
////////////////////////////////////////////////////////////


BOOL ChkVowel(char Ch)
{
     BOOL bAns=False;
     
     if(Ch == 'a' || Ch == 'e' || Ch == 'i' || Ch == 'o' || Ch == 'u' || Ch == 'A' || Ch == 'E' || Ch == 'I' || Ch == 'O' || Ch == 'U')
     {
         bAns= True;
     }
     
     return bAns;
}

int main()
{
    char cValue='\0';
    BOOL bRet = 0;
    
    printf("Enter the character :");
    scanf("%c",&cValue);
    
    bRet=ChkVowel(cValue);
    if(bRet == True)
    {
       printf("%c is a Vowel.\n",cValue);
    }
    else
    {
       printf("%c is not a Vowel. \n",cValue);
    }
    
    return 0;
}
