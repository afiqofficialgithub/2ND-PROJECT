// Input: arr[] = {1, 2, 3, 3, 3, 3, 10}, x = 3
// Output: True (x appears more than n/2 times in the given array)
// Input: arr[] = {1, 1, 2, 4, 4, 4, 6, 6}, x = 4
// Output: False (x doesn't appear more than n/2 times in the given array)
// @geeks for geeks

#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n, a;
     int max = 0;
     cin >> n,a;
     int arr[n];
     for (int i = 0; i < n; i++)
     {
          cin >> arr[i];
     }
     cin>>a;
     int idx=0;
     for (int i = 0; i < n; i++)
     {
          if (arr[i]==a)
          {
               idx++;
          }
          
     }
     if (idx>n/2)
     {
          cout<<"True" <<endl;
     }
     else
     {
          cout<<"False"<<endl;
     }
     
     
     return 0;
}