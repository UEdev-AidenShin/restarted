#include <iostream>

using namespace std;

int main()
{
	//1. ����� ������ �����Դϱ�? (5��)

	double score[5];

	cout << "1�� �л��� �����ΰ� : ";
	cin >> score[0];

	cout << "2�� �л��� �����ΰ� : ";
	cin >> score[1];

	cout << "3�� �л��� �����ΰ� : ";
	cin >> score[2];

	cout << "4�� �л��� �����ΰ� : ";
	cin >> score[3];

	cout << "5�� �л��� �����ΰ� : ";
	cin >> score[4];

	//2. �������� ������ �����ΰ�?
	double totalscore = score[0] + score[1] + score[2] + score[3] + score[4];

	//3. �������� ����� ���ΰ�?
	double avgscore = totalscore / 5;

	//4. ��ŵ��� ������ ���հ� ����� ������ ���� ����ϱ�
	cout << "��� : " << avgscore << endl;
	cout << "���� : " << totalscore << endl;

	return 0;
}