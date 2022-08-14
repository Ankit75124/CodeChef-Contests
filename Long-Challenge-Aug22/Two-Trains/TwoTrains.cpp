#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,car;
	cin>>T;
	for(int j=0;j<T;j++){
	    int sum=0,dif,i;
	    cin>>car;
	    int a[car],b[car];
	    a[0]=0;
	    b[0]=0;
	    for(i=1;i<car;i++){
	        cin>>a[i];
	        sum+=a[i];
	        b[i]=a[i];
	        a[i]=sum;
	    }
        for(i=0;i<car-1;i++){
            dif=a[i+1]-b[i];
            if(dif>0)
                b[i+1]=b[i]+dif+b[i+1];
            else
                b[i+1]=b[i]+b[i+1];
        }	   
        cout<<b[i]<<endl;
	}
	return 0;
}
