#include <iostream>
#include <bitset>
#include <string>
#include <queue>
#include <stack>
#include <vector>
#include <deque>
#include <climits>
#include <algorithm>

using namespace std;

bool isAlienSorted(vector<string>& words, string order) {
    int mapping[26];
    for (int i = 0; i < 26; i++)
        mapping[order[i] - 'a'] = i;
    for (string &w : words)
        for (char &c : w)
            c = mapping[c - 'a'];
    return is_sorted(words.begin(), words.end());
}

int main() {
    vector<string> words = {"hello","leetcode"};

    string order = "hlabcdefgijkmnopqrstuvwxyz";
    cout<<isAlienSorted(words,order);
    for(auto i:words){
        for(auto j:i)
        cout<<int(j)<<" ";
    }
    return 0;
}