#include<iostream>
using namespace std;

//int factorial(int n){
//	int fact=1;
//	for(int i=1;i<=n;i++){
//		fact=fact*i;
//	}
//	return fact;
//}
//int ncr(int n, int r){
//	int numer=factorial(n);
//	int denom=factorial(r)*factorial(n-r);
//	return numer/denom;
//}
//
// 
//int main(){
//	
//	int n,r;
//	cin>>n>>r;
//	
//	cout<<"ncr is"<<ncr(n,r);
//} 
bool iseven(int a){
	if(a&1){
		return 0;
	}
	return 1;
}
int main(){
	int n;
	cin>>n;
	if(iseven(n)){
		cout<<"even";
	}
	else cout<<"odd";
}
