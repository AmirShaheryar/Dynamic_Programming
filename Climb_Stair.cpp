#include<iostream>
using namespace std;

int Climb_Stair(int n)
{
    if (n == 0 || n == 1) 
    {
        return 1;
    }
    
    int *A = new int[n + 1];
    A[0] = 1;
    A[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        A[i] = A[i - 1] + A[i - 2];
    }

    int res = A[n];
    delete[] A;
    return res;
}

int main()
{
    int n = 5;
    cout << "Ways to climb " << n << " stairs: " << Climb_Stair(n) << endl;
    return 0;
}
