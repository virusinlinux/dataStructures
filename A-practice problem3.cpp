//  Array practice problems 
#include<iostream>
using namespace std;

int main(){
    
    int arr[20],carray[20],i,size,num;
    
    cout<<"Enter size of the Array: ";
    cin>>size;
    
    cout<<"\nEnter elements in the Array: \n";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
cout<<"Printing the changed Array: \n";
    for(i=size-1;i>=0;i--){
       carray[i]=arr[i];
        cout<<carray[i];
    }
   
    return 0;
}