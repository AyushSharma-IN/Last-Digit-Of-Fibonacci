#include <iostream>
#include <vector>
using namespace std;

vector<unsigned long long> Fib(long n)
{
    vector<unsigned long long> f(n);
    long i;

    f[0] = 0; f[1] = 1;

    for (i = 2; i < n; i++)
    {
        f[i] = (f[i - 1] + f[i - 2]) % 10;
    }
    
    return f;
}

int main()
{
    long n;
    cin >> n;
    ++n;
    vector<unsigned long long> f(n);
    f = Fib(n);
    int s = f.back() % 10; 
    cout << s << endl;
    return 0;
}