// Input : A[] = {3, 3, 4, 2, 4, 4, 2, 4, 4}
// Output : 3 2 
//          4 5 
//          2 2 
// Input : A[] = {5, 7, 2, 7, 5, 2, 5}
// Output : 5 3
//          7 2
//          2 2
// @Istiak Ahmmed Rifti

#include <bits/stdc++.h>
    using namespace std;
    
int main() {
    int n, a;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int idx =1;
        for (int j = i+1; j < n; j++)
        {
        
            if (arr[i]==arr[j])
            {
               idx++;
               arr[j]=-1;
            }
            
        }      
        if (arr[i]>0)
        {
            cout<<arr[i]<<" "<<idx<<endl;
        }
        
    }
return 0;
}