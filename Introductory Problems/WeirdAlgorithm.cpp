#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007

vector<ll> solve(ll n){
    vector<ll> v;
    v.pb(n);
    while(n!=1){
        if(n%2!=0){
            n=n*3+1;
            v.pb(n);
        }
        else{
            n/=2;
            v.pb(n);
        }
        
    }
    return v;
}

int main(){
    fastread();
    ll  n;
    cin>>n;
    vector<ll> v=solve(n);
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}