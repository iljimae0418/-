#include <iostream>
#include <cstdio>
using namespace std; 

int main(){
	int n; 
	scanf("%d",&n); 
	for (int i = 2; i*i <= n; i++){
		while (n%i == 0){
			cout << i << endl; 
			n /= i; 
		}
	}
	if (n != 1) cout << n << endl; 
	return 0; 
}
