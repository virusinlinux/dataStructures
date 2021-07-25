//  Array practice problems 
#include<iostream>
using namespace std;

int main(){
    int arr[10],i,size,num;
    
    cout<<"Enter size of the Array: ";
    cin>>size;
    
    cout<<"\nEnter elements in the Array: \n";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter number to compare in the Array: ";
    cin>>num;
   
   for(i=0;i<size;i++)
    {
        if(arr[i]==num)
        {
            cout<<"\nElement is present in the Array\n";
     }
     }
     
    cout<<"Your Array was: \n" 
    for(i=0;i<size;i++)
    {
        cout<<arr[i];    
    }
    return 0;
}