//
// Created by guozijun on 2018/7/2.
//

#include<iostream>
#include "Solution.h"
#include<vector>

std::vector<std::vector<int>> Solution::threeSum(std::vector<int>& nums)
{
    std::vector<std::vector<int>> res;
    if(nums.size()<=2)
        return res;
    std::sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-2;i++)
    {
        if(i>0 && nums[i]==nums[i-1])
            continue;
        int low = i+1;
        auto high = int(nums.size()-1);
        while(low<high) {
            if(nums[low]+nums[high]+nums[i]==0) {
                std::vector<int> tup={nums[i],nums[low],nums[high]};
                /*
                tup.push_back(nums[i]);
                tup.push_back(nums[high]);
                tup.push_back(nums[low]);
                 */
                low++;
                high--;
                res.push_back(tup);
                while(low<high && nums[low]==nums[low-1])
                    low++;
                while(low<high && nums[high]==nums[high+1])
                    high--;
            }
            else if(nums[low]+nums[high]+nums[i] >0){
                high--;
            } else{
                low++;
            }
        }
    }
    return res;
}

std::vector<std::vector<int>> Solution::twoSum(std::vector<int>&nums,int target)
{

    std::vector<std::vector<int>> res;
    std::sort(nums.begin(),nums.end());
    for(unsigned long  i=0, j=nums.size()-1; i<j;)
    {
        std::vector<int> twoVector;
        if(nums[i]+nums[j]==target)
        {
            twoVector.push_back(nums[i]);
            twoVector.push_back(nums[j]);
            i++;
            j--;
            res.push_back(twoVector);
            std::cout<<"found one pair"<<std::endl;
        } else if(nums[i]+nums[j]>target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return res;
}

std::vector<std::vector<int>> Solution::twoSum(std::vector<int> &nums,int target,int start,int end)
{
    std::cout<<"start is: "<<start<<" end is: "<<end<<std::endl;
    std::vector<std::vector<int>> res;
    for(int  i=start, j=end; i<j;)
    {
        std::vector<int> twoVector;
        if(nums[i]+nums[j]==target)
        {
            twoVector.push_back(nums[i]);
            twoVector.push_back(nums[j]);
            i++;
            j--;
            res.push_back(twoVector);
            std::cout<<"found one pair"<<std::endl;
        } else if(nums[i]+nums[j]>target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return res;
}