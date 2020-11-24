#include <iostream>
#include <bitset>
#include <string>
#include <queue>
#include <stack>
#include <vector>
#include <deque>
#include <climits>
#include <algorithm>
#include <map>
using namespace std;

void paintBoard(int row, int col, int tokens, int row_cnt, int col_cnt, map<int,int>& result){
    if(tokens < row && tokens < col && tokens > 0 ) return;
    if(tokens == 0) {
//        cout<<"("<<row_cnt<<","<<col_cnt<<")"<<endl;
        result[row_cnt] = col_cnt;
        return;
    }
    if(tokens >= row){
        paintBoard(row, col-1, tokens - row, row_cnt+1, col_cnt, result);
    }
    if(tokens >= col){
        paintBoard(row-1, col, tokens - col, row_cnt, col_cnt+1, result);
    }
}
long long C(int n, int m)
{
    if (m < n - m) m = n - m;
    long long ans = 1;
    for (int i = m + 1; i <= n; i++) ans *= i;
    for (int i = 1; i <= n - m; i++) ans /= i;
//    cout<<"C"<<n<<"/"<<m<<"="<<ans<<endl;
    return ans;
}

int paintingPlan(int n, int k) {
    if( k == n*n || k == 0) return 1;
    if( k< n || k> n*n) return 0;
    int row_cnt=0, col_cnt=0;
    map<int,int> resultmap;
    paintBoard(n, n, k, row_cnt, col_cnt, resultmap);
    int answer = 0;
    for(auto i:resultmap){
        answer += C(n, i.first)*C(n, i.second);
    }
    return answer;
}

// board's row and col size


int main() {
    cout<<paintingPlan(3,10);
    return 0;
}