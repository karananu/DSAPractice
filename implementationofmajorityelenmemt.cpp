#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count1 = 0;
    int count2 = 0;
    int first = INT_MIN;
    int second = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == first)
        {
            count1++;
        }
        else if (a[i] == second)
        {
            count2++;
        }
        else if (count1 == 0)
        {
            count1++;
            first = a[i];
        }
        else if (count2 == 0)
        {
            count2++;
            second = a[i];
        }
        else
        {
            count1--;
            count2--;
        }
    }
    count1 = 0;
    count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == first)
        {
            count1++;
        }
        else if (a[i] == second)
        {
            count2++;
        }
    }
    if (count1 > n / 3)
    {
        cout << first << "";
    }
    else if (count2 > n / 3)
    {
        cout << second;
    }
    else
    {
        cout << -1;
    }
    int flag = 0;
    if (count1 > n / 3)
    {
        cout << first;
        flag = 1;
    }
    if (count2 > n / 3)
    {
        cout << first;
        flag = 1;
    }
    if (flag == 0)
    {
        cout << -1 << endl;
    }
    return 0;
}
