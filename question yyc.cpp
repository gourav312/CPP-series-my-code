#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int>& a, int k) {
    unordered_map<int, int> freq;
    priority_queue<int, vector<int>, greater<int>> pq;
    int cost = 0;

    // Count the frequency of each integer in the array
    for (int i = 0; i < n; i++) {
        int x = a[i];
        freq[x]++;
    }

    // Add the frequencies to a priority queue
    for (auto p : freq) {
        pq.push(p.second);
    }

    // While there are more than K distinct integers in the array
    while (pq.size() > k) {
        int f = pq.top(); // Remove the smallest frequency
        pq.pop();
        cost += f; // Add the cost of changing the frequency to 1
    }

    return cost;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n;
        vector<int> a(n);

        // Read the array
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cin >> k;
        int cost = solve(n, a, k);

        cout << cost << endl;
    }

    return 0;
}
