platform:
Hackerrank

problem link:
https://www.hackerrank.com/challenges/counting-valleys/problem

code:
#include<iostream>
#include<stdio.h>
#include <cstdlib>
using namespace std;
int counting_valleys(int n,string str){
	int count = 0;
	int valley=0;
	for(int i=0;i<n;i++){
		if(str[i]=='u'||str[i]=='U'){
			count+=1;
			if(count==0)
			 valley++;
		
		}else {
			count-=1;
 		
		}
		
	}
	return abs(valley);
}
int main(){
	int n;
	string str;
	cin>>n;
	cin>>str;

	int result = counting_valleys(n,str);
	cout<<result;
}
