//The given program is used to convert the smaller case letters to upper case
//to change the smaller case letters to upper case print string of -32
//to change the upper case letters to smaller case print string of +32
#include <stdio.h>
int main()
{
    char str[100],s[100];
    int i;
    printf("\nEnter the small alphabet letters: ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
    if(str[i]>='a'&&str[i]<='z')
    {
        s[i]=str[i]-32;
    }
    }
    printf("\nThe given string is converted into upper case: %s",s);
    
    return 0;
}
