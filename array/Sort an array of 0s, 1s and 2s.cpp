#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        int chota=0;
        int bitchwala=0;
        int barawala=n-1;
        
        while(bitchwala<=barawala){
            switch(a[bitchwala]){
                case 0:
                swap(a[chota++], a[bitchwala++]);
                break;
                
                case 1:
                bitchwala++;
                break;
                
                case 2:
                swap(a[bitchwala], a[barawala--]);
                break;
            }
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends
