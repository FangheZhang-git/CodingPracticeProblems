/*
LeetCode Problem: 14. Longest Common Prefix
Difficulty: Easy

Problem:
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:
Input: ["flower","flow","flight"]
Output: "fl"

Example 2:
Input: ["dog","racecar","car"]
Output: ""

Approach:
Start with the first string as the prefix.
Compare it with each string and shrink the prefix when mismatch occurs.

Time Complexity: O(S)
S = total number of characters in all strings
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string prefix = strs[0];

        for(int i = 0; i < strs.size(); i++){

            int j = 0;

            while(j < strs[i].size() &&
                  j < prefix.size() &&
                  prefix[j] == strs[i][j]){
                j++;
            }

            prefix = prefix.substr(0, j);

            if(prefix == "") return "";
        }

        return prefix;
    }
};
