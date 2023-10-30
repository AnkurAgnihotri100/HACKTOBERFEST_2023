#include <iostream>
#include <vector>

using namespace std;

void sortColors(vector<int>& nums) {
    int low = 0;    // Index to keep track of 0s
    int high = nums.size() - 1;  // Index to keep track of 2s
    int i = 0;  // Iterator

    while (i <= high) {
        if (nums[i] == 0) {
            swap(nums[i], nums[low]);
            i++;
            low++;
        } else if (nums[i] == 1) {
            i++;
        } else {
            swap(nums[i], nums[high]);
            high--;
        }
    }
}

int main() {
    vector<int> nums = {2, 0, 1, 1, 0, 2, 1, 2, 0};
    
    sortColors(nums);

    cout << "Sorted Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
