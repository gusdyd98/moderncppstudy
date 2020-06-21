// moderncpp009.cpp : 소인수 분해하고 소인수 출력하기
//

#include <iostream>
#include <string>

void find_sosu_divsor(int nCurNum);
bool find_sosu  (int nCurNum);
int  find_jisu  (int nCurNum, int divnum);


using namespace std;

int main()
{
    int nNum;

    cout << "양의 정수를 하나 입력하세요." << endl;
    cin >> nNum;

	find_sosu_divsor(nNum);
}



void find_sosu_divsor(int nCurNum)
{
    int i;
    int n_div_cnt=0;
    int n_jisu_cnt=0;
    bool ret = false;
    for (i = nCurNum - 1; i >= 1; i--)
    {
        if (nCurNum % i == 0)
        {
            if (find_sosu(i) == true)
            {
                cout << i << " ";
                n_jisu_cnt = find_jisu(nCurNum, i);
                cout << "(^" << n_jisu_cnt << ")" << endl;
            }
            n_div_cnt++;
        }
        else
        {
            continue;
        }
    }
    cout << "\n";

    return ;
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

int  find_jisu(int nCurNum, int divnum)
{
    int i;
    int n_divided_cnt = 0;
    int ret = 0;
    int n_AfterNum = 0;

    n_AfterNum = nCurNum;
        
	while (n_AfterNum % divnum == 0)
	{
		n_divided_cnt++;
		n_AfterNum = n_AfterNum / divnum;
	}

    ret = n_divided_cnt;

    return ret;
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
