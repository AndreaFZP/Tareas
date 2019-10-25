#include <iostream>
using namespace std;

int CUTROD(int p[], int n){
	int r[n+1];
	
	for(int i=0; i<=n; i++){
		r[i]=0;
	}
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			r[i]=max(r[i], p[j-1]+r[i-j]);
		}
	}
	
	return r[n];
}

int main(){
	int p[]={1,5,8,9,10,17,17,20,24,30};
	
	int n=5;
	
	cout<<CUTROD(p,n);
	
	return 0;
}
