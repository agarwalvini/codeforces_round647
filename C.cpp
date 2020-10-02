#include<bits/stdc++.h>
using namespace std;
long long int solve(long long int n) 
{
    long long int ans=0;
    long long int i=0;
    while (n > 0) { 
  
        // storing remainder in binary array 
        long long int rem = n % 2; 
        n = n / 2; 
        if(rem==1)
        {
            ans=ans+((pow(2,i)*2)-1);
        }
        i++; 
    }
    return ans;  
} 
int main()
{
    long long int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        long long int n;
        cin>>n;
        long long int ans=solve(n);
        cout<<ans<<endl;
    }
    return 0;
}