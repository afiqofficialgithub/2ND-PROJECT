// Input : A[] = {3, 3, 4, 2, 4, 4, 2, 4, 4} Terget = 4
// Output : 5
// Input : arr = {5, 7, 2, 7, 5, 2, 5} Terget = 7
// Output : 2
// @geeks for geeks

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> a;
    int idx = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == a)
        {
            idx++;
        }
    }
    cout << a << " " << idx;

    return 0;
}