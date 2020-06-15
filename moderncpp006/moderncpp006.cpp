// moderncpp006.cpp : 과잉수 출력 프로그램 구현하기
//   과잉수란?
//●완전수, 부족수, 과잉수, 우애수 ?
//
//▷부족수: 자신을 제외한 양의 약수(이하 진약수)를 모두 더한 수가 자기 자신보다 작은 수(ex. 26 : 1 + 2 + 13 = 15)
//
//▷과잉수: 진약수를 모두 더한 수가 자기 자신보다 큰 수(ex. 12 : 1 + 2 + 3 + 4 + 6 = 16)
//
//▷완전수: 진약수를 모두 더하면 자기 자신이 되는 수(ex. 6 : 1 + 2 + 3 = 6)
//
//▷우애수: 한 쌍의 두 수에서 한 수의 진약수를 더하면 다른 한 수가 되는 두 수
//  (ex(220, 284) || 220 :1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284, 284 : 1 + 2 + 4 + 71 + 142 = 220)
//

#include <iostream>
#include <numeric>
#include <string>
#include <sstream>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
    int nNum = 0;
    string over_div_num = "";

    cout << "양의 정수를 입력해주세요(4이상)." << endl;
    cin >> nNum;

    for (int i = 4; i < nNum; i++)
	{
		//find_div_num(i, all_div_num);

		string str_ret = "";

		int nSum = 0;
        over_div_num = "";
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				nSum += j;
                over_div_num += to_string(j) + " "; 
			}
		}

        if (nSum > i)
        {
            cout << "과잉수 : " << i << endl;
            cout << "과잉   : " << over_div_num << endl;
        }

	}

    return 0;
}

void find_div_num(int n, string dest)
{
    string str_ret = "";

    for (int i = n; i > 1; i--)
    {
        if (n % i == 0)
        {
            str_ret += i + " ";
        }
    }

    dest =  str_ret;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴

// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
