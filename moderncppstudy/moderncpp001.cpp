#include<iostream>
#include<string>

using namespace std;

int main()
{
	int nNum;

	int nDiv1 = 3;
	int nDiv2 = 5;

	int nSum=0;

	string sInputNum="";

	cout << "숫자를 입력하세요. 1부터 해당 숫자까지 " << nDiv1 << " 또는 " << nDiv2 << " 로 나누어 떨어지는 숫자들의 합을 보여주겠습니다.: ";
	cin >> nNum;

	nSum = 0;
	for (int i = 1; i <= nNum; i++)
	{
		if (i % nDiv1 == 0 || i % nDiv2 == 0)
		{
			nSum += i;

			sInputNum += to_string(i) + " ";
		}
	}

	cout << "입력한 숫자 " << nNum << "까지 " << nDiv1 << " 또는 " << nDiv2 << " 로 나누어 떨어지는 숫자들은 다음과 같습니다." << endl;
	cout << "  : " << sInputNum << endl;
	cout << "위 숫자들의 합 : " << nSum << endl;

	return 0;

}