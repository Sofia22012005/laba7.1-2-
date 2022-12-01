#include "pch.h"
#include "CppUnitTest.h"
#include "../laba7.1(2)/laba7.1(2).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {

            int count = 0;
            int k, i, j, S = 0;
            int result;
            const int row_count = 4;
            const int col_count = 4;
            int a[row_count][col_count] = {
              {1, 5, 6, 10},
              {4, 12, 18, 9},
              {3, -2, 7, 0},
              {-3, 4, 6, 7}
            };
            int* pa[4] = { a[0], a[1], a[2], a[3] };
            Calc(pa, row_count, col_count, S, k, i, j);
            result = count;

            Assert::AreEqual(0, result);

        }
    };
	
}
