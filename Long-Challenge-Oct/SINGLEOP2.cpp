#include<bits/stdc++.h>
#define int long long
using namespace std;


void solution(){
   int n;
   string S;
   cin >> n >> S;
   
   for(int i=1;i<n;++i) 
      if(S[i]=='1') {
         cout << i << endl;
         return;
      }
   cout << n << endl;
}
signed main() {
   int T;
   cin >> T;
   
   while(T--) 
    solution();
}
