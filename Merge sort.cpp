#include<iostream>
using namespace std;
void merge(int input[], int begin,int mid, int end ){
    int output[end-begin+1]; 
    int i = begin;
    int j = mid+1;
    int k = 0;
    while(i<=mid && j<=end){
        if(input[i]<input[j]){
            output[k++]=input[i++];
        }
        else{
            output[k++]= input[j++];
        }
    }
    while(i<=mid){
        output[k++]=input[i++];
    }
    while(j<=end){
        output[k++]=input[j++];
    }
    int m=0;
    for(int i = begin ; i<= end; i++){
        output[i]=input[m];
        m++;
    }
    
}

void mergeSort(int input[],int beginIndex,int endIndex){
    int mid = (beginIndex+endIndex)/2;
    if(beginIndex>= endIndex){
        return ;
    }
    mergeSort (input,beginIndex,mid);
    mergeSort  (input,mid+1, endIndex);
    merge  (input, beginIndex,mid,endIndex);
}
int main() {
    cout<<"enter the no of elements of array";
    int n;
    cin>>n;
    int input[n];
    cout<<"enter the elements of array"<<endl;
    for (int i=0;i<n;i++){
        cin>>input[i];
    }
    mergeSort(input,0,n-1);
    cout<<"after merge sort the output array is"<<" ";
    for(int i=0;i<n;i++){
        cout<<input[i] <<" ";
    }
    return 0;
}
    


