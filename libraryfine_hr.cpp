#include<iostream>
#include<stdio.h>
using namespace std;
int library_fine(int d1, int m1, int y1, int d2, int m2, int y2){
	int fine=0;
	if(y2==y1){
		if(m2==m1){
			if(d2<d1){
				fine = 15*(d1-d2);
			}
		}else{
			if(m2<m1)
			fine = 500*(m1-m2);
		}
	}else{
		if(y1<y2)
		fine=0;
		else
		fine = 10000;
	}
	return fine;
}

int main(){
	int d1,m1,y1,d2,m2,y2;
	cin>>d1>>m1>>y1;
	cin>>d2>>m2>>y2;
	
	int fine = library_fine(d1,m1,y1,d2,m2,y2);
	cout<<fine;
}
