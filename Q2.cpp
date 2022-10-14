//Find the sum of all the two digits numbers in the array

#include <iostream>
using namespace std;
int main() {
    int arr[5]={};
    int count =0;

    cout<<"Enter the array elements: "<<endl;
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    for(int i=0; i<5; i++){
        if(arr[i]>=10 && arr[i]<=99){
            count=count+arr[i];
        }
    }
    cout<<"Sum= "<<count;

}
