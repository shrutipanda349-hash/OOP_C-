//WAP to take input ,add  and display the elements of the matrix using function 
#include <iostream>
using namespace std;

void processMatrix(int mat[50][50], int rows, int cols) {
    int sum = 0;
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat[i][j];
            sum += mat[i][j];
        }
    }

    cout << "\nThe Matrix is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }
cout << "Sum of all matrix elements: " << sum<<"\n";
}

int main() {
    int r, c;
    int matrix[50][50];
    cout << "Enter rows and columns: ";
    cin >> r >> c;
    processMatrix(matrix, r, c);
    return 0;
}


