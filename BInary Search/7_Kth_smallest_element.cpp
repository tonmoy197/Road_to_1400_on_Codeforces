// Q: Given an n x n matrix where each row and each column is sorted in ascending order, 
// find the K-th smallest element in the matrix.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
bool CountLessEqualFunction(vector<vector<int>> &matrix, int mid){
    int count = 0;
    for (int i = 0; i < n; i++) {
        count += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
    }
    return count;
}

int kthSmallest(vector<vector<int>> &matrix, int k){
    int n = matrix.size();
    int low = matrix[0][0], high = matrix[n-1][n-1];
    
    // Lambda function to count elements less than or equal to 'mid'
    auto countLessEqual = [&](int mid) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            count += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
        }
        return count;
    };

    while(low < high){
        int mid = low + (high - low ) / 2;
        if(countLessEqual(mid) < k){
            low = mid + 1;
        }
        else high = mid;
    }
    return low;
}

int main()
{
    // Example matrix
    vector<vector<int>> matrix = {
        {1,  5,  9},
        {10, 11, 13},
        {12, 13, 15}
    };

    int k = 4; // Find the 4th smallest element

    // Output the result
    cout << "The " << k << "-th smallest element is: " << kthSmallest(matrix, k) << endl;


return 0;
}