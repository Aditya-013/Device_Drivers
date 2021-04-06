#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;

   
   fptr = fopen("/var/log/syslog","w");

   if(fptr == NULL)
   {
      printf("Error! Cannot open file \n");   
      exit(1);             
   }
   fprintf(fptr,"%s","File opened in the write mode. \n");
   printf("I am a Magician\n");
   fclose(fptr);

   return 0;
}
