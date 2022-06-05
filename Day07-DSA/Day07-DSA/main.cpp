//
//  main.cpp
//  Day07-DSA
//
//  Created by Harsh Yadav on 05/06/22.
//

#include <iostream>
#include <vector>

using namespace std;
//Solving problems on LeetCode.

///MARK: 1920. Build Array from Permutation
std::vector<int> buildArray(std::vector<int>& nums) {
    std::vector<int> result;
    for(int i=0;i<nums.size();i++){
        result.push_back(nums[nums[i]]);
    }

    return result;
}

///MARK: 1929. Concatenation of Array
vector<int> getConcatenation(vector<int>& nums) {
    vector<int> result;
    for(int i=0;i<nums.size();i++){
        result.push_back(nums[i]);
    }
    
    for(int i=0;i<nums.size();i++){
        result.push_back(nums[i]);
    }
    
//         vector<int> result(2*nums.size(),0);
//         for(int i=0;i<result.size();i++){
        
//         }
    return result;
}

///MARK: 1480. Running Sum of 1d Array
vector<int> runningSum(vector<int>& nums) {
    vector<int> result(nums.size(),0);
    int sum = 0;
    for(int i=0;i<nums.size();i++){
        //result[i] = nums[0] + nums[1] + .... nums[i]
        sum += nums[i];
        
        result[i] = sum;
    }
    
    return result;
}

///MARK: 2011. Final Value of Variable After Performing Operations
int finalValueAfterOperations(vector<string>& operations) {
    int result = 0;
    for(int i=0;i<operations.size();i++){
        if(operations[i] == "++X" || operations[i] == "X++"){
            result += 1;
        }
        else if(operations[i] == "--X" || operations[i] == "X--"){
            result -= 1;
        }
    }
    return result;
}

///MARK: 1672. Richest Customer Wealth
int maximumWealth(vector<vector<int>>& accounts) {
    // int result=0;
    int max=0;
    for(int i=0;i<accounts.size();i++){
        int temp=0;
        for(int j=0;j<accounts[i].size();j++){
            temp +=accounts[i][j];
        }
        if(temp > max){
            max = temp;
        }
    }
    
    return max;
}

///MARK: 2114. Maximum Number of Words Found in Sentences
int mostWordsFound(vector<string>& sentences) {
    int max = 0;
    for(int i=0;i<sentences.size();i++){
        int count=1;
        for(int j=0;j<sentences[i].length();j++){
            if(sentences[i][j] == ' '){
                count += 1;
            }
        }
        
        if(count > max){
            max = count;
        }
    }
    return max;
}

int main(int argc, const char * argv[]) {

//    vector<int> x = {1,1,1,1,1};
//    std::cout<<runningSum(x)<<std::endl;
//    vector<int> result = runningSum(x);
    
//    for(int i=0;i<x.size();i++){
//        std::cout<<result[i]<<std::endl;
//    }
    
    vector<std::string> y = {"alice and bob love leetcode","i think so too","this is great thanks very much"};
    std::cout<<mostWordsFound(y)<<std::endl;
    return 0;
}
