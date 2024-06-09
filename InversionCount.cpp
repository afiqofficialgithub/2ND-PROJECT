// Input: arr[] = {8, 4, 2, 1}
// Output: 6
// Explanation: Given array has six inversions: (8, 4), (4, 2), (8, 2), (8, 1), 
// (4, 1), (2, 1).
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
int idx=-1;
int to,sum=0;
for (int i = 1; i < n; i++)
{
    to= n-i;
    sum+=to;
}
cout<<sum<<endl;
return 0;
}