//  Array practice problems 
#include<iostream>
using namespace std;

int main(){
    
    int arr[20],i,size,num,positive=0,negative=0,odd=0,even=0,zero=0;
    
    cout<<"Enter size of the Array: ";
    cin>>size;
    
    cout<<"\nEnter elements in the Array: \n";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<size;i++){
       
        if(arr[i]>0){
            positive++;
            if(arr[i]%2 == 0){
                even++;
            }
            else{
                odd++;
            }
        }
        else if(arr[i]<0){
            negative++;
            if(arr[i]%2 == 0){
                even++;
            }
            else{
                odd++;
            }
        }
        
        else {
          zero++;
        }
    }
    
    cout<<"Positive numbers in Array: "<<positive<<endl;
    cout<<"Negative numbers in Array: "<<negative<<endl;
    cout<<"Odd numbers in Array: "<<odd<<endl;
    cout<<"Even numbers in Array: "<<even<<endl;
    cout<<"Zeroes in Array: "<<zero<<endl;
   
    
  
    return 0;
}