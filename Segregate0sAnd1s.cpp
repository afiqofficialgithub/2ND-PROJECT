// Input array   =  [0, 1, 0, 1, 0, 0, 1, 1, 1, 0] 
// Output array =  [0, 0, 0, 0, 0, 1, 1, 1, 1, 1] 
// @geeks for geeks
//??Worng??
#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
cin >> n;
int arr[n];
for (int i = 0; i < n; i++)
{
cin >> arr[i];
}
for (int i = 0; i < n - 1; i++)
{
     for (int j = i + 1; j < n; j++)
     {
          if (arr[i] > arr[j])
          {
               int temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
          }
     }
}
for (int i = 0; i < n; i++)
{
cout<<arr[i]<<" ";
}
    return 0;
}