class Solution {
public:

    int v[50];

    int solve(int n){
        if(n == 1) return 1;
        if(n == 0) return 1;
        
        if(v[n] != 0) return v[n];

        v[n] = solve(n - 1) + solve(n - 2);
        return v[n];
    }

    int climbStairs(int n){
        return solve(n);
    }


};
