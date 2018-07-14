#include <iostream>
#include <vector>
using namespace std;

void MaxSub(const vector<int> &ivec)
{
	int sum = 0, maxsum = 0;
	for(auto &i : ivec)
	{
		sum += i;
		if(sum < 0)
		  sum = 0;
		if(sum > maxsum)
		  maxsum = sum;
	}

	cout << maxsum << endl;
}


int main()
{
	size_t K;
	cin >> K;
	vector<int> ivec(K);
	for(auto &i : ivec)
	  cin >> i;
	
	MaxSub(ivec);

	return 0;

}
