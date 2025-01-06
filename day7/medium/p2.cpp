#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> combination;
        backtrack(n, k, 1, combination, result);
        return result;
    }
    void backtrack(int n, int k, int start, vector<int>& combination, vector<vector<int>>& result) {
        if (combination.size() == k) {
            result.push_back(combination);
            return;
        }
        for (int i = start; i <= n; ++i) {
            combination.push_back(i);
            backtrack(n, k, i + 1, combination, result);
            combination.pop_back();
        }
    }
};
int main() {
    Solution solution;
    int n = 4, k = 2;
    vector<vector<int>> result = solution.combine(n, k);
    for (const vector<int>& combination : result) {
        for (int num : combination) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
