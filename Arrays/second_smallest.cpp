/* Second smallest number in a user defined array */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ssm=INT_MAX;
    int j=INT_MAX;
    for(int i=0;i<n;i++){
        if(j>arr[i]){
            ssm=j;
            j=arr[i];
        }
        else if(ssm>arr[i]){
            ssm=arr[i];
        }
    }
    cout<<"\nThe second smallest number from the array is: "<<ssm;
    
    return 0;
}