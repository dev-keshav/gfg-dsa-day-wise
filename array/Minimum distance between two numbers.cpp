#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
  public:
    int minDist(int arr[], int n, int x, int y) {
        // code here
        int p = -1, min_dist = INT_MAX;
   
        for(int i=0 ; i<n ; i++)
        {
          if(arr[i]==x || arr[i]==y)
          {
             if( p != -1 && arr[i] != arr[p])
               min_dist = min(min_dist , i-p);
               p=i;
          }
        }
        if(min_dist==INT_MAX)
          return -1;

     return min_dist;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}
  // } Driver Code Ends
