#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007

ll solve(int n){
  //ll a=pow(2,n)%M;
  int ans =2;
  for(int i=1; i<+n; i++){
    ans=ans*2%M;
  }
  return ans;
    
}

int main(){
    fastread();
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}