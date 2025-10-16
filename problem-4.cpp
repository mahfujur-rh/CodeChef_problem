//https://www.codechef.com/problems/CPRIVAL

#include <bits/stdc++.h>
using namespace std;
int main() {
	int d1,d2,r1,r2;
	cin>>d1>>d2>>r1>>r2;
  
    //  1   100
    //  -5 -150
    // example: Dominater's final rating after the contest is =  1-5=-4  -- Everule's final rating =  100-150=-50
    // dominater>everule
    
	int drc=r1+d1;
	int erc=r2+d2;
	if(drc>erc){
	    cout<<"Dominater"<<endl;
	}
	else cout<<"Everule"<<endl;
}
