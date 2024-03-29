/*
Given an array of string words, return all strings in words that is a substring of another word. You can return the answer in any order.
A substring is a contiguous sequence of characters within a string

Example 1:

Input: words = ["mass","as","hero","superhero"]
Output: ["as","hero"]
Explanation: "as" is substring of "mass" and "hero" is substring of "superhero".
["hero","as"] is also a valid answer.

Example 2:

Input: words = ["leetcode","et","code"]
Output: ["et","code"]
Explanation: "et", "code" are substring of "leetcode".

Example 3:

Input: words = ["blue","green","bu"]
Output: []
Explanation: No string of words is substring of another string.
*/


class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> result;

        for (size_t i = 0; i < words.size(); i++) {
            string temp = words[i];

            for (size_t j = 0; j < words.size(); j++) {
                if (i != j && words[j].find(temp) != string::npos) {
                    result.push_back(temp);
                    break;
                }
            }
        }

        return result;
    }
};
