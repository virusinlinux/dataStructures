// Traversal in Array
#include<iostream>

using namespace std;

int main(){
    
    int arr[50],size,i;
    
    cout<<"Enter size of array\n";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cout<<"\nEnter elements of Array\n";
        cin>>arr[i];
    }
    
    for(i=0;i<size;i++)
    {
        cout<<"\nElements of Array are: \n";
        cout<<arr[i];
    }
    return 0;
}