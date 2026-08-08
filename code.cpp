#include <iostream>
using namespace std;

int main() {
    int row, column;
    cout << "Enter the number of rows: ";
    cin >> row;

    cout << "Enter the number of columns: ";
    cin >> column;

    int arr[100][100];
    cout << "Enter the elements:\n";

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            cin >> arr[i][j];
        }
    }
    int result = arr[0][0];

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            if(i == 0 && j == 0) continue;
            result -= arr[i][j];
        }
    }
    cout << "Final Result = " << result << endl;
    return 0;
}
