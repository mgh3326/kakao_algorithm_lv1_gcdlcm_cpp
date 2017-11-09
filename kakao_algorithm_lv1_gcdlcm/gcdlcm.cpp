/*
최대공약수와 최소공배수 Level 1
두 수를 입력받아 두 수의 최대공약수와 최소공배수를 반환해주는 gcdlcm 함수를 완성해 보세요.
배열의 맨 앞에 최대공약수, 그 다음 최소공배수를 넣어 반환하면 됩니다.
예를 들어 gcdlcm(3,12) 가 입력되면, [3, 12]를 반환해주면 됩니다.
*/
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
	//최대공약수 최소공배수 출력
	return 0;
}