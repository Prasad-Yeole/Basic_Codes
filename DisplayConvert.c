/* Q. Accept one character from user and convert case of the character.

Input : a
output: A

Input : D
output: d
*/

#include<stdio.h>

////////////////////////////////////////////////////////////
//
//
// Function name    :   DisplayConvert
// Function Date    :   19 Apr 2022
// Function Author  :   Prasad Yeole
// Parameters       :   Char
// Description      :   Accept one character from user and convert case of the character.
// Returns          :   NONE
//
//
////////////////////////////////////////////////////////////

void DisplayConvert(char ch)
{
     if(ch >= 'a' && ch <= 'z')
     {
        printf("The updated value is %c\n",ch-32);
     }
     else if(ch >= 'A' && ch <= 'Z')
     {
        printf("The Updated value is %c\n",ch+32);
     }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter the character : ");
    scanf("%c",&cValue);
    
    DisplayConvert(cValue);
    
    return 0;
}
