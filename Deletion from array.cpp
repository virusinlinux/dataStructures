// Deletion in Array
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
     cout<<"Enter position from where you want to Delete: \n";
     cin>>pos;
     if(pos<=0  || pos>size){
         cout<<"\tInvalid position\n";
     }
     else{
         t=arr[pos-1];
        for(i=pos-1;i<size-1;i++){
            arr[i] = arr[i+1];
        }
        
     size--;
    
    cout<<"This is the changed Array you got now:\t";
     for(int i=0;i<size;i++)
     {
         cout<<arr[i];
     }
      cout<<"\nThis is the Deleted Item from this Array:\t";
      cout<<t;
     
     cout<<"\nThis is the new size of this Array:\t";
     cout<<size;
     }
    return 0;
}