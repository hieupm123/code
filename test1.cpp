#include<iostream>
#include<math.h>
#include<vector>
#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;
int numberof(int a){
	int b = 0;
	while(a > 0){
		a /= 10;
		b++;
	}
	return b;
}
int main(){
	int a[10000];
	a[-1] = 10;
	cout<<a[-1];
    return 0;
}
