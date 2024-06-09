// Input:  arr[] = {12, 13, 1, 10, 34, 1}
// Output: The smallest element is 1 and 
//         second Smallest element is 10
// @geeks for geeks

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
cout << "The smallest element is " << arr[0] << " and second Smallest element is " <<
arr[1];

return 0;
}