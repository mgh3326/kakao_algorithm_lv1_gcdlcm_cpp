#include<vector>
#include<iostream>
using namespace std;
vector<int> gcdlcm(int a, int b)
{
	vector<int> answer;
	int z;
	int x = a;
	int y = b;


	//유클리드 호제법
	while (true) {

		z = x %y;
		if (0 == z)
			break;

		x = y;
		y = z;

	}
	
	answer.push_back(y);
	answer.push_back(a*b/y);

	return answer;
}

int main()
{
	int a = 3, b = 12;
	vector<int> testAnswer = gcdlcm(a, b);//유클리드 호제법 확인

	cout << testAnswer[0] << " " << testAnswer[1];
	return 0;
}