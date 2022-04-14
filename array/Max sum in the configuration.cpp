#include<bits/stdc++.h>
using namespace std;

int max_sum(int A[],int N);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }

        cout<<max_sum(A,N)<<endl;
        /*keeping track of the total sum of the array*/

    }
}
// } Driver Code Ends


/*You are required to complete this method*/
int max_sum(int A[],int N)
{
//Your code here
int ans=0, sum=0, prod=0;
int i;
for(i=0; i<N; i++){
    sum=sum+A[i];
    prod=prod+A[i]*i;
}
for(i=0; i<N; i++){
    prod=prod+sum-N*(A[N-1-i]);
    if(ans<prod){
        ans=prod;
    }
}
return ans;
}
