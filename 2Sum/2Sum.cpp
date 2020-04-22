#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> tmp;
        for (int i = 0; i != nums.size(); i++)
        {
            for (auto j = i+1; j != nums.size(); j++)
            {
                if ((nums[i] + nums[j]) == target)
                {
                    tmp.push_back(i);
                    tmp.push_back(j);
                }
            }
        }
        return tmp;
    }
};


void main() {
    Solution sln;
    vector<int> v = {3,2,4};
    for (auto i : sln.twoSum(v, 6)) {
        cout << i;
    }
}