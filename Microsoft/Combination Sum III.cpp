class Solution {
    void solver(int k , int n , vector<vector<int>> & result  , vector<int> temp ,  int s ){
        if(n == 0 && k == 0){
            result.push_back(temp);
            return;
        }
        if(n == 0) return;
        if(k == 0) return;

        for(int i = s ; i <= 9 ; i++){
            temp.push_back(i);
            solver(k-1, n-i , result , temp , i+1);
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> temp;

        solver(k , n , result , temp , 1);


        return result;
    }
};