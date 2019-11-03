//
// Created by hu on 19-1-15.
//

/**
 * https://leetcode.com/problems/reverse-words-in-a-string-iii/submissions/
 * 参考评论区一位大神的答案，这个答案不仅时间是o(n)空间是o(word)也即是最长的单词的长度
 * 有一个指针，指向string的开头
 * 然后用istringstream每次给word输入一个单词
 * 然后用copy，把word copy到iter这个位置
 * 此时iter的位置也变了，变到word的末尾
 * 后面的++iter是为了保证空格？
 *
 */
#ifndef CPPLEETCODE_REVERSE_WORDS_IN_A_STRING_III_H
#define CPPLEETCODE_REVERSE_WORDS_IN_A_STRING_III_H
class Solution {
public:
    string reverseWords(string s) {
        istringstream iss{s};
        auto iter = s.begin();
        for (string word; iss >> word;) {
            iter = copy(word.rbegin(), word.rend(), iter);
            if (iter != s.end())
                ++iter;
        }
        return s;
    }
};
#endif //CPPLEETCODE_REVERSE_WORDS_IN_A_STRING_III_H
