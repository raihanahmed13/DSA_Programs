//Find the number of elements in an array which is greater than 25

#include<iostream>


using namespace std;
int main() {
    int arr[5] = {6,27,29,25,10};
    int count = 0;
    for(int i = 0; i<5; i++){
        if(arr[i]>25)
        count++;

    }
    cout<<"Number of elements greater than 25: "<<count;

}