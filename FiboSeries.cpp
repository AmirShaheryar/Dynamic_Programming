#include<iostream>
using namespace std;

int Fibo_Pattern(int n)
{
    if(n>1)
    {
        int Array[n];
        Array[0]=0;
        Array[1]=1;

        for(int i=2;i<n;i++)
        {
            Array[i]=Array[i-1]+Array[i-2];
        }

        return Array[n-1];
    }

    else if(n==1)
    {
        return 1;
    }

    else if(n==0)
    {
        return 0;
    }

    else
    {
        return -1;
    }
}

int main()
{
    cout<<Fibo_Pattern(8);
}