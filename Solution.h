//
// Created by guozijun on 2018/7/2.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include<vector>

struct TreeNode {
         int val;
         TreeNode *left;
         TreeNode *right;
         TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool less_function(std::pair<int,int>a, std::pair<int,int>b);

class Solution {

public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums);
    std::vector<std::vector<int>> twoSum(std::vector<int> &nums, int target);
    int lengthOfLongestSubstring(std::string s);
    void setZeroes(std::vector<std::vector<int>>& matrix);
    std::string serialize(TreeNode* root);
    TreeNode* deserialize(std::string data);
    bool isUgly(int num);
    int findMinArrowShots(std::vector<std::pair<int, int>>& points);
};

#endif //LEETCODE_SOLUTION_H
