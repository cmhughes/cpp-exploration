/*  prime-number.cpp
 *
 *  a program that tests if a given integer is prime
 *
 *  Author: Raj Valand
 *  Date:   September 24th, 2020
 *
 *  Input: user is requested for a number, n; 
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		a[i] = 0;
	for(int i=2;i<=sqrt(n);i++){
		for(int j = i+1;j<=n;j++){
			if(j%i == 0)
				a[j] = 1;
		}
	}
	for(int i=2;i<=n;i++){
		if(a[i]==0)
			cout<<i<<endl;
	}
	return 0;
}