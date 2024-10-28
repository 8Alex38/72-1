#include <iostream>
#include <limits>
using namespace std;

int findMaxOfMinsInOddRows(int** matrix, int k, int n) {
    int maxOfMins = std::numeric_limits<int>::min();
    bool found = false;

    for (int i = 1; i < k; i += 2) {
        int minInRow = std::numeric_limits<int>::max();

        for (int j = 0; j < n; j++) {
            if (matrix[i][j] < minInRow) {
                minInRow = matrix[i][j];
            }
        }

        if (minInRow > maxOfMins) {
            maxOfMins = minInRow;
            found = true;
        }
    }

    return found ? maxOfMins : std::numeric_limits<int>::max();
}

int main() {
    int k, n;

    cout << " k = ";
    cin >> k;
    cout << " n = ";
    cin >> n;

    int** matrix = new int* [k];
    for (int i = 0; i < k; ++i) {
        matrix[i] = new int[n];
    }

    cout << "Enter the matrix elements =" << endl;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            cout << "matrix[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }

    int result = findMaxOfMinsInOddRows(matrix, k, n);
    if (result != std::numeric_limits<int>::max()) {
        cout << "The largest of the minimum elements on odd lines = " << result << endl;
    }
    else {
        cout << "No item was found in odd rows." << endl;
    }

    for (int i = 0; i < k; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
