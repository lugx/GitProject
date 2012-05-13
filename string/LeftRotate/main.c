#include <stdio.h>
#include <string.h>
char* rotate1(char *,int);

int main(int argc ,char **argv){
   char str[]="hello,world";
   printf("the result is %s.\n",rotate1(str,strlen(str)));
   return 0;
}

char* rotate1(char *str,int size){
   char ch=str[0];
   int i;
   for(i=0;i<size-1;i++)
      str[i]=str[i+1];
   str[i]=ch;
   return str;
}     
