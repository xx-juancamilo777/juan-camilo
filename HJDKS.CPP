#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> triangle;
    if (numRows <= 0) return triangle;

    triangle.reserve(numRows);
    for (int i = 0; i < numRows; ++i) {
        vector<int> row(i + 1, 1); // todos 1 al inicio
        for (int j = 1; j < i; ++j) {
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
        triangle.push_back(move(row));
    }
    return triangle;
}

int main() {
    int numRows = 5; // prueba con 5
    vector<vector<int>> res = generate(numRows);

    // imprimir resultado
    for (const auto &row : res) {
        cout << "[";
        for (size_t i = 0; i < row.size(); ++i) {
            cout << row[i];
            if (i + 1 < row.size()) cout << ",";
        }
        cout << "]\n";
    }

    return 0;
}
