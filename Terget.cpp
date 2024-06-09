// Input : A[] = {6 6 4 5 8} Sum Terget = 12
// Output : 6 6 4 8
// Input : A[] = {5 6 3 4 6 1 9} Sum Terget = 9
// Output : 5 4 6 3 3 6
// @geeks for geeks

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,n;
    cin>>a;
    
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    cin>>n;
    for (int i = 0; i < a-1; i++)
    {
        for (int j = i+1; j < a; j++)
        {
            if (arr[i]+arr[j]==n)
            {
               cout<<arr[i] <<" "<< arr[j] <<" ";
            }
            else
            {
            }
            
        }
        
    }

return 0;
}
