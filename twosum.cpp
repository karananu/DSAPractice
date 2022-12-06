#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cout << "Enter the size" << endl;
    cin >> n;
    int a[n]; // array declaration
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the sum" << endl;
    cin >> sum;
    sort(a, a + n);
    int l = 0;
    int h = n - 1;
    while (l < h)
    {
        if (a[l] + a[h] == sum)
        {
            cout << a[l] << " " << a[h];
            break;
        }
        else
        {
            if ((a[1] + a[h] > sum))
                h--;
            else
                l++;
        }
    }
}