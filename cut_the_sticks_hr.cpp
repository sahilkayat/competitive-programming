platform:
HackerRank

Problem link:
https://www.hackerrank.com/challenges/cut-the-sticks/problem?h_r=internal-search

//Code here:
#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int test;
	cin>>test;

	string res[test];
	int k=0;
	
	int a[100000],b[100000];
	while(test>0){
		int n;
		cin>>n;
		int count=0;
		int move=0;
	
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int j=0;j<n;j++)
	cin>>b[j];
	

	for(int i=0;i<n;i++){
		if(a[i]>b[i])
		count++;
		else
		move++;
	}
	
	if(count==n)
	res[k] = "Yes";
	else if(count==n-1 && move==1)
    res[k] = "Yes";
	else
	res[k] = "No";

test--;	
k++;
}
//display
for(int i=0;i<k;i++)
cout<<res[i]<<"\n";
}
