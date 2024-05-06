#include<bits/stdc++.h>
using namespace std;


string compareIfElse(int a, int b) {
	// Write your code here
	if (a<b){
		return "smaller";
	}
	else if (a>b){
		// cout<<"greater";
		return "greater";
	}
	else{
		// cout<<"equal";
		return "equal";
	}
}

int main(){
    int a, b;
    cin>>a>>b;
    cout<<compareIfElse(a,b);
}


