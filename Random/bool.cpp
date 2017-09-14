#include <iostream>
#include <string>
#include <cstdbool>
using namespace std;

int main(int argc, char* argv[]){
	string s;
	bool n = false;
	while(cin >> s){
		if(s == "True"){
			cout << (n ? "False" : s) << endl;exit(0);
		}else if (s == "False"){
			cout << (n ? "True" : s) << endl;exit(0);
		}
		else{
			n = !n;
		}
	}
	
}

