//Linear search
#include <iostream>
using namespace std;

int main() {
    int arr[5]={};
    int elem;
    cout<<"Enter the elements: "<<endl;  //taking the elements
    for(int i = 0; i<5; i++){
        cin>>arr[i];
    }
    cout<<"Enter the element for search: "<<endl;   //taking the element for search
    cin>>elem;

    for(int i = 0; i<5; i++){    //searching the element
        if(arr[i]==elem){
            cout<<"Your element is at index: "<<i;
            break;              //using break to get rid of double occuring of the element
        }
        
    }
    

}