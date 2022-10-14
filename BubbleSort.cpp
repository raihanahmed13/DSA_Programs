//Bubble sorting
#include<iostream>
using namespace std;

void bubble(int arr[], int n){       //function for bubble sort
    for(int i=0; i<n-1;i++){
        for(int j=i+1; j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

}
void display(int arr[], int n){      //display the array
    cout<<"Sorted Array: "<<endl;     
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}

int main(){
    int arr[5]={4,9,6,2,7};
    bubble(arr,5);
    display(arr,5);
}