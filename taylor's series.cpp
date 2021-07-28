#include<iostream>

#include<cmath>
using namespace std;
int main()
{
    

    int x,i;
    int fact = 1,n;
    float sum=0;
cout<<"\t\tPriyanshu Kumar\n\t\t210-IT-19\n";
    cout<<"Enter the value of x in the series :"  ;
 	cin>>x;
    cout<<"\nEnter the number of terms in the series  :   ";
    cin>>n;

    for(i=1;i<n;i++)
    {
        fact = fact*i;
        cout<<"numbers : "<<fact<<endl;
        sum = sum + (pow(x,i)/fact) ;

    }
    sum= sum +1; //Since series starts with 1

    cout<<"\n\nThe sum of the taylor series is : "<<sum<<endl;

    cout<<"Priyanshu Kumar-210IT19\n";
    return 0;
}
