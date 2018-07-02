#include <iostream>
#include "Solution.h"
#include <vector>
int main() {
    std::cout << "Hello, World!" << std::endl;
    std::vector<int> nums={-2,0,2,0,2};
    auto *s = new Solution();
    std::vector<std::vector<int>> threeSum = s->threeSum(nums);
    for (std::vector<int> v : threeSum) {
        for(int i : v)
        {
            std::cout<<i<<" ";
        }
        std::cout<<""<<std::endl;
    }

    std::string str = "pwwkew";
    std::cout<<"lengthOfLongestSubstring is: "<<s->lengthOfLongestSubstring(str)<<std::endl;

    std::cout<<"end"<<std::endl;
    return 0;
}