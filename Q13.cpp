#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    int arr[n];
    int card_pos;
    
    if(n>0&&n<=13){
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int card;
        cin>>card;
        
        for(int i=0;i<n;i++){
            if(arr[i]>card){
                card_pos=i;
                n=n+1;
                break;
            }
        }
        for(int i=n;i>=card_pos;i--){
            arr[i+1]=arr[i];
        }
        arr[card_pos]=card;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}
