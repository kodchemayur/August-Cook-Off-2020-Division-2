#include <iostream>

using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int x[n],y[n];
	    for(int i=0;i<n;i++){
	        cin>>x[i]>>y[i];
	    }
	    int s=n;
    
    while(true){
        if(n<6){
            break;
        }
        else{
            n=n/2;
            s=s+n;
        }
    }
    cout<<s<<endl;
	}
	return 0;
}
