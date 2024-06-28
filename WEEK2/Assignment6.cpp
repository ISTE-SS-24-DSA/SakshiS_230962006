// DSA Assignment Question- Week 2- Q(6)

#include <bits/stdc++.h>
using namespace std;

int sum_num(int N)
{
    if (N==0)
        return 0;
    return N + sum_num(N-1);
}

int main()
{
    int N;
    cout << "Enter value of N: ";
    cin >> N;
    cout << "Sum of first " << N << " numbers: ";
    cout << sum_num(N);
    return 0;
}
