#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007

void solve(ll n){
    ll a=n*(n+1)/2;
    if(a%2!=0){
        cout<<"NO";
    }
    else{
        cout<<"YES\n";
        vector<ll> v1,v2;
        ll s1 =0 , s2 =0;
        for(ll i=n; i>=1; i--){
            if(s1 <= s2)
            {
                v1.pb(i);
                s1 += i;
            }
            else{
                v2.pb(i);
                s2+=i;
            }
        }
        cout<<v1.size()<<endl;
        for(auto x: v1)
            cout<<x<<" ";
        cout<<endl;
        cout<<v2.size()<<endl;
        for(auto x: v2)
            cout<<x<<" ";
       
        
    }
}

int main(){
    fastread();
    ll n;
    cin>>n;
    solve(n);
    return 0;
}