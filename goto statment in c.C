#include <stdio.h>

int main()
{
    int num, sum=0;

read:
// label for go to statement

printf("\n Enter the number. Enter 999 to end : ");

scanf("%d", &num);

if (num != 999)

{

if(num < 0)

goto read;
// jump to label- read

sum += num;

goto read;
// jump to label- read

}

printf("\n Sum of the numbers entered by the user is= %d", sum);

    



    return 0;
}

