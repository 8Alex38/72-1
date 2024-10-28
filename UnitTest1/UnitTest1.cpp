#include "pch.h"
#include "CppUnitTest.h"
#include "../72-1/72-1.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest72
{
    TEST_CLASS(UnitTest72)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            const int k = 5;
            const int n = 2;
            int** matrix = new int* [k];
            for (int i = 0; i < k; ++i) {
                matrix[i] = new int[n];
            }

            matrix[0][0] = 1; matrix[0][1] = 2;
            matrix[1][0] = 3; matrix[1][1] = 4;
            matrix[2][0] = 5; matrix[2][1] = 6;
            matrix[3][0] = 7; matrix[3][1] = 8;
            matrix[4][0] = 9; matrix[4][1] = 0;

            int result = findMaxOfMinsInOddRows(matrix, k, n);
            std::cout << "TestMethod1: The largest of the minimum elements on odd lines = " << result << std::endl;

            for (int i = 0; i < k; ++i) {
                delete[] matrix[i];
            }
            delete[] matrix;
        }

        TEST_METHOD(TestMethod2)
        {
            const int k = 4;
            const int n = 3;
            int** matrix = new int* [k];
            for (int i = 0; i < k; ++i) {
                matrix[i] = new int[n];
            }

            matrix[0][0] = 1; matrix[0][1] = 2; matrix[0][2] = 3;
            matrix[1][0] = 4; matrix[1][1] = 5; matrix[1][2] = 6;
            matrix[2][0] = 7; matrix[2][1] = 8; matrix[2][2] = 9;
            matrix[3][0] = 10; matrix[3][1] = 11; matrix[3][2] = 12;

            int result = findMaxOfMinsInOddRows(matrix, k, n);
            std::cout << "TestMethod2: The largest of the minimum elements on odd lines = " << result << std::endl;

            for (int i = 0; i < k; ++i) {
                delete[] matrix[i];
            }
            delete[] matrix;
        }

        TEST_METHOD(TestMethod3)
        {
            const int k = 3;
            const int n = 2;
            int** matrix = new int* [k];
            for (int i = 0; i < k; ++i) {
                matrix[i] = new int[n];
            }

            matrix[0][0] = 3; matrix[0][1] = 5;
            matrix[1][0] = 6; matrix[1][1] = 7;
            matrix[2][0] = 2; matrix[2][1] = 1;

            int result = findMaxOfMinsInOddRows(matrix, k, n);
            std::cout << "TestMethod3: The largest of the minimum elements on odd lines = " << result << std::endl;

            for (int i = 0; i < k; ++i) {
                delete[] matrix[i];
            }
            delete[] matrix;
        }
    };
}
