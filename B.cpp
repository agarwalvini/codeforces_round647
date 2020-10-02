#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        set <int> arr;
        int max=0;
        for(int j=0;j<n;j++)
        {
            int temp;
            cin>>temp;
            arr.insert(temp);
        }
        int ans=-1;
        for(int j=1;j<=1024;j++)
        {
            set <int> arr1;
            for (auto itr = arr.begin(); itr != arr.end(); ++itr) 
            { 
                int temp=*itr;
                arr1.insert(temp^j);
            } 
            if(arr==arr1)
            {
                ans=j;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}