#include<iostream>
#include <algorithm>
#include<string.h>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<string>> partition(string s) {
	// Time complexity: O(N!) N is the size of s
	// Space complexity: O(N!)
	std::vector<std::vector<std::string>> result;
	std::vector<std::string> partition_str;
	backtrack(s, result, partition_str);
	return result;
    }

    void backtrack(const std::string& input, std::vector<std::vector<std::string>>& result, std::vector<std::string>&partition){
	if(input.empty()){
	    result.push_back(partition);
	}

	for(int i = 1; i <= input.size(); i++){
	    std::string substr = input.substr(0, i);
	    if(!isPalindrome(substr)){
		continue;
	    }

	    partition.push_back(substr);
	    backtrack(input.substr(i), result, partition);
	    partition.pop_back();
	}
    }

    bool isPalindrome(const std::string& input){
	int size = input.size() ;
	int med = size/2;
	for(int i = 0 ; i < med; i++){
	    if(input[i] != input[size - 1 - i]){
		return false;
	    }
	}
	return true;
    }

};