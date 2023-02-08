#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007


int solve(int n){
    int cnt=0;
    while(n >= 5){
       cnt += n/5;
       n/=5;
    }
    return cnt;
    
}

int main(){
    fastread();
   int n;
   cin>>n;
   cout<<solve(n);
    return 0;
}