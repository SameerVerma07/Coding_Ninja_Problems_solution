// using Switch case senario
#include<bits/stdc++.h>
using namespace std;
double areaSwitchCase(int ch, vector<double> a) {
	// Write your code here
	switch(ch){
    case 1:
		return a[0]*a[0]*3.14159265359;
    case 2:
		return a[0]*a[1];
	default:
        return 0;
    }
}

int main(){
    int x;
    cin>>x;
    if (x == 1){
        vector<double>  a(1);
        cin>>a[0];
        cout<<areaSwitchCase(x,a);

    }
    else if (x==2){
        vector<double>  k(2);
        cin>>k[0]>>k[1];
        cout<<areaSwitchCase(x,k);

    }

}
