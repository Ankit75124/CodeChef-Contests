#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin>>T;
	while(T--){
	    long long n,x,y;
	    cin>>n>>x>>y;
	    vector<long long> A(n);
	    for(int i=0;i<n;i++){
	       cin>>A[i]; 
	    }
	    priority_queue<long long,vector<long long>,greater<long long>> pq;
	    for(auto it : A){
	        pq.push(it);
	    }
	    while(y>0){
	        long long mn=pq.top();
	        if((mn^x)>mn){
	            pq.pop();
	            pq.push(mn^x);
	            y--;
	        }
	        else{
	            if((y&1)==0) 
	                break;
	            else{
	                pq.pop();
	                pq.push(mn^x);
	                break;
	            }
	        }
	    }
	    int cont=0;
	    while(!pq.empty()){
	        A[cont]=pq.top();
	        pq.pop();
	        cont++;
	    }
	    for(auto it : A){
	        cout<<it<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
