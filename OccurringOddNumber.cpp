// Input : arr = {1, 2, 3, 2, 3, 1, 3}
// Output : 3
// Input : arr = {5, 7, 2, 7, 5, 2, 5}
// Output : 5
// @geeks for geeks

#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
int max=0;
cin >> n;
int arr[n];
for (int i = 0; i < n; i++)
{
cin >> arr[i];
}
int count=n;
int main = -1;
for (int i = 0; i < count; i++)
{
    int idx=0;
    for (int j = i+1; j < count; j++)
    {
        if (arr[i]==arr[j])
        {
            idx++;
        }
        
    }
    if (idx%2==1)
    {
        max=idx;
        main=i;
    }
    
}
if (main==-1)
{
    cout<<"no";
}
else{
    cout<<arr[main];
}


 
return 0;
}