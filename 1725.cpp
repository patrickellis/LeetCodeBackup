class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int max=0,count=0;
        for(auto& r:rectangles){
            auto min = *min_element(r.begin(), r.end());
            if(min==max)count++;
            if(min>max){
                max=min;
                count=1;                
            }            
        }
        return count;
    }
};