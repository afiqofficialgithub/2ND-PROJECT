// Input: arr[] = {3, 5, 4, 1, 9}
// Output: Minimum element is: 1
//         Maximum element is: 9
// Input: arr[] = {22, 14, 8, 17, 35, 3}
// Output:  Minimum element is: 3
//          Maximum element is: 35
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
cout << "Minimum element is : "<<arr[0]<<" Maximum element is: "<< arr[n-1]<<endl;
    return 0;
}