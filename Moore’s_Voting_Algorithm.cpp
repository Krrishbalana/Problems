#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int> nums) {
    int count = 0, candidate = 0;

    // Phase 1: Find a candidate
    for(int num : nums) {
        if(count == 0) {
            candidate = num;
        }
        count += (num == candidate) ? 1 : -1;
    }

    // Phase 2: Verify candidate
    count = 0;
    for(int num : nums) {
        if(num == candidate) {
            count++;
        }
    }

    if(count > nums.size() / 2) {
        return candidate;
    }

    return -1; // No majority element
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << majorityElement(nums) << endl;
}
