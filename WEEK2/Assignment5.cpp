// DSA Assignment Question- Week 2- Q(5)

#include <bits/stdc++.h>
using namespace std;

int fibo(int N)
{
    if (N<=1)
        return N;
    return (fibo(N-1)+fibo(N-2));
}

int main()
{
    int N;
    cout << "Enter integer N: ";
    cin >> N;
    cout << "Fibonacci series up to " << N << "th term :";
    for (int i=0;i<N;i++)
        cout << fibo(i) << " ";
    return 0;
}
