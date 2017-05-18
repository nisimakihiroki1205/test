#include "stdafx.h"
#include "CppUnitTest.h"
#include "LibraryApplication.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{		
	TEST_CLASS(UnitTestAdd)
	{
	public:
		
		TEST_METHOD(TestMethodAdd)
		{
			// TODO: テスト コードをここに挿入します
			Assert::AreEqual(MyCalc::add(1, 2), 3);

		}
		TEST_METHOD(TestMethodAAAAAAAA)
		{
			// TODO: テスト コードをここに挿入します
			Assert::AreEqual(MyCalc::add(1000, 200000), 300000000);

		}
	};
}