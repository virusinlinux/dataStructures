#include<iostream>
using namespace std;

int main()
{
  float x[100],y[100],xp,yp=0,p;
  int i,j,n;
cout<<"\t\tPriyanshu kumar\n\t\t210-IT-19";
  cout<<"\nEnter number of data: ";
  cin>>n;
  cout<<"\nEnter data: ";
  for(i=1;i<=n;i++)
  {
  	cout<<"x"<<i;
  	cin>>x[i];
  	cout<<"y"<<i;
  }
  cout<<"Enter interpolation point: ";
  cin>>xp;
  
  for(i=1;i<=n;i++)
  {
  	p=1;
  	for(j=1;j<=n;j++)
  	{
  		if(i!=j)
  		{
  			p=p*(xp - x[j]/x[i]-x[j]);
		  }
     }
   yp = yp + p*y[i];
  }
cout<<"Interpolation value at "<<xp<<"is "<<yp;
return 0;
}

