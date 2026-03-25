class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        long long int s=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                s+=grid[i][j];
            }
        }
        vector<int>row(m),col(n);
        for(int i=0;i<m;i++){
           long long  int sumr = 0;
            for(int j=0;j<n;j++){
                sumr+=grid[i][j];
            }
            row.push_back(sumr);
        }
        for(int i=0;i<n;i++){
            long long int sumc = 0;
            for(int j=0;j<m;j++){
                sumc+=grid[j][i];
            }
            col.push_back(sumc);
        }
        long long int s1=0;
        for(int i=0;i<row.size();i++){
            if(s1 == s-s1) return true;
            s1+=row[i];
        }
        long long int s2 = 0;
        for(int i=0;i<col.size();i++){
            if(s2 == s-s2) return true;
            s2+=col[i];
        }
        return false;
    }
};