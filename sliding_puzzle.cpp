#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int slidingPuzzle(vector<vector<int>>& board) {
        string target = "123450";
        string start = "";
        for (auto& row : board) {
            for (int num : row) start += to_string(num);
        }

        vector<vector<int>> moves = {{1, 3}, {0, 2, 4}, {1, 5}, {0, 4}, {1, 3, 5}, {2, 4}};
        queue<pair<string, int>> q;
        unordered_set<string> visited;
        
        q.push({start, 0});
        visited.insert(start);

        while (!q.empty()) {
            pair<string, int> front = q.front();
            string cur = front.first;
            int steps = front.second;
            q.pop();

            if (cur == target) return steps;

            int zeroIdx = cur.find('0');
            for (int nextIdx : moves[zeroIdx]) {
                string nextState = cur;
                swap(nextState[zeroIdx], nextState[nextIdx]);

                if (!visited.count(nextState)) {
                    q.push({nextState, steps + 1});
                    visited.insert(nextState);
                }
            }
        }
        return -1;
    }
};

int main() {
    vector<vector<int>> board = {{1, 2, 3}, {4, 0, 5}};
    Solution solution;
    cout << "Minimum moves: " << solution.slidingPuzzle(board) << endl;
    return 0;
}
