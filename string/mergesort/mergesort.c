#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int Type;
#define SIZE 15

void mergesort(Type* str,int start,int end);

int main(int argc,char **argv){
       srand((unsigned)time(NULL));
       int i;
       Type str[SIZE];
	for(i=0;i<SIZE;i++){
		str[i]=rand()%10;
		printf("%d ",str[i]);
	}
	printf("\n");
       mergesort(str,0,SIZE-1);
       for(i=0;i<SIZE;i++)
	       printf("%d ",str[i]);
       printf("\n");
       return 0;
}
void merge(Type *str,int start ,int middle,int end);
void mergesort(Type* str,int start,int end){
	int middle;
	if(start<end){
		middle=(int)((end+start)/2);
		mergesort(str,start,middle);
		mergesort(str,middle+1,end);
		merge(str,start,middle,end);
	}
}
void merge(Type *str,int start,int middle,int end){
      int n1=middle-start+1,n2=end-middle;
      Type *Left=(Type *)malloc(sizeof(Type)*n1);
      Type *Right=(Type *)malloc(sizeof(Type)*n2);
      int i,j,p;
      for(i=0;i<=n1-1;i++)
	      Left[i]=str[i];
      for(j=0;j<=n2-1;j++)
	      Right[j]=str[middle+1+j];
      i=0,j=0,p=start;
      while(i<n1&&j<n2){
	      if(Left[i]<=Right[j])
		      str[p++]=Left[i++];
	      else
		      str[p++]=Right[j++];
      }
      for(;i<n1;i++)
	      str[p++]=Left[i];
      for(;j<n2;j++)
	      str[p++]=Right[j];
      free(Left);
      free(Right);
      Left=NULL;
      Right=NULL;
}
