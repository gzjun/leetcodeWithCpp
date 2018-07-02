//
// Created by guozijun on 2018/7/2.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include<vector>

class Solution {

public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums);
    std::vector<std::vector<int>> twoSum(std::vector<int> &nums, int target);
    std::vector<std::vector<int>> twoSum(std::vector<int> &nums,int target,int start,int end);
};



#endif //LEETCODE_SOLUTION_H
