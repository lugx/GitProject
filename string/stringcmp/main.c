#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(char *str1,char *str2,int size1,int size2);
int main(int argc,char **argv){
    if(argc!=3){
    printf("input must be 3");
    }
    char str1[30];
    char str2[30];
    strcpy(str1,argv[1]);
    strcpy(str2,argv[2]);
    int value=compare(str1,str2,strlen(str1),strlen(str2));
    if(value==0)
     printf("The value is not in the string\n");
    else
     printf("The value is in the string\n");
}
int compare_real(char *str1,char *str2,int size1,int size2){
     int i,j;
     for(i=0;i<size2;i++){
       for(j=0;i<size1;i++){
          if(str2[i]==str1[j])
             break;
       }
       if(j==size1)
          return 0;
     }
         return 1;
}
int compare(char *str1,char *str2,int size1,int size2){
    if(size1<size2)
       return compare_real(str2,str1,size2,size1);
    if(size1>=size2)
       return compare_real(str1,str2,size1,size2);
}
