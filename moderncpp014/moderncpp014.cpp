// moderncpp014.cpp : ISBN-10 검증 프로그램 만들기
//    ISBN-10?
//    d1d2d3d4d5d6d7d8d9d_10  의 10개 숫자
//    d1~d9는 일반적인 숫자이며, d_10은 ( d1x1 + d2x2 + d3x3 + ... + d9x9 ) % 11 값을 d_10으로 할당한다.
//    d_10이 10인 경우, X로 처리한다.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string st_ISBN="";

    cout << " ISBN 값 10자리를 입력하세요. " << endl;
    cin >> st_ISBN;

    int d10 = 0;
    for (int i = 0; i < 9 ; i++)
    {
        cout << st_ISBN[i] << endl;
        d10 += (st_ISBN[i]-48)*(i + 1);
        cout << d10 << endl;
    }

    if (d10 % 11 == 10)
    {
        if (st_ISBN[9] == 'X')
            cout << " ISBN 값 정상입니다. " << endl;
        else
            cout << " ISBN 값 비정상입니다. " << endl;
    }
    else
    {
        if ( (st_ISBN[9]-48) == d10 % 11 )
            cout << " ISBN 값 정상입니다. " << endl;
        else
            cout << " ISBN 값 비정상입니다. " << endl;
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
