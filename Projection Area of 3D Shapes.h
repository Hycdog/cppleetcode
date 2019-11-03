//
// Created by hu on 19-1-14.
//
/**
 * https://leetcode.com/problems/projection-area-of-3d-shapes/submissions/
 * Is it Brutal Force?
 * But, it's quick enough.
 */
#ifndef CPPLEETCODE_PROJECTION_AREA_OF_3D_SHAPES_H
#define CPPLEETCODE_PROJECTION_AREA_OF_3D_SHAPES_H
static int desyncio = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int result=0;
        int* coltallest = new int[grid[0].size()]{0};
        for(int row=0;row<grid.size();row++){
            int rowtallest = grid[row][0];
            for(int col=0;col<grid[0].size();col++){
                rowtallest=max(rowtallest,grid[row][col]);
                coltallest[col]=max(coltallest[col],grid[row][col]);
                if(grid[row][col])result++;
            }
            result+=rowtallest;
        }
        for(int i=0;i<grid[0].size();i++){
            result+=coltallest[i];
        }
        return result;
    }
};
#endif //CPPLEETCODE_PROJECTION_AREA_OF_3D_SHAPES_H
