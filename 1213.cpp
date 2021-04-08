class Solution {
public:
    vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
        vector<int> i1(arr1.size());
        auto it = set_intersection(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), i1.begin());
        i1.resize(distance(i1.begin(), it));
        
        vector<int> i2(i1.size());
        auto it2 = set_intersection(arr3.begin(), arr3.end(), i1.begin(), i1.end(), i2.begin());
        i2.resize(distance(i2.begin(), it2));
        return i2;
    }
};