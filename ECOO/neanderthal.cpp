#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char* argv[]){
	string s;

	string matches[] = {"ook","ookook","oog","ooga","ug","mook","mookmook","oogam","oogum","ugug"};

	//for(size_t i=0;i<10;++i){
		while(cin >> s){
			vector<int> qq (s.length()+1);
			qq[0]=1;
			for(int j=0;j<s.length()+1;++j){
				for(size_t p=0;p<10;++p){
					if(j-(int)matches[p].length() >= 0){
					if(s.substr(j-matches[p].length(),matches[p].length())==matches[p]){
						qq[j]+=qq[j-matches[p].length()];
					}
					}
				}
			}

			cout << qq[s.length()] << endl;
	//	}
	}
}

