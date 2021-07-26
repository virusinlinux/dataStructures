//  find sum of diagonal matrix
#include<iostream>
using namespace std;
int main(){
    
    int a[3][3],i,j,sum=0;
     cout<<"Enter value in matrix\n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>a[i][j];
        
    }
   }
    
    cout<<"Print the matrix\n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            
            if(i==j){
                sum+=a[i][j];
            }
            
           cout<<a[i][j]; 
        
    }
    cout<<"\n";
   }
   cout<<"\nThis is sum of matrix: "<<sum;
    
    return 0;
}