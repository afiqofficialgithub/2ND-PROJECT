// Input : arr1 = {1,12,15,26,38}
//         arr2 = {2,13,17,30,45}   
// Output : 16      1 2 12 13 15 17 26 30 38 45
// @geeks for geeks

#include <bits/stdc++.h>
using namespace std;

int main() {
int n,a;
cin >> n;
cin >> a;
int arr1[n];
int arr2[a],all[n+a];
int i;
for (i = 0; i < n; i++)
{
cin >> arr1[i];
all[i]=arr1[i];
}
//cout<< i<<endl;
for (int j = 0; j < a; j++)
{
cin>>arr2[j];
all[i]=arr2[j];
i++;
}
for (int i = 0; i < n+a - 1; i++)
{
    for (int j = i + 1; j < n+a; j++)
    {
        if (all[i] > all[j])
        {
            int temp = all[i];
            all[i] = all[j];
            all[j] = temp;
        }
    }
}
int sum=(n+a)/2;
if ((n+a)%2==1)
{
    cout << all[sum] << endl;
}
else
{
    int a=(sum-1)+1;
    float one=all[sum-1];
    float two=all[a];
    float su = (one+two) / 2;
    cout<< su<<endl;
}



return 0;
}