    // Input: arr[]  = {10, 3, 5, 6, 2}
    // Output: prod[]  = {180, 600, 360, 300, 900}
    // 3 * 5 * 6 * 2 product of other array
    // elements except 10 is 180
    // 10 * 5 * 6 * 2 product of other array
    // elements except 3 is 600
    // 10 * 3 * 6 * 2 product of other array
    // elements except 5 is 360
    // 10 * 3 * 5 * 2 product of other array
    // elements except 6 is 300
    // 10 * 3 * 6 * 5 product of other array
    // elements except 2 is 900
    // @geeks for geeks

    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];//1 2 3
        }
        
        int ans[n];
        for (int i = 0; i < n; i++) //i=1
        {
            int product = 1; //p=1
            for(int j=0;j<n;j++) //j = 1  arr[1] =1
            {
                // if(j!=i)
                // {
                //     product *= arr[j]; //1*1=1 2*3=6
                // }
                if(j==i) continue;

                product *= arr[j];
                
            }
            ans[i] = product;
        }

        for (int i = 0; i < n; i++)
        {
            cout<< ans[i] <<" ";
        }

        return 0;
    }