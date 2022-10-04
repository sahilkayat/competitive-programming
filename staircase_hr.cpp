platform: hackerrank

problem link:
https://www.hackerrank.com/challenges/staircase/problem

code:
#include<iostream>
#include<stdio.h>
using namespace std;

void staircase(int n){
	int x=n;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=(n-1);j++)
			cout<<" ";
		 
		for(int k=0;k<i;k++){
		 	
			cout<<"#";
		}
		cout<<"\n";
	}
}
int main(){
	int n;
	cin>>n;
	staircase(n);
	
}
