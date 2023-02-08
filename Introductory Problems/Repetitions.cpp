#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007

int solve(string s){
  int count=0;
  int max_num=0;
//   for(int i=0;i<s.size()-1;i++){
//     if(s[i]==s[i+1]){
//         count++;
//     }
//     max_num=max(max_num,count);
//   }
//   return max_num;
   int i = 0, j = 0;
   while( i<s.size() ){
        while( j<s.size() and s[i]==s[j] )
            j++,count++;
        
        // calculate
        max_num = max(max_num,count);
        count = 0;
        i = j;
   }

   return max_num;
}

int main(){
    fastread();
    string s;
    cin>>s;
    cout<<solve(s);
    return 0;
}