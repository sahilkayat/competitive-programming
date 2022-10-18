/*
CodeChef Problem Code: EQUIVALENT
Link: https://www.codechef.com/submit/EQUIVALENT
*/

#include <iostream>
using namespace std;
#define mod 1000000007
#define ll long long
#define el "\n";

ll power(ll a, ll p){
	ll c = 0;
	while(a%p==0){
		a=a/p;
		c++;
	}
	return c;
}

ll gcd(ll a, ll b){
	if(a%b==0){
		return b;
	}
	else{
		return gcd(b,a%b);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll t,i,j,a,b,x,y,lcm,a1,b1,pa,pb,q1,q2;
	ll *arr = new ll[1000001];
	for(i=1;i<=1000000;i++){
		arr[i]=i;
	}

	for(i=2;i<=1000000;i++){
		if(arr[i]==i){
			for(j=i*i;j<=1000000;j+=i){
				if(arr[j]==j){
					arr[j]=i;
				}
			}
		}
	}

	cin>>t;
	while(t--){
	    cin>>a>>b;
		pa = arr[a];
		pb = arr[b];

		if(pa!=pb){
			cout<<"NO"<<el;
			continue;
		}

		q1 = power(a, pa);
		q2 = power(b, pb);

		lcm = (q1*q2)/gcd(max(q1,q2),min(q1,q2));
		x = lcm/q1;
		y = lcm/q2;
		a1 = b1 = 1;
		for(i=1;i<=x;i++){
			a1 = (a1*a)%mod;
		}
		for(i=1;i<=y;i++){
			b1 = (b1*b)%mod;
		}

		if(a1==b1){
			cout<<"YES"<<el;
		}
		else{
			cout<<"NO"<<el;
		}
	}
	return 0;
}
