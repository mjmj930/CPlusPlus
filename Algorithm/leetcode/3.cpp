#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// 原函数
int lengthOfLongestSubstring(std::string s) {
    std::vector<int> m(128, 0);
    int ans = 0;
    int i = 0;
    for (int j = 0; j < s.size(); j++) {
        i = std::max(i, m[s[j]]);
        m[s[j]] = j + 1;
        std::cout << "j :" << j <<std::endl;
        std::cout << "m[s[j]] :" << m[s[j]] <<std::endl;
        ans = std::max(ans, j - i + 1);
    }
    return ans;
}

// 测试函数
void testLengthOfLongestSubstring(const std::string& s, int expected) {
    int result = lengthOfLongestSubstring(s);
    if (result == expected) {
        std::cout << "test success: input stirng \"" << s << "\", \n expect reslut: " << expected << ", \n actual resl: " << result << std::endl;
    } else {
        std::cout << "test fail: input stirng \"" << s << "\", \n expect reslut: " << expected << ", \n actual resl: " << result << std::endl;
    }
}

int main() {
    // 正常情况
    testLengthOfLongestSubstring("abcabcbb", 3);
    // testLengthOfLongestSubstring("bbbbb", 1);
    // testLengthOfLongestSubstring("pwwkew", 3);

    // // 边界情况
    // testLengthOfLongestSubstring("", 0);
    // testLengthOfLongestSubstring("a", 1);

    // // 特殊情况
    // testLengthOfLongestSubstring("abcdefg", 7);
    // testLengthOfLongestSubstring("abba", 2);

    return 0;
}