#include<iostream>
using namespace std;

int max_Sub_Array(int A1[],int n)
{
    int maxim=A1[0];
    int cMax=A1[0];

    for(int i=1;i<n;i++)
    {
        cMax=max(A1[i],cMax+A1[i]);
        if(cMax>maxim)
        {
            maxim=cMax;
        }
    }
    return maxim;
}

int main()
{
    int A[] = {10,-5,12,-6,19};
    int n = sizeof(A) / sizeof(A[0]);

    int result = max_Sub_Array(A, n);
    cout << "Maximum Subarray Sum is: " << result << endl;

    return 0;
}