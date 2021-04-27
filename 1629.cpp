class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int max = releaseTimes[0];
        char res=keysPressed[0];
        for(int i=1;i<keysPressed.size();i++){
            if(releaseTimes[i]-releaseTimes[i-1] > max){
                max = releaseTimes[i]-releaseTimes[i-1];
                res = keysPressed[i];
            }
            else if(releaseTimes[i]-releaseTimes[i-1] == max){
                if(keysPressed[i] > res) res = keysPressed[i];
            }
        }
        return res;
    }
};