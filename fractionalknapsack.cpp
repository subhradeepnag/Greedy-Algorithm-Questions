#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> s1,pair<int,int> s2)
{
    double v1 = (double)s1.first/s1.second;
    double v2 = (double)s2.first/s2.second;

    return v1>v2;
}


int main() {

    int n;
    cin>>n;

    vector<pair<int,int>>arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i].first>>arr[i].second;
    }
    int w;
    cin>>w;

    sort(arr.begin(),arr.end(),compare);

    int ans = 0;

    for(int i=0;i<n;i++)
    {
        if(w >= arr[i].second)
        {
            // cout<<arr[i].second<<endl;
            ans+=arr[i].first;
            w-=arr[i].second;
            continue;
        }

        double vw = (double)arr[i].first/arr[i].second;
        ans+=vw*w;
        w = 0;
        break;
    }

    cout<<ans;
    

}
