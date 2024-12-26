#include <iostream>

using namespace std;

int main()
{
	//1. 당신의 점수는 몇점입니까? (5명)

	double score[5];

	cout << "첫번째 학생은 몇점인가 : ";
	cin >> score[0];

	cout << "두번째 학생은 몇점인가 : ";
	cin >> score[1];

	cout << "세번째 학생은 몇점인가 : ";
	cin >> score[2];

	cout << "네번째 학생은 몇점인가 : ";
	cin >> score[3];

	cout << "다섯번째 학생은 몇점인가 : ";
	cin >> score[4];

	//2. 점수들의 총합은 몇점인가?
	double totalscore = score[0] + score[1] + score[2] + score[3] + score[4];

	//3. 점수들의 평균은 몇인가?
	double avgscore = totalscore / 5;

	//4. 당신들의 성적의 총합과 평균은 몇인지 문구 출력하기
	cout << "평균 : " << avgscore << endl;
	cout << "총합 : " << totalscore << endl;

	return 0;
}