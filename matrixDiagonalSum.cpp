class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int sum=0;
        
        if (mat.size()%2 == 0){
            for (int i =0; i<mat.size();i++){
                sum += mat.at(i).at(i) + mat.at(i).at((mat.size()-i)-1);
            }
        }else{
            int mid = (mat.size()/2);
            for (int i =0; i<mat.size();i++){
                if(i == mid){
                    sum += mat.at(mid).at(mid);
                }else {
                    sum += mat.at(i).at(i) + mat.at(i).at((mat.size()-i)-1);
                }
            }
        }
        return sum;
    }
};
