class Solution {
public:

    int merge(vector<int>& nums, int low, int mid, int high) {
        int count = 0;
        int j = mid + 1;
        for (int i = low; i <= mid; i++) {
            while (j <= high && (long long)nums[i] > 2LL * nums[j]) {
                j++;
            }
            count += (j - (mid + 1));
        }

        vector<int> temp;
        int left = low;
        j = mid + 1;
        while (left <= mid && j <= high) {
            if (nums[left] <= nums[j]) {
                temp.push_back(nums[left]);
                left++;
            }
            else {
                temp.push_back(nums[j]);
                j++;
            }
        }

        while (left <= mid) {
            temp.push_back(nums[left]);
            left++;
        }

        while (j <= high) {
            temp.push_back(nums[j]);
            j++;
        }

        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }

        return count;
    }

    int mergeSort(vector<int>& nums, int low, int high) {
        if (low >= high)
            return 0;

        int mid = low + (high - low) / 2;

        int count = 0;

        count += mergeSort(nums, low, mid);
        count += mergeSort(nums, mid + 1, high);

        count += merge(nums, low, mid, high);

        return count;
    }

    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }
};