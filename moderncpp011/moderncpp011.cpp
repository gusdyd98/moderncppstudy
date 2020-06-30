// moderncpp011.cpp : 로마 숫자 표기법 변환 프로그램 구현하기
//                  : 사용자가 입력한 수를 로마 표기법으로 출력하는 프로그램을 작성하라
//     * 로마표기법?  IV, X, XI???
//    1 : I       11 : XI      21 : XXI        31 : XXXI        41 : XLI          90 : XC
//    2 : II      12 : XII     22 : XXII       32 : XXXII       42 : XLII        100 : C
//    3 : III     13 : XIII    23 : XXIII      33 : XXXIII      43 : XLIII       500 : D
//    4 : IV      14 : XIV     24 : XXIV       34 : XXXIV       44 : XLIV       1000 : M
//    5 : V       15 : XV      25 : XXV        35 : XXXV        45 : XLV
//    6 : VI      16 : XVI     26 : XXVI       36 : XXXVI       46 : XLVI
//    7 : VII     17 : XVII    27 : XXVII      37 : XXXVII      47 : XLVII
//    8 : VIII    18 : XVIII   28 : XXVIII     38 : XXXVIII     48 : XLVIII
//    9 : IX      19 : XIX     29 : XXIX       39 : XXXIX       49 : XLIX
//   10 : X       20 : XX      30 : XXX        40 : XL          50 : L  

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

std::string to_roman(unsigned int value)
{
    std::vector<std::pair<unsigned int, char const*>> roman{
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400,"CD"},
        {100, "C"}, {90, "XC"}, {50,"L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"} };

    std::string result;

    for (auto const& kvp : roman) {
        cout << "check...1" << endl;
        while (value >= kvp.first) {
            cout << "check...2" << endl;
            result += kvp.second;
            value -= kvp.first;
        }
    }

    return result;
}

int main()
{

    for (int i = 1; i <= 100; i++)
    {
        std::cout << i << "\t" << to_roman(i) << std::endl;
    }

    int number = 0;
    std::cout << "number :";
    std::cin >> number;
    std::cout << to_roman(number) << std::endl;
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
