// SampleTest.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include "LibraryApplication.h"

int main()
{
	std::cout << "1+1=" << MyCalc::add(1, 1) << std::endl;

	td::cout << "これで" << MyCalc2::add2(2,2) << "あってるんですかね？" << std::endl;


	system("pause");// キーを押してから終了
    return 0;
}

