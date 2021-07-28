#include<iostream>

#include<math.h>
using namespace std;
float f(float a)
{
    float x=((a*a*a)-(4*a)-9);
    return(x);
}
 int main()
 {
    
     float a,b,m,ite,e,fa,fb,fm,k=0;
     cout<<"\tProgram by: Priyanshu Kumar 21020803119IT\n";
     cout<<"\t*-------------------------------*-------------------------------*\n";
     cout<<"\n Enter the value of A and B\n";
     cin>>a>>b;
     cout<<"Enter the maximum number of iterations\n";
     cin>>ite;
     cout<<"Enter maximum error\n";
     cin>>e;
     fa=f(a);
     fb=f(b);
     if((fa*fb)>0)
     {
         cout<<"Enter set does not include root";
         
     }
     else
     {
         for( int i=0;i<ite; i++)
         {
             fa=f(a);
             m=(a+b)/2;
             fm=f(m);
             if(fabs(fm)<e)
             {
                 k++;
                 break;
             }
             else
             {
                if((fa*fm)<0)
                     b=m;
                else
                     a=m;
                     
             }
             cout<<"\n Value after:"<<i<<" Iteration: "<<m;
         }
     }
     if(k==0)
     cout<<"Number of iterations are not enough";
  return 0;  
 }
