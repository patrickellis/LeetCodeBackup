class ParkingSystem {
private:
    vector<int> counts;
public:
    ParkingSystem(int big, int medium, int small) {
        counts.insert(counts.begin(),{big,medium,small});
    }
    
    bool addCar(int carType) {
        return counts[carType-1]-->0;        
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */