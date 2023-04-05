#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int min_num_pages(vector<vector<int>>& pages, int n, int m) {
    vector<pair<int, int>> squares(n);
    for (int i = 0; i < n; i++) {
        squares[i] = {i, count(pages[i].begin(), pages[i].end(), 1)};
    }
    sort(squares.begin(), squares.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
    });
    int num_pages = 0;
    while (!squares.empty()) {
        num_pages++;
        vector<int> new_page(m, 0);
        for (int i = 0; i < squares.size(); i++) {
            auto& [idx, num_squares] = squares[i];
            for (int j = 0; j < m; j++) {
                if (pages[idx][j] == 1 && new_page[j] == 0) {
                    new_page[j] = 1;
                    pages[idx][j] = 0;
                    num_squares--;
                    if (num_squares == 0) {
                        squares.erase(squares.begin() + i);
                        i--;
                    }
                    if (num_squares == 0 || count(new_page.begin(), new_page.end(), 1) == m) {
                        break;
                    }
                }
            }
            if (count(new_page.begin(), new_page.end(), 1) == m) {
                break;
            }
        }
    }
    return num_pages;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> pages(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> pages[i][j];
        }
    }
    cout << min_num_pages(pages, n, m) << endl;
    return 0;
}
