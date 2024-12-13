#include<stdio.h>
void quicksort(int arr[],int low,int high);
int partition(int arr[],int low,int high);
void swap(int* a,int* b);
void main(){
int choice,n;
printf("Enter the number of elements:");
scanf("%d",&n);
int a[n];
printf("Enter array elements:");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
quicksort(a,0,n-1);
printf("Array elements are:");
for(int i=0;i<n;i++){
printf("%d\t ",a[i]);
}

}
void quicksort(int arr[],int low,int high)
{
if(low<high){
int pi=partition(arr,low,high);
quicksort(arr,low,pi-1);
quicksort(arr,pi+1,high);
}
}

int partition(int arr[],int low,int high){
int pi=arr[high];
int i=low-1;
for(int j=low;j<=high-1;j++){
if(arr[j]<pi){
i++;
swap(&arr[i],&arr[j]);
}
}
swap(&arr[i+1],&arr[high]);
return i+1;
}

void swap(int* a,int* b){
int temp=*a;
*a=*b;
*b=temp;
}
