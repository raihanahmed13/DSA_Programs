//Inserting on the array from index 1 to n
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,pos;
    cin>>n;
    char arr[n],c;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    cin>>pos;
    cin>>c;
    if(pos>0){
        for(int i=n;i>=pos;i--){
            arr[i+1]=arr[i];
        }
        arr[pos]=c;
        for(int i=1;i<=n+1;i++){
            cout<<arr[i]<<" ";
        }
    }
    else{
        cout<<"Invalid Position";
    }
    return 0;
}
