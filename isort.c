#include <stdio.h>
#define get 50

void swap(int *a,int *b){
int temp=*a;
*a=*b;
*b=temp;
}

void insertion_sort(int *arr,int len){
for(int i = 1;i<len;i++){
for(int j=i;j>0 && *(arr+j-1)>*(arr+j);j--){
swap((arr+j),(arr+j-1));
}
}
}


int shift_element(int *arr,int i){

int temp1;
int temp;  // = *arr; == depends if you want to copy pointer or just to move it  
for(int j = 0; j < i;j++){

temp1=*(arr+j);	
*(arr+j)=temp; 
temp=temp1;	
	
}
printf("shift element has finished\n");
return 1;
}


int main(){
int arr[get]={0};
int count = 0;
printf("\nInsert 50 numbers for sort\n");
while(count<50){
scanf("%d",&*(arr+count));
count++;
}
insertion_sort(arr,get);
for(int i =0;i<get;i++){
printf("%d,",*(arr+i));
}


    return 0;
}


