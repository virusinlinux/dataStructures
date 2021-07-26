#include<iostream>
using namespace std;

int main()
{
   int a[10],min=1,max=0,avg=0,g;
   
   cout<<"Enter elements of Array\n";
   for(int i=0;i<10;i++)
   {
       cin>>a[i];
   }
   
   
   
   cout<<"Traverse elements of Array\n";
   for(int i=0;i<10;i++)
   {
     
      
      if(a[i]>max){
          max=a[i];
      }
      else if(a[i]<min){
          min=a[i];
      }
  for(int i=0;i<10;i++){
        
         avg=avg+a[i];
         g=avg/10;
    }
      
   }
      cout<<"\nHere you got the average of the Array:\t"<<g;
      cout<<"\nHere you got the min of the Array:\t"<<min;
      cout<<"\nHere you got the max of the Array:\t"<<max;
   
    return 0;
}