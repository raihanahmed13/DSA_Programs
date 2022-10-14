#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    double arr[5],sum=0;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    {
        if(arr[i]>100)
        {
           arr[i]=arr[i]-(arr[i]*0.2); 
        }
        
        sum=sum+arr[i];
        
        
    }
   int g=sum;
    if(sum-g==0)
    {
      cout<<sum;    
    }
    else
    {
         cout<<fixed<<setprecision(2)<<sum;  //setprecision to set the float position accurately
    }
    return 0;
}