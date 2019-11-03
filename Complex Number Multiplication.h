//
// Created by hu on 19-1-15.
//

/**
 * https://leetcode.com/problems/complex-number-multiplication/submissions/
 * 这道题的解法居然用到了我们差点忘掉的——stringstream!
 * 确实，从一个string里面得到我们想要的东西，用这个最快。
 * 然后答案再回到stringstream，调用.str()方法回到string
 * 非常快捷。
 *
 */
#ifndef CPPLEETCODE_COMPLEX_NUMBER_MULTIPLICATION_H
#define CPPLEETCODE_COMPLEX_NUMBER_MULTIPLICATION_H
class Solution {
public:
    string complexNumberMultiply(string a, string b) {
        int ra, ia, rb, ib;
        char buff;
        stringstream aa(a), bb(b), ans;
        aa >> ra >> buff >> ia >> buff;
        bb >> rb >> buff >> ib >> buff;
        ans << ra*rb - ia*ib << "+" << ra*ib + rb*ia << "i";
        return ans.str();
    }
};
#endif //CPPLEETCODE_COMPLEX_NUMBER_MULTIPLICATION_H
