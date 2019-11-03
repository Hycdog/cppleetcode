//
// Created by hu on 1/3/19.
//

#ifndef CPPLEETCODE_FIZZ_BUZZ_H
#define CPPLEETCODE_FIZZ_BUZZ_H
/**
 * 是15的倍数->FizzBuzz
 * 不是15的倍数:
 *      是5的倍数->Buzz
 *      是3的倍数->Fizz
 *      都不是-> n
 */
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    /**
     * Write a program that outputs the string representation of numbers from 1 to n.
        But for multiples of three it should output “Fizz”
        instead of the number and for the multiples of five output “Buzz”.
        For numbers which are multiples of both three and five output “FizzBuzz”.
     * @param n
     * @return
     */
    vector<string> fizzBuzz(int n) {
        vector<string> a;
        for(int i=1;i<n+1;i++)a.push_back(i%15==0?"FizzBuzz":(i%5==0?"Buzz":(i%3==0?"Fizz":to_string(i))));
        return a;
    }
};
#endif //CPPLEETCODE_FIZZ_BUZZ_H
