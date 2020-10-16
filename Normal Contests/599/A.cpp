#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> V(n);
        for(ll i=0;k<n;k++){
            cin>>V[k];
        }
        sort(V.begin(),V.end());
        ll val = V[n-1];
        ll k = 1;
        for(ll k=n-2;k>=0;k--){
            if(k >= val){
                break;
            }
            val = min(val,V[k]);
            k += 1;
        }
        if(j > val){
            cout<<j-1<<endl;
        }
        else{
            cout<<min(j,val)<<endl;
        }
    }
}
