#include <iostream>
#include <vector>
using namespace std;
class Matrix {
private:
    vector<vector<int>> mat;
    int rows;
    int cols;
public:
    Matrix(int r, int c, const vector<vector<int>>& values) : rows(r), cols(c), mat(values) {}
    Matrix operator*(const Matrix& other) const {
        if (this->cols != other.rows) {
            throw invalid_argument("Matrices cannot be multiplied: incompatible dimensions.");
        }
        vector<vector<int>> result(rows, vector<int>(other.cols, 0));
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                for (int k = 0; k < cols; ++k) {
                    result[i][j] += mat[i][k] * other.mat[k][j];
                }
            }
        }
        return Matrix(rows, other.cols, result);
    }
    void display() const {
        for (const auto& row : mat) {
            for (int val : row) {
                cout << val << " ";
            }
            cout << endl;
        }
    }
};
int main() {
    vector<vector<int>> values1 = {{1, 2, 3}, {4, 5, 6}};
    vector<vector<int>> values2 = {{7, 8}, {9, 10}, {11, 12}};
    Matrix mat1(2, 3, values1);
    Matrix mat2(3, 2, values2);
    cout << "Matrix 1:" << endl;
    mat1.display();
    cout << "Matrix 2:" << endl;
    mat2.display();
    try {
        Matrix result = mat1 * mat2;
        cout << "Result of multiplication:" << endl;
        result.display();
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
    }
    return 0;
}