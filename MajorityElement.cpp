// Input : A[] = {3, 3, 4, 2, 4, 4, 2, 4, 4}
// Output : 4
// Explanation : The frequency of 4 is 5 which is greater than the half of the size of the array size.
// @geeks for geeks

#include <bits/stdc++.h>
using namespace std;

int main() {
int n,a;
int max = 0;
int idx =-1;
cin >> n;
int arr[n];
for (int i = 0; i < n; i++)
{
cin >> arr[i];
}

for (int i = 0; i < n; i++)
{
    int count = 1;
    for (int j = i+1; j < n; j++)
    {
        if (arr[i]==arr[j])
        {
            count++;
                         
        }
    }
    if (count > max)
    {
        max = count;
        idx = i;
    }

}
if (max > n / 2)
{
    cout << arr[idx] << " ";
}
else
{
    cout << "no";
}

return 0;
}