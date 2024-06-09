// input: arr[] = {16, 17, 4, 3, 5, 2}, 
// Output: 17 5 2
// Input: arr[] = {1, 2, 3, 4, 5, 2}, 
// Output: 5 2
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
int j ;
for (int i = 0; i < n; i++)             // i=16 17 4 3 5 2
{                                       //arr[4]=3
     for ( j = i+1; j < n; j++)         //arr[5]=5
     {                                  //input =17 5 2
          if (arr[i] < arr[j])
          {
              break;
          }
     }
     if (j==n)
     {
          cout<<arr[i];
     }
     
}

 
return 0;
}