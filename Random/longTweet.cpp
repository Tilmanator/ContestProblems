#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[]){
	int a,k;
	vector<int> words;

	cin >> a;
	if(!a){
		cout << 0;
		return 0;
	}
	words.reserve(a);
	copy_n(istream_iterator<int>(cin), a, back_inserter(words));

	cin >> k;

	if(!k){
		cout << 0;
		return 0;
	}

	int sum = 0;
	int wc=0;
	int max=0;
	
	int sindex=0;
	int eindex=0;
	while(eindex <a){
		sum+= words[eindex];
		++wc;
		++eindex;
		while(sum > k){
			sum-=words[sindex];
			++sindex;
			--wc;
			if(sindex==eindex)
				break;
		}

		if(eindex-sindex > max){
			max=wc;
		}
	}

	cout << max;
	/*sort(words.begin(), words.end());
	int sum = 0;
	int wc=0;
	
	for(size_t i=0; i<words.size(); ++i){
		if(sum + words[i] >k)
			break;
		sum += words[i];
		++wc;
	}
	cout << wc;*/
}

