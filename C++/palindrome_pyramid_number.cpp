#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int i, j, k, l, n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= i; k++)
        {
            cout << k << " ";
        }
        for (l = i - 1; l >= 1; l--)
        {
            cout << l << " ";
        }
        cout << endl;
    }
    return 0;
}
