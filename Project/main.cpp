#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
	vector<long long> answer;
	int i = 1;
	while (n-- > 0)
		answer.push_back(x*i++);
	return answer;
}

void main()
{
	//test
	//auto ret = solution(-4, 2);
}