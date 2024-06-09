// For example, let the input array be {1, 2, 8, 10, 10, 12, 19}
// For x = 0:    floor doesn't exist in array,  ceil  = 1
// For x = 1:    floor  = 1,  ceil  = 1
// For x = 5:    floor  = 2,  ceil  = 8
// For x = 20:   floor  = 19,  ceil doesn't exist in array
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
    int f = -1;
    cin >> a;
    for (int i = n-1 ; i >= 0; i--)
    {
        if (arr[i] <= a)
        {
            f = i;
            break;
        }
    }
    
    if(f == -1)
    {
        cout << "floor doesn't exist in array " << endl;
    }

    else
    {
        cout << arr[f] << endl;
    }

    int b = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= a)
        {
            b = i;
            break;
        }
    }
    if (b==-1)
    {
        cout << "ceil doesn't exist in array " << endl;
    }
    else
    {
        cout << arr[b] << endl;
    }
    return 0;
}