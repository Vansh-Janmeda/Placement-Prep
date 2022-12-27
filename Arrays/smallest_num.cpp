/* Smallest number in a user defined number */
#include <iostream>
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
    cout<<"The elements of the array are: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i];
        cout<<" ";
    }
    int j=arr[0];
    for(int i=1;i<n;i++){
        if(j>arr[i]){
            j=arr[i];
        }
    }
    cout<<"\nThe smallest number from the array is: "<<j;
    
    return 0;
}