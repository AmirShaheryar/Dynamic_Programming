#include<iostream>
using namespace std;

int Max_Sub_Array(int A[],int n)
{
    int *Cf=new int [n];

    Cf[0]=A[0];
    for(int i=1;i<n;i++)
    {
        if((Cf[i-1]+A[i])>A[i])
        {
            Cf[i]=Cf[i-1]+A[i];
        }

        else
        {
            Cf[i]=A[i];
        }
    }

    int max=Cf[0];
    for(int i=0;i<n;i++)
    {
        if(Cf[i]>max)
        {
            max=Cf[i];
        }
    }

    delete[] Cf;
    return max;
}

int main()
{
    int A[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(A) / sizeof(A[0]);

    int result = Max_Sub_Array(A, n);
    cout << "Maximum Subarray Sum is: " << result << endl;

    return 0;
}