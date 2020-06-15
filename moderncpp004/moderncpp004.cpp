// moderncpp004.cpp : 주어진 수보다 작은 가장 큰 소수를 계산하는 프로그램 구현하기
//

#include <iostream>
#include <numeric>

bool find_sosu(int i);

using namespace std;
int main()
{
    int nNum1;
    int nMaxSoSu = 0;

    cout << " 양의 정수를 입력하세요. ";
	cin >> nNum1;

    for (int i = nNum1; i >= 1; i--)
    {
        if (find_sosu(i) == true)
        {
            nMaxSoSu = i;
            break;
        }
    }

    cout << " 주어진 수 " << nNum1 << " 보다 작은 수 중 가장 큰 소수는 " << nMaxSoSu << " 입니다." << endl;
}

bool find_sosu(int nCurNum)
{
    int i;
    bool ret = false;
    for (i = nCurNum - 1; i >= 1; i--)
    {
        if (nCurNum % i == 0 )
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
