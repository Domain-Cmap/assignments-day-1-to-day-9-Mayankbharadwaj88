#include <iostream>
using namespace std;

void generate(int numRows) {
    int triangle[numRows][numRows];
    
    for (int i = 0; i < numRows; ++i) {
        triangle[i][0] = triangle[i][i] = 1;  
        for (int j = 1; j < i; ++j) {
            triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];  
        }
        for (int j = 0; j <= i; ++j) {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int numRows1 = 5;
    generate(numRows1);
    cout << endl;
    int numRows2 = 1;
    generate(numRows2);
    return 0;
}
