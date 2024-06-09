// Input : arr[] = {1, 2, 4, 6, 3, 7, 8}
// Output : 5 
// Explanation : Here the size of the array is 7, so the range will be[1, 8].
// The missing number between 1 to 8 is 5
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
int sum = (n+1)*(n+2)/2;
int total = 0;
for (int i = 0; i < n; i++)
{
    total=arr[i]+total;
}
cout<<sum-total<<endl;
return 0;
}