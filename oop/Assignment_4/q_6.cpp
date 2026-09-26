//WAP to add two matrix using function 
#include <iostream>
using namespace std;

void addMatrices(int A[50][50], int B[50][50], int C[50][50], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main() {
    int r, c;
    int A[50][50], B[50][50], C[50][50];
    cout << "Enter rows and columns: ";
    cin >> r >> c;
    
    cout << "Enter elements of Matrix A:\n";
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) cin >> A[i][j];
        
    cout << "Enter elements of Matrix B:\n";
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) cin >> B[i][j];

    addMatrices(A, B, C, r, c);
    
    cout << "Resultant Sum Matrix:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) cout << C[i][j] << "\t";
        cout << "\n";
    }
    return 0;
}
