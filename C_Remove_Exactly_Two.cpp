#include <bits/stdc++.h>
using namespace std;

// Function to process a single test case
int processTestCase() {
    int numNodes;
    cin >> numNodes;

    // Initialize degree vector and edge list
    vector<int> degree(numNodes, 0);
    vector<pair<int, int>> edgeList;

    // Read all edges and update degrees
    for (int i = 0; i < numNodes - 1; ++i) {
        int nodeU, nodeV;
        cin >> nodeU >> nodeV;
        --nodeU; // Convert to 0-based indexing
        --nodeV;

        edgeList.emplace_back(nodeU, nodeV);
        degree[nodeU]++;
        degree[nodeV]++;
    }

    // Initialize answer
    int maxAnswer = 0;

    // Calculate initial maximum based on edge degrees
    for (const auto& edge : edgeList) {
        int u = edge.first;
        int v = edge.second;
        maxAnswer = max(maxAnswer, degree[u] + degree[v] - 2);
    }

    // Find the node with the maximum degree
    int maxDegreeNode = distance(degree.begin(), max_element(degree.begin(), degree.end()));

    // Mark nodes that are neither the maxDegreeNode nor directly connected to it
    vector<bool> isEligible(numNodes, true);
    isEligible[maxDegreeNode] = false;

    for (const auto& edge : edgeList) {
        if (edge.first == maxDegreeNode) {
            isEligible[edge.second] = false;
        }
        if (edge.second == maxDegreeNode) {
            isEligible[edge.first] = false;
        }
    }

    // Update maxAnswer based on eligible nodes
    for (int i = 0; i < numNodes; ++i) {
        if (isEligible[i]) {
            maxAnswer = max(maxAnswer, degree[maxDegreeNode] + degree[i] - 1);
        }
    }

    // If there are three or more nodes with the maximum degree, consider this case
    int maxDegreeCount = count(degree.begin(), degree.end(), degree[maxDegreeNode]);
    if (maxDegreeCount >= 3) {
        maxAnswer = max(maxAnswer, 2 * degree[maxDegreeNode] - 1);
    }

    return maxAnswer;
}

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        int result = processTestCase();
        cout << result << '\n';
    }

    return 0;
}
