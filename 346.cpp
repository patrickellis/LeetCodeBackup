class MovingAverage {
private:
    int sum=0,size;
    queue<int> q;
    
public:
    /** Initialize your data structure here. */
    MovingAverage(int size) : size(size) {
        
    }
    
    double next(int val) {
        sum+=val;
        q.push(val);
        if(q.size()>size){
            sum-=q.front(); q.pop();
        }
        return 1.0* sum / q.size();
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */