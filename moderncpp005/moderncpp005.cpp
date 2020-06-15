// moderncpp005.cpp : 섹시 소수 짝을 출력하는 프로그램 구현하기
//#섹시 소수 짝? ...
// 섹시 소수은 "차이가 6인 소수의 쌍"을 뜻하는데 숫자 6은 영어로 six지만, 라틴어로 6을 뜻하는 sex에서 왔다.
//
// 예컨대, 5는 약수가 본인인 5와 1뿐인 소수이고, 11도 소수이다.
//
//   11 - 5 = 6이므로(5, 11)는 섹시 소수가 된다.
//
// 출처: https://elwlsek.tistory.com/1044 [어짜고 저짜고 뭐라고]
//

#include <iostream>
#include <numeric>
#include <string>

bool find_sosu(int i);

using namespace std;
int main()
{
    int nNum1;
    int nSoSu1 = 0;
    int nSoSu2 = 0;
    string SexySosu =""; 

    cout << " 양의 정수를 입력하세요.(2이상) ";
    cin >> nNum1;

    for (int i = 2 ; i<= nNum1; i++)
    {
        if (find_sosu(i) == true)
        {
            nSoSu1 = i;
            for (int j = i + 1; j <= nNum1; j++)
			{
				if (find_sosu(j) == true)
				{
					nSoSu2 = j;

					if (nSoSu2 - nSoSu1 == 6)
					{
						SexySosu += "(" + to_string(nSoSu1) + "," + to_string(nSoSu2) + ")" + "\n";
						break;
					}

				}
			}
        }
    }

    cout << " 주어진 수 " << nNum1 << " 보다 작은 수 중 섹시 소수들은 " << endl << SexySosu << " 입니다." << endl;
}

bool find_sosu(int nCurNum)
{
    int i;
    bool ret = false;
    for (i = nCurNum - 1; i >= 1; i--)
    {
        if (nCurNum % i == 0)
        {
            break;
        }
        else
        {
            continue;
        }
    }
    if (i == 1) ret = true;
    else        ret = false;

    return ret;
}
