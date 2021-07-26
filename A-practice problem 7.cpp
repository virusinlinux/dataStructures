#include<iostream>
using namespace std;

int main()
{
    int a[] = {2,3,15,15,3,2};
    int read = 1;
    int i,j = 5;
    for(i =0;i<6/2;i++)
    {
        if(a[i]!=a[j])
        {
            read = 0;
            break;
        }
        else
            j--;
    }
    cout << read << "\n";
    return 0;
}