#include <iostream>

using namespace std;

class Matrix
{
int a[10][10],b[10][10],c[10][10],r,q,r1,q1;
public : void mat1() ;
int matp1();
void mat2();
int matp2();
int add();
int sub();
int mul();
int tran();
int dia();

};

void Matrix :: mat1() //accepting matrices A:
{
int i,j;
cout<<"\n \n By Priyanshu Kumar \n";
cout<<" \n Roll No.- 210, IT-19 \n";
cout<<" \n Enter size of row & column of matrix\n";
cin>>r>>q;

cout<<"Enter actual element of matrix\n";
for (i=0;i<r;i++)
{
for(j=0;j<q;j++)
{
cin>>a[i][j];
}

}
}

int Matrix :: matp1() // printing matrices A:
{
int i,j;
cout<<"Matrix a is\n";
for (i=0;i<r;i++)
{
for(j=0;j<q;j++)
{
cout<<a[i][j]<<" \t";
}
cout<<"\n";
}
}

void Matrix :: mat2() // accepting matrices B:
{
int i,j;
cout<<"Enter size of row & column of matrix\n";
cin>>r1>>q1;

cout<<"Enter actual element of matrix\n";
for (i=0;i<r1;i++)
{
for(j=0;j<q1;j++)
{
cin>>b[i][j];
}
}
}

int Matrix :: matp2() // printing matrices B:
{
int i,j;
cout<<"\nMatrix b is:\n";
for (i=0;i<r1;i++)
{
for(j=0;j<q1;j++)
{
cout<<b[i][j]<<" \t";
}
cout<<"\n";
}
}

int Matrix :: add()
{
int i,j;
cout<<"\nAddition of matrix is\n";
if(r==r1 && q==q1)
for (i=0;i<r;i++)
{
for(j=0;j<q;j++)
{
cout<<a[i][j]+b[i][j]<<"\t";
}
cout<<"\n";
}

else
{
cout<<"matrix error\n\n";
}

}



int Matrix :: mul()
{
int i,j,k,sum;
cout<<"Multiplication of matrix is\n";
if(r==q)
for(i=0;i<r;i++)
{
for(j=0;j<q1;j++)
{
sum=0;
for(k=0;k<r1;k++)
{
sum=sum+a[i][k]*b[k][j];
}
cout<<sum<<"\t";

}
cout<<"\n";
}
}

int Matrix :: tran()
{
int i,j,temp;
cout<<"Transpose of matrix is \n";
for(i=0;i<r;i++)
{
for(j=0;j<q;j++)
{
temp=a[i][j];
a[i][j]=a[j][i];
a[j][i]=temp;
}
}
for(i=0;i<r;i++)
{
for(j=0;j<q;j++)
{
cout<<a[j][i]<<"\t";
}
cout<<"\n";
}
}


int main()
{
Matrix m;
int choice,ch;
m.mat1();
m.mat2();

do
{
cout<<"MENU\n";
cout<<" 1.Addition\n 2.Mutiplication\n 3.Transpose of Matrix \n 4.Exit\n Enter your choice \n";
cin>>choice;
switch (choice)
{
case 1:
m.matp1();
m.matp2();
m.add();
break;



case 2:
m.matp1();
m.matp2();
m.mul();
break;

case 3:
m.matp1();
m.tran();
break;



default : break;

}
cout<<"Do you want to continue press 1 :\n";
cin>>ch;
}
while (ch==1);



return 0;
}                          


