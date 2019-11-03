//
// Created by hu on 19-1-16.
//

/**
 * https://leetcode.com/problems/island-perimeter/submissions/
 * 第一种是我做的，数每个land块附近的水的格数
 * 第二种是别人做的，4×land-land与land接壤的数目*2
 * 貌似第二种快一点？循环里少判断两次
 *
 */
#ifndef CPPLEETCODE_ISLAND_PERIMETER_H
#define CPPLEETCODE_ISLAND_PERIMETER_H
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0;
        for(int row=0;row<grid.size();row++){
            for(int col=0;col<grid[0].size();col++){
                if(grid[row][col]==1){
                    if(row == 0 || grid[row-1][col] == 0) perimeter++;
                    if(col   == 0 || grid[row][col-1] == 0) perimeter++;
                    if(row == grid.size()-1    || grid[row+1][col] == 0) perimeter++;
                    if(col == grid[0].size()-1 || grid[row][col+1] == 0) perimeter++;
                }
            }
        }
        return perimeter;
    }
};

int islandPerimeter(vector<vector<int>>& grid) {
    int count=0, repeat=0;
    for(int i=0;i<grid.size();i++)
    {
        for(int j=0; j<grid[i].size();j++)
        {
            if(grid[i][j]==1)
            {
                count ++;
                if(i!=0 && grid[i-1][j] == 1) repeat++;
                if(j!=0 && grid[i][j-1] == 1) repeat++;
            }
        }
    }
    return 4*count-repeat*2;
}
#endif //CPPLEETCODE_ISLAND_PERIMETER_H
