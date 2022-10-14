//deletion of element from array

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n]={};
    cout<<"Enter the elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int elem;
    cout<<"Enter the element to delete: ";
    cin>>elem;
    int index_elem;

    for(int i=0; i<n; i++){       //searching the element
        if(arr[i]==elem){
            index_elem=i;
            break;
        }
    }

    for(int i=index_elem; i<n;i++){     //deleting the element
        arr[i]=arr[i+1];
    }
    n=n-1;

    cout<<"The new array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }

}