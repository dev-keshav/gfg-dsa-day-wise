#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to count the number of possible triangles.
    int findNumberOfTriangles(int arr[], int n)
    {
        // code here
        sort(arr, arr+n);
        int count=0;
        
        if(n<=2){
            return 0;
        }
        for(int i=0; i<n; ++i){
            int k=i+2;
            for(int j=i+1; j<n; j++){
                while(k<n && arr[i]+arr[j]>arr[k]){
                    k++;
                }
                count=count+k-j-1;
            }
        }
        return count;
    }
};


// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.findNumberOfTriangles(arr,n) <<endl;
    }
    return 0;
}  // } Driver Code Ends
