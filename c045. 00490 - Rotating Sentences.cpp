#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    vector<vector<char>>rs;
    vector<int>c;
    int l = 0;
    while (getline(cin, s)) {
        c.push_back(s.size());
        rs.push_back(vector<char>(s.begin(), s.end()));
        l++;
    }
    int maxc = *max_element(c.begin(), c.end());
    for (int i = 0; i < maxc; i++) {
        string row;
        for (int j = l - 1; j >= 0; j--) {
            if (c[j] >= i + 1) row.push_back(rs[j][i]);
            else row.push_back(' ');
        }
        cout << row << "\n";
    }
    return 0;
}

