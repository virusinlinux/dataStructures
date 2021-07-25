//  Array practice problems 
#include<iostream>
using namespace std;

int main(){
    
    int arr[20],sum=0,prod=1,i,size;
    
    cout<<"Enter size of the Array: ";
    cin>>size;
    
    cout<<"\nEnter elements in the Array: \n";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<size;i++){
        sum+=arr[i];
        prod*=arr[i];
    }

    cout<<"Sum of the Array is: "<<sum<<endl;
    cout<<"Product of the Array is: "<<prod<<endl;
    return 0;
}