#include <bits/stdc++.h>
using namespace std;
int sum(int x, int y)
{
    int sumOfNumbers = x + y;
    return sumOfNumbers;
}
int main()
{
    int a, b;
    cout << "enter two numbers:\n";
    cin >> a >> b;
    cout << "The sum of two numbers is " << sum(a, b);
    return 0;
}