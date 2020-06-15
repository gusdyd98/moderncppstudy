//최대 공약수 프로그램 구현하기
// : 양의 정수 두개가 주어졌을 때, 두 수의 최대공약수를 계산하고 출력하는 프로그램을 작성하라.
// : 최대공약수란?
// : 두 개의 정수가 주어졌을 때, 두 수를 나누는 약수 중에 공통으로 사용된 약수가 있고, 이 공통으로 사용된 약수 중 가장 큰 수가 최대공약수입니다.



#include<iostream>
#include<string>

using namespace std;

int main()
{
	int nNum_1=0, nNum_2=0;
	int nMaxNum; 
	int nMaxCommonNum=1; 
	string s_com_num="";

	cout << "양의 정수 두개를 입력해주세요 (ex. 10 20<엔터>)" << endl;
	cin >> nNum_1, nNum_2;

	if (nNum_1 < nNum_2)
	{
		nMaxNum = nNum_2;
	}
	else
	{
		nMaxNum = nNum_1;
	}

	for (int i = 1; i <= nMaxNum; i++)
	{
		if (nNum_1 % i == 0 && nNum_2 % i == 0)
		{
			s_com_num += to_string(i);
			if (nMaxCommonNum < i)
			{
				nMaxCommonNum = i;
			}
		}
	}

	cout << "두 정수 " << nNum_1 << " 과 " << nNum_2 << "의 최대 공약수는 " << nMaxCommonNum << "입니다." << endl;
	cout << endl << "추가로, 두 정수 " << nNum_1 << " 과 " << nNum_2 << "의 공약수들은 " << endl << " : " << s_com_num << "입니다." << endl;

	return 0;
}
