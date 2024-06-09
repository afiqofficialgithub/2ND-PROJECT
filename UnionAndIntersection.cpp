// Input: arr1[] = {1, 3, 4, 5, 7}
//         arr2[] = {2, 3, 5, 6}
// Output: Union : {1, 2, 3, 4, 5, 6, 7}
//          Intersection : {3, 5}
// Input: arr1[] = {2, 5, 6}
//         arr2[] = {4, 6, 8, 10}
// Output: Union : {2, 4, 5, 6, 8, 10}
//          Intersection : {6}
// @geeks for geeks

#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n, a, i;
     cin >> n;
     cin >> a;
     int arr[n];
     int arr2[a], all[n + a];
     for (i = 0; i < n; i++)
     {
          cin >> arr[i];
          all[i] = arr[i];
     }
     for (int j = 0; j < a; j++)
     {
          cin >> arr2[j];
          all[i] = arr2[j];
          i++;
     }
     for (int i = 0; i < n + a - 1; i++)
     {
          for (int j = i + 1; j < n + a; j++)
          {
               if (all[i] > all[j])
               {
                    int temp = all[i];
                    all[i] = all[j];
                    all[j] = temp;
               }
          }
     }

     for (int i = 0; i < n + a; i++)
     {
          for (int j = i + 1; j < n + a; j++)
          {
               if (all[i] == all[j])
               {
                    all[j] = -1;

               }
          }
          if (all[i] > 0)
          {
               cout << all[i];
          }
     }

     return 0;
}