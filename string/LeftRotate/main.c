#include <stdio.h>
#include <string.h>
char* rotate1(char *,int,int);
char* rotate2(char *,int,int);
int main(int argc ,char **argv){
   if(argc!=2)
     printf("input must be 2\n");
   char str[30];
   strcpy(str,argv[1]);
   int n;
   scanf("%d",&n);
   printf("the result is %s.\n",rotate2(str,n,strlen(str)));
   return 0;
}

char* rotate1(char *str,int n,int size){
   int j;
   for(j=1;j<=n;j++){
   n%=size;
   char ch=str[0];
   int i;
   for(i=0;i<size-1;i++)
      str[i]=str[i+1];
   str[i]=ch;
  }
   return str;
}
void reverse(char *str,int b,int e){
   for(;b<e;b++,e--){
    char temp;
    temp=str[b];
    str[b]=str[e];
    str[e]=temp;
}
}
char* rotate2(char *str,int n,int size){
   n%=size;
   char ch;
   int i;
   reverse(str,0,n-1);
   reverse(str,n,size-1);
   reverse(str,0,size-1);
   return str;
} 
          
