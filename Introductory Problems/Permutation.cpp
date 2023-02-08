#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007

void solve(int n){
    
     if(n<4 && n>1){
        cout<<"NO SOLUTION";
    }else {
      for(int i=2;i<=n;i+=2){
        cout<<i<<" ";
      }
      for(int i=1;i<=n;i+=2){
        cout<<i<<" ";
      }
    }
}

int main(){
    fastread();
    int t;
    cin>>t;
    solve(t);
    return 0;
}