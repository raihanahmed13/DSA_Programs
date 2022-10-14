//selection sort
#include <iostream>
using namespace std;
void display(int a[],int size);



void selectionSort(int arr[], int n)
{
    //write your code here
    int min_indx=0;
    for(int i=0; i<n-1;i++){
        min_indx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_indx]){
                min_indx=j;
            }
        }
        if(min_indx!=i){
                int temp;
                temp=arr[i];
                arr[i]=arr[min_indx];
                arr[min_indx]=temp;
            }
        
    }
    
}
int main(void)
{
    int arr[6] = { 5,14,10,40,1 };
    //sort the elements of an array
    selectionSort(arr,5);
	//display array
	display(arr,5);
    return 0;
}
void display(int a[],int size)
{
	int i;
	for(i=0;i<size;i++)
    {
        cout<<a[i]<<"\t";
    }	
    cout<<endl;
}



