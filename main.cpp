#include <iostream>

using namespace std;

int main()
{
	int A = 0;
	int B = 0;
	int C = 0;
	float X = 0;
	float Y = 0;

	cout << "���� ������ ���� ���� ���ϱ�" << endl;
	cout << "ax^2 + bx + c = 0" << endl;
	cout << "a �� �Է��ϼ���" << endl;
	cin >> A;
	cout << "b �� �Է��ϼ���" << endl;
	cin >> B;
	cout << "c �� �Է��ϼ���" << endl;
	cin >> C;
	int D = B * B - 4 * A * C;
	if (D > 0)
	{
		X = (-B + sqrt(B * B - 4 * A * C)) / (2 * A);
		Y = (-B - sqrt(B * B - 4 * A * C)) / (2 * A);
		cout << "x �� " << X << " ," << Y << " �Դϴ�" << endl;
	}
	else if (D == 0)
	{
		X = -B / (2 * A);
		cout << "x �� " << X << " �Դϴ�" << endl;
	}
	else
	{
		cout << "���� �����ϴ�" << endl;
	}


	return 0;
}