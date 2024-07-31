#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        int b;
        cin >> a >> b;
        if (a % b == 0)
        {
            cout<<0<<endl;
        }
        else
        {
            int x = a % b;
            cout << b - x << endl;
        }
    }
    return 0;
}