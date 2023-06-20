#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,x;
    cin >> a >> b >> c;

    d = (a+b+abs(a-b))/2;
    x = (d+c+abs(d-c))/2;


    cout << x << " eh o maior" << endl;


    return 0;
}
