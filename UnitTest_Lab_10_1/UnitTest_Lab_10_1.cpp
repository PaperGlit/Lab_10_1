#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_10_1/Lab_10_1.cpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab101
{
	TEST_CLASS(UnitTestLab101)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			/* Я створив два текстові документи під назвою "UnitTest1.txt" і "UnitTest2.txt",
			в яких містяться рядки "TESTOGOTESTAGA" і "TESTTEST" відповідно.
			За допомогою цих документів я перевіряю функцію "ProcessTXT" на роботоспроможність і безпомилковість. */
			char fname1[255] = "C:/Users/Наталія/source/repos/Lab_10_1/UnitTest_Lab_10_1/UnitTest1.txt", fname2[255] = "C:/Users/Наталія/source/repos/Lab_10_1/UnitTest_Lab_10_1/UnitTest2.txt";
			string yes = ProcessTXT(fname1); string yes1 = "yes";
			string no = ProcessTXT(fname2); string no1 = "no";
			Assert::AreEqual(yes, yes1); 
			Assert::AreEqual(no, no1);
		}
	};
}
