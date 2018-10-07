#include <iostream>
#include "stl.h"

using namespace std;

class Solutions {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> m;
        vector<int> res;
        for (int i = 0; i < nums.size(); ++i) {
            m[nums[i]] = i;
        }
        for (int j = 0; j < nums.size(); ++j) {
            int t = target - nums[j];
            if (m.count(t) && m[t] != j) {
                res.push_back(j);
                res.push_back(m[t]);
                break;
            }
        }
        return res;
    }
};

int main() {
    int target = 9;
    vector<int> nums = {2, 7, 11, 15};
//    int num[4]={2,7,11,15};
//    for (int j = 0; j < 4; ++j) {
//        nums.push_back(num[j]);
//    }
    Solutions solutions;
    vector<int> res = solutions.twoSum(nums, target);
    for (int i = 0; i < res.size(); ++i) {
        cout << res.at(i)+1 << endl;
    }
    return 0;
}