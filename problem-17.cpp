//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SNDMAX?tab=statement
//three integer taki second max print kora 
#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;cin>>tc;
	while(tc--){
	    int a,b,c;cin>>a>>b>>c;
	    if(a>=b and a<=c or a<=b and a>=c){
	        cout <<a<<endl;
	    }
	    else if(b>=a and b<=c or b<=a and b>=c){
	        cout<<b<<endl;
	    }
	    else cout<<c<<endl;
	}
return 0;
}
