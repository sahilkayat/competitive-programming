#include<iostream>
#include<stdio.h>
using namespace std;
using std::cout; 
using std::cin;
using std::endl; 
using std::string;
long int big_sum(long int ar[],int n){
	long int sum=0;
	for(int i=0;i<n;i++){
		sum+=ar[i];
	}
	return sum;
}
int main(){
	int ne;
	long int arr[100];
	cin>>ne;
	for(int i=0;i<ne;i++){
		cin>>arr[i];
	}
	long int result = big_sum(arr,ne);
	cout<<result;
}


