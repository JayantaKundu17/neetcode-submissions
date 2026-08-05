class Solution {
public:
    vector<int> mern;
    int minCostClimbingStairs(vector<int>& cost) {
        mern.resize(cost.size(),-1);
        return min(dfs(cost,0),dfs(cost,1));
    }

    int dfs(vector<int>& cost,int i){
        if(i>=cost.size()) return 0;

        if(mern[i]!=-1) return mern[i]; 

        mern[i]= cost[i] + min(dfs(cost,i+1),dfs(cost,i+2));
        return mern[i];
    }
};
