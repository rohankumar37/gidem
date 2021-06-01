#include <bits/stdc++.h>
using namespace std;
int multiply(int x, int y)
{
    int productOfNumbers = x * y;
    return productOfNumbers;
}
int main()
{
    int a, b;
    cout << "Enter two numbers";
    cin >> a >> b;
    cout << "The product is " << multiply(a, b);
    return 0;
}