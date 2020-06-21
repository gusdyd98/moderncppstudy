// moderncpp008.cpp : 암스트롱수 출력하기
//    암스트롱 수란?
//    어떤 수에서 그 수의 자릿수들의 세제곱의 합이 자기 자신과 같은 수를 암스트롱 수라고 합니다.
//    ex) 370 -> 3*3*3 + 7*7*7 + 0*0*0 = 370
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int nNum;

    cout << "양의 정수를 하나 입력하세요." << endl;
    cin >> nNum;

	cout << nNum << "까지의 수 중 암스트롱 수 List" << endl;

    for (int i = 1; i <= nNum; i++)
    {
        string s_Size = to_string(i); 

        int nSum=0;
        int n_tmpNum=0;
		//cout << s_Size << endl;
        for (int j = 0 ; j< s_Size.length(); j++)
        {
            n_tmpNum = stoi(to_string(s_Size[j])) - '0';
            nSum += n_tmpNum * n_tmpNum * n_tmpNum;
        }
		//for debug: cout << s_Size.length() << " " << i << "  ===> " << nSum << endl;
        if (nSum == i && i != 1)
		{
			cout << "  ===> " << i << endl;
		}
    }
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
