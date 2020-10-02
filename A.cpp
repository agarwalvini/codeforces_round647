#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(long long int n)  
{  
    if (n == 0)  
        return 0;  
    while (n != 1)  
    {  
        if (n%2 != 0)  
            return 0;  
        n = n/2;  
    }  
    return 1;  
}  
int main()
{
    long long int t;
    cin>>t;
    for(long long int i=0;i<t;i++)
    {
        long long int a,b;
        cin>>a>>b;
        long long int ans=-1;
        if(a>b)
        {
            if(a%b==0)
            {
                if(isPowerOfTwo(a/b))
                {
                    long long int temp=log2(a/b);
                    ans=(temp/3)+1;
                    if(temp%3==0)
                    {
                        ans--;
                    }
                }
            }
        }
        else if(b>a)
        {
            if(b%a==0)
            {
                if(isPowerOfTwo(b/a))
                {
                    long long int temp=log2(b/a);
                    ans=(temp/3)+1;
                    if(temp%3==0)
                    {
                        ans--;
                    }
                }
            }
        }
        else
        {
            ans=0;
        }
        cout<<ans<<endl;
    }
    return 0;
}