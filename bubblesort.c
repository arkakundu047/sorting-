#include<stdio.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void display(int arr[], int n){
    for (int i=0;i<n;i++){
        printf("%3d",arr[i]);
    }
}
void bubblesort(int arr[],int n){
    for(int i=0;i<n;i++){
        int swaps=0;
        for(int j=0;i<n-j-1;i++){
            if(arr[j]>arr[j+1]){
            swap(&arr[j],&arr[j+1]);
            swaps=1;
        }
    }
    if(!swaps){
        break;
    }
}

int main(){
    printf("enter the elements of the array");
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    display(arr,n);
    bubblesort(arr,n);
    display(arr,n);
    
}
