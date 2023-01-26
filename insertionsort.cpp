#include<iostream>
using namespace std;
void swap(int &a , int &b){
    int temp= a;
    a=b;
    b=temp;
}

void display(int arr[], int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void Insertionsort(int arr[], int n){
    for (int j=2;j<n;j++){
        int key=arr[j];
        int i=j-1;
        while(i>=0&& arr[i]>key){
            arr[i+1]=arr[i];
            i=i-1;
        }
            arr[i+1]=key;
        
    }
}

int main(){
    cout<<"enter the size of the array"<<endl;;
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for (int i=0;i<n;i++){
        cin >>arr[i];
    }
    cout<<"array before sorting"<<endl;
    display(arr,n);
    cout<<"array after sorting"<<endl;
    Insertionsort(arr,n);
    display(arr,n);
    return 0;
    
}
