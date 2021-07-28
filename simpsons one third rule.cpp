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
    cout<<"\t Name: Priyanshu kumar_21020803119-IT\n";
    cout<<"\t*------------------*-----------------*-----------*\n";
    cout<<"\tEnter x0, xn, number of subintervals: ";
    cin>>x0>>xn>>n;
    h=(xn-x0)/n;
    s=y(x0)+y(xn)+4*(x0+h);
    for(i=3;i<=n-1;i+=2)
    s+=4*y(x0+i*h)+2*y(x0+(i-1)*h);
    cout<<"\nValue of integral is: "<<(h/3)*s;
    return 0;
}
