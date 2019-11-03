//
// Created by hu on 19-1-20.
//

/**
 * https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/discuss/113232/665772
 * clever! For those still wondering: 0b10100010100010101100 is the bit wise representation of 665772.
Here 2nd,3rd,5th,7th,11th,13th,17th,19th,23rd and 29th bits are 1 and rest are 0s.
What do all these positions have in common? they are prime numbers!
Example:
-Let say a number has 5 bits set, (calculated by using __builtin_popcount(L)).
-To check if 5 is prime shift 0b10100010100010101100 by 5
-This gives you 0b00000101000101000101,
-When you & it with 0b1 you get 1, hence 5 is prime number!
 */
#ifndef CPPLEETCODE_PRIME_NUMBER_OF_SET_BITS_IN_BINARY_REPRESENTATION_H
#define CPPLEETCODE_PRIME_NUMBER_OF_SET_BITS_IN_BINARY_REPRESENTATION_H

/*Ruby:

def count_prime_set_bits(l, r)
(l..r).sum { |i| 665772 >> i.digits(2).sum & 1 }
end
        Python:

def countPrimeSetBits(self, L, R):
return sum(665772 >> bin(i).count('1') & 1 for i in range(L, R+1))
Java stream:

public int countPrimeSetBits(int L, int R) {
    return IntStream.range(L, R+1).map(i -> 665772 >> Integer.bitCount(i) & 1).sum();
}
Java:

public int countPrimeSetBits(int L, int R) {
    int count = 0;
    while (L <= R)
        count += 665772 >> Integer.bitCount(L++) & 1;
    return count;
}
C++:
*/
int countPrimeSetBits(int L, int R) {
    int count = 0;
    while (L <= R)
        count += 665772 >> __builtin_popcount(L++) & 1;
    return count;
}
#endif //CPPLEETCODE_PRIME_NUMBER_OF_SET_BITS_IN_BINARY_REPRESENTATION_H
