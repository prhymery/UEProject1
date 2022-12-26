#include <iostream>

using namespace std;

int main()
{
	int A = 0;
	int B = 0;
	int C = 0;
	float X = 0;
	float Y = 0;

	cout << "이차 방정식 근의 공식 구하기" << endl;
	cout << "ax^2 + bx + c = 0" << endl;
	cout << "a 를 입력하세요" << endl;
	cin >> A;
	cout << "b 를 입력하세요" << endl;
	cin >> B;
	cout << "c 를 입력하세요" << endl;
	cin >> C;
	int D = B * B - 4 * A * C;
	if (D > 0)
	{
		X = (-B + sqrt(B * B - 4 * A * C)) / (2 * A);
		Y = (-B - sqrt(B * B - 4 * A * C)) / (2 * A);
		cout << "x 는 " << X << " ," << Y << " 입니다" << endl;
	}
	else if (D == 0)
	{
		X = -B / (2 * A);
		cout << "x 는 " << X << " 입니다" << endl;
	}
	else
	{
		cout << "근이 없습니다" << endl;
	}


	return 0;
}