// Deletion in Array from End
#include<iostream>

using namespace std;

int main(){
    
    int arr[50],size,num,pos,i,t;
    
    cout<<"Size of Aray: \n";
    cin>>size;
    cout<<"Enter elements of Array: \n";
     for(int i=0;i<size;i++)
     {
         cin>>arr[i];
     }
     size--;
    
    cout<<"This is the changed Array you got now:\t";
     for(int i=0;i<size;i++)
     {
         cout<<arr[i];
     }
     
     cout<<"\nThis is the new size of this Array:\t";
     cout<<size;
     
    return 0;
}