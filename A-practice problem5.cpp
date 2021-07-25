//  Array practice problems 
#include<iostream>
using namespace std;

int main(){
    
    int arr[20],max=0,min=100,i,size;
    
    cout<<"Enter size of the Array: ";
    cin>>size;
    
    cout<<"\nEnter elements in the Array: \n";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<size;i++){
        if(min>arr[i])
        {
            min=arr[i];
        }
        else{
            
        }
        
        if(max<arr[i])
        {
            max=arr[i];
        }
        else{
            
        }
        
        
    }

    cout<<"Max element of the Array is: "<<max<<endl;
    cout<<"Min element of the Array is: "<<min<<endl;
    return 0;
}