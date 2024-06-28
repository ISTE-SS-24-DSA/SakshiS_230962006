// DSA Assignment Question- Week 2- Q(4)

#include <bits/stdc++.h>
using namespace std;

void print_num(int i,int N)
{
    if (i>N)
        return;
    cout << i << " ";
    print_num(i+1,N);
}

int main()
{
    int N;
    cout << "Enter value of N: ";
    cin >> N;
    cout << "Numbers from 1 to " << N << ":"<< endl;
    print_num(1,N);
    return 0;
}
