#include<bits/stdc++.h>
#define int long long
using namespace std;


bool arr[100001];
int drr[100001][2];


void solution(){
    
   int len;string S;
   cin >> S;
   len=S.size();
   
   for(int i=1;i<len;++i)
      arr[i]=S[i]!=S[i-1];
   drr[0][0]=1;
   for(int i=1;i<len;++i) {
      drr[i][0]=(drr[i-1][0]+drr[i-1][1])%998244353;
      if(arr[i]==1) drr[i][1]=drr[i-1][0];
      else drr[i][1]=0;
   }
   cout << (drr[len-1][0]+drr[len-1][1])%998244353 << endl;
}
signed main() {
   int T;
   cin >> T;
   while(T--) 
    solution();
}
