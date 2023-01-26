#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int paritition (int arr[], int l,int r){
    int x = arr[r];
    int i=l-1;
    for (int j=l;j<=r-1;j++){
        if(arr[j]<x){
            i++;
            swap(arr[i],arr[j]);
        }
        swap(arr[i+1],arr[r]);
    }
    return (i+1);
    
}
void quicksort(int arr[],int l,int r){
    if(l<r){
    int q=paritition(arr,l,r);
    quicksort(arr,l,q-1);
    quicksort(arr,q+1,r);
}
}
int main(){
    cout<<"enter the size od the array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array"<<endl;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}






