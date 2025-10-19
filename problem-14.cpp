//https://www.codechef.com/problems/ONEFULPAIRS

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int total=a+b+(a*b);
    if(total==111){
    cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
	return 0;
}
