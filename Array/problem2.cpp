#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int maximumGap(vector<int>& nums) {
    if (nums.size() < 2) return 0;

    int n = nums.size();
    int minVal = *min_element(nums.begin(), nums.end());
    int maxVal = *max_element(nums.begin(), nums.end());

    if (minVal == maxVal) return 0; // যদি সব সংখ্যা সমান হয়

    int bucketSize = max(1, (maxVal - minVal) / (n - 1));
    int bucketCount = (maxVal - minVal) / bucketSize + 1;

    vector<int> bucketMin(bucketCount, INT_MAX);
    vector<int> bucketMax(bucketCount, INT_MIN);
    vector<bool> bucketUsed(bucketCount, false);

    for (int num : nums) {
        int idx = (num - minVal) / bucketSize;
        bucketMin[idx] = min(bucketMin[idx], num);
        bucketMax[idx] = max(bucketMax[idx], num);
        bucketUsed[idx] = true;
    }

    int prevMax = minVal, maxGap = 0;
    for (int i = 0; i < bucketCount; i++) {
        if (!bucketUsed[i]) continue;
        maxGap = max(maxGap, bucketMin[i] - prevMax);
        prevMax = bucketMax[i];
    }

    return maxGap;
}

int main() {
    vector<int> nums = {3, 6, 9, 1};
    cout << maximumGap(nums) << endl; // Output: 3

    return 0;
}
