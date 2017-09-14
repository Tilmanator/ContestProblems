#include <iostream>
#include <stack>

using namespace std;

void nextTest();

int main(void){
	int t;cin >> t;
	for(size_t j=0;j<t;++j){
		nextTest();
	}
}

void nextTest(){
	int length;cin >> length;
		stack<int> top, branch;
		int temp;
		for(size_t p=0;p<length;++p){
			cin >> temp;
			top.push(temp);
		}
		//top.reserve(length);
		//copy_n(istream_iterator<int>(cin), length, back_inserter(top));
		int target = 1;
		while(!top.empty() || !branch.empty()){
			if(!branch.empty() && branch.top() == target){
				branch.pop();
				++target;
			}
			else if(!top.empty() && top.top() == target){
				++target;
				top.pop();
			}
			else if(!top.empty()){
				branch.push(top.top());
				top.pop();
			}
			else{
				cout << "N" << endl;
				return;
			}
			
		}
		cout << "Y"<<endl;
		return;
}