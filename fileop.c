#include <stdio.h>
#include <stdlib.h>

int main()
{
   char a[10];
   FILE *fptr;
   FILE *fp;

   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("C:\\program.txt","w+");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   printf("Enter any text: ");
   scanf("%[^\n]s",a);

   fprintf(fptr,"%s",a);
   fclose(fptr);

   return 0;
}









