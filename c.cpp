#include<iostream>
#include<ctime>
#include<unistd.h>
#include<set>
#include<vector>
using namespace std;
int rand(int a, int b){
	return a + rand()%(b-a+1);
}
string gen_random(const int len) {
    string tmp_s;
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    srand( (unsigned) time(NULL) * getpid());
    tmp_s.reserve(len);
    for (int i = 0; i < len; ++i) 
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    return tmp_s;
}
int main(int argc, char* argv[]){
	srand(stoi(argv[1]));
	cout<<1<<" ";
	int n = rand(4,6);
	// cout<<t<<"\n";
	cout<<n<<"\n";
	for(int i = 1; i <= n; ++i){
		cout<<rand(-10,10)<<" ";
	}
	// cout<<"\n";
	// for(int i = 0; i < n; ++i){
	// 	cout<<rand(-5,5)<<" ";
	// }


	// set<int> A;
	// while(A.size() < n){
	// 	int h = rand(1,n);
	// 	if(A.find(h) == A.end()){
	// 		A.insert(h);
	// 		cout<<h<<" ";
	// 	}
	// }

}