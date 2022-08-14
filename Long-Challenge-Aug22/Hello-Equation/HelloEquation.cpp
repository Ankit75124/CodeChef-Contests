#include <iostream>
using namespace std;
void test(){
    int n;
    cin>>n;
	    for(int i=1;i*i<=n;++i){
	        if((n-2*i)%(i+2)==0 && n!=2*i){
	            cout<<"YES"<<endl;
	            return;
	        }
	    }
	    cout <<"NO"<<endl;
}


int main() {
	// your code goes here
	int T,n;
	cin>>T;
	while(T--)
	    test();
	    
	
	return 0;
}
