// Input : A[] = {3, 3, 4, 2, 4, 4, 2, 4, 4} Insert = 1
// Output : 1,2,2,3,3,4,4,4,4,4
// @Istiak Ahmmed Rifti

#include <bits/stdc++.h>
using namespace std;

int main() {
int n,a;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
cin>>a;
for (int i = 0; i < n-1; i++)
{
    for (int j = i+1; j < n; j++)
    {
        if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    
}
int size = n;
int idx = -1;
size++;
for (int i = 0; i < size; i++)
{
    if (arr[i]<a)
    {
        idx=i;
    }
    
}
if (idx==-1)
{
    arr[n]=a;
}
else{
    for (int i = 0; i < idx; i++)
    {
        arr[i]=arr[i+1];
    }arr[idx]=a;
    
}
for (int i = 0; i < size ; i++)
{
    cout<<arr[i];
}


return 0;
}