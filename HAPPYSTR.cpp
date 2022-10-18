/*
CodeChef Problem Code: HAPPYSTR
Link: https://www.codechef.com/submit/HAPPYSTR
*/

#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,c,f; string s;
	cin>>t;
	while(t--){
	    cin>>s; c=0; f=1;
		for(char ch : s){
			if(f){
				if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
					c++;
				}
				else{
					c=0;
				}
				if(c>2){
				f=0;
				break;
				}
			}
			else{
				break;
			}
			
		}
		if(c>2){
			cout<<"HAPPY"<<el;
		}
		else{
			cout<<"SAD"<<el;
		}
	}
	return 0;
}
