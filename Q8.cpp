//Insertion sort
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    int i, key, j;
    for(i=1; i<n; i++){
        key = arr[i];
        j=i-1;
        while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
void display(int arr[], int n){
    cout<<"The sorted array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
}

int main(){
    int arr[5]={5,4,10,40,1};
    insertionSort(arr,5);
    display(arr,5);
}