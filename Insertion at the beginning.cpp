// insertion at beginning position in Array
#include<iostream>

using namespace std;

int main(){
    
    int arr[50],size,num,pos;
    
    cout<<"Size of Aray: \n";
    cin>>size;
    cout<<"Enter elements of Array: \n";
     for(int i=0;i<size;i++)
     {
         cin>>arr[i];
     }
     cout<<"Enter data you want to Insert \n";
     cin>>num;
     
    //  cout<<"Enter position where you want to Insert your data: \n";
    //  cin>>pos;
     
     if(pos<=0 || pos>size+1){
         cout<<"Invalid Position";
     }
     else{
    
    //  for inserting at the beginning
     for(int i=size-1;i>=0;i--)
     {
         arr[i+1]=arr[i];
     }
     arr[0]  = num;
     size++;
     
     }
    //  Showing the array after Insertion
    
    cout<<"This is the changed Array you got now:\t";
     for(int i=0;i<size;i++)
     {
         cout<<arr[i];
     }
    return 0;
}