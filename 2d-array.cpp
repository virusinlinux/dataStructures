// two dimensional Array
#include<iostream>
using namespace std;

int main(){
    
    int a[3][3],i,j;
    
    cout<<"Enter the elements of 2-D Matrix\n";
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    
    // printing 2-D Array elements
    cout<<"Printing the Array elements"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<a[i][j];
            
        }
        cout<<"\n";
    }
    
    
    
    return 0;
}
