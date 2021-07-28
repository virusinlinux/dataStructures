#include<iostream>
#include<math.h>
using namespace std;

float y(float x)
{
    return 1/(1+x*x);
}
int main()
{
    float x0, xn, h,s;
    int i,n;
    cout<<"\tName: Priyanshu Kumar_21020803119-IT\n";
    cout<<"\t*--------------------*----------------------*\n";
    cout<<"\nEnter x0, xn, number of subintervals: ";
    cin>>x0>>xn>>n;
    h=(xn-x0)/n;
    s=y(x0)+y(xn);
    for(i=1;i<=n;i++)
    s+=2*y(x0+i*h);
    cout<<"Value of integral is: "<<(h/2)*s;
    return 0;
}
