// Q: Given an array of workloads (e.g., [10, 20, 30, 40]) and a number of students (m), the goal is to divide the workloads among the students such that:
// 1. Each student gets a contiguous section of the array.
// 2. The maximum workload assigned to any student is minimized.

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isvalid(vector<int> &books, int m, int maxload){
    int currload = 0, students = 1;
    for(auto pages:books){
        if(currload + pages > maxload){
            students ++ ;
            currload = pages;
            if(students > m) return false;
        }
        else currload += pages;
    }

    return true;
}

int MinimizeMaxWorkload(vector<int> &books, int m){
    int low = *max_element(books.begin(), books.end());
    int high = accumulate(books.begin(), books.end(), 0);
    int ans = high;

    while(low <= high ){
        int mid =low +  (high - low ) / 2;
        if(isvalid(books, m, mid)){
            high = mid - 1;
            ans = mid;
        }
        else low = mid + 1;
    }

    return ans;
}

int main()
{
    vector<int> books = {10, 20, 30, 40};
    int m = 3;

    cout << "Minimum maximum workload: " <<MinimizeMaxWorkload(books, m) << endl;



return 0;
}