// Input:  [1, 23, 12, 9, 30, 2, 50], K = 3
// Output: 50, 30, 23
// Input:  [11, 5, 12, 9, 44, 17, 2], K = 2
// Output: 44, 17
// @geeks for geeks

#include <bits/stdc++.h>
using namespace std;

int main() {
int n,c;
cin >> n;
int arr[n];
for (int i = 0; i < n; i++)
{
cin >> arr[i];
}
cin >> c;
for (int i = 0; i < n - 1; i++)
{
    for (int j = i + 1; j < n; j++)
    {
        if (arr[i] < arr[j])
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}

for (int i = 0; i < c; i++)
{
    cout<<arr[i]<<" ";
}

return 0;
}