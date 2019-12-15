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
int temp ; 
for(int j = 0; j < i;j++){

temp1=*(arr+j);	
*(arr+j)=temp; 
temp=temp1;	
	
}
printf("shift element has finished\n");
return 1;
}


int main(){
int arr1[] = {2,1,4,3,8,6,7,9};
shift_element(arr1+1,6);

   for (int i = 0; i < sizeof(arr1)/ sizeof(int) ; i++) {
        printf("%d,",*(arr1+i));
    }

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


