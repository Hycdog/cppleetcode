//
// Created by Powerhouse on 2020/11/24.
//

#ifndef CPPLEETCODE_SPIRALORDER_H
#define CPPLEETCODE_SPIRALORDER_H

#endif //CPPLEETCODE_SPIRALORDER_H
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if(matrix.empty()) return result;
        int bot = matrix.size()-1;
        int right = matrix[0].size()-1;
        int left=0;
        int top=0;
        while(1){
            for(int i=left;i<=right;i++) result.emplace_back(matrix[top][i]);
            if (++top > bot) break;
            for(int i=top;i<=bot;i++) result.emplace_back(matrix[i][right]);
            if (--right < left)break;
            for(int i=right;i>=left;i--) result.emplace_back(matrix[bot][i]);
            if (--bot < top) break;
            for(int i=bot;i>=top;i--) result.emplace_back(matrix[i][left]);
            if (++left > right) break;
        }
        return result;
    }
};