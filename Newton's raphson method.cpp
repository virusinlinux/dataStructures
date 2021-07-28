#include<iostream>
#include<math.h>
using namespace std;
float fn(float x)
{
    return x*x*x-3*x-5;
}

float de(float x)
{
    return 3*x*x-3;
}

int main()
{
    
    int itr, maxitr, count=0;
    float h, x0, x1, aerr;
    cout<<"\n Name: Priyanshu kumar_21020803119-IT\n";
    cout<<"Enter the value of x0: ";
    cin>>x0;
    cout<<"\nEnter acceptable error: ";
    cin>>aerr;
    cout<<"\nEnter maximum number of iterations: ";
    cin>>maxitr;
    
    do{
        h=x0-(fn(x0)/de(x0));
        count++;
        cout<<"Iteration Number"<<count<<" x= "<<h;
        x0=h;
        cout<<endl;
    }
    while(abs(fn(h))>0.001);
    cout<<"\n Final Root is, x= "<<h<<endl;
    return 0;
}
