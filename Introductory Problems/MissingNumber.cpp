#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007

int solve(vector<int> v,int n){
    // map<int,int> mp;
    set<int> s;
    for(int i=0;i<v.size();i++){
        // mp[v[i]]++;
        s.insert(v[i]);
    }
    for(int i=1;i<=n;i++){
        if(s.find(i)==s.end()){
            return i;

        }
    }
    return -1;
}

int main(){
    fastread();
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &i:v){
        cin>>i;
    }
    int a=solve(v,n);
    cout<<a;
    return 0;
}