#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef int Type;
#define SIZE 15
void quicksort(Type *str,int start,int end);
int partition(Type *str,int start,int end);

int main(int argc,char **argv){
       srand((unsigned)time(NULL));
       int i;
       Type str[SIZE];
	for(i=0;i<SIZE;i++){
		str[i]=rand()%10;
		printf("%d ",str[i]);
	}
	printf("\n");
       quicksort(str,0,SIZE-1);
       for(i=0;i<SIZE;i++)
	       printf("%d ",str[i]);
       printf("\n");
       return 0;
}

void quicksort(Type *str,int start,int end){
	int middle;
 	if(start<end){
		middle=partition(str,start,end);
                quicksort(str,start,middle-1);  
                quicksort(str,middle+1,end);
	}
}
int swap(int *a,int *b){
	int temp=*a;
        *a=*b;
	*b=temp;
}

int partition(Type *str,int start,int end){
	int i=start-1,p;
	int key=str[end];
	for(p=start;p<=end-1;p++){
		if(str[p]<key){
			i++;
			swap(&str[i],&str[p]);
		}
	}
       swap(&str[i+1],&str[end]);
       return ++i;
}     
