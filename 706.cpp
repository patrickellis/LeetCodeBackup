class MyHashMap {
private:
    int prime;
    vector<list<pair<int,int>>> table;
    int hash(int key){
        return key%prime;
    }
    
public:
    /** Initialize your data structure here. */
    MyHashMap() : prime(13007){
        table.resize(13007);
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        int h = hash(key);
        auto& list = table[h];
        for(auto& elem : list){
            if(elem.first==key){
                elem.second=value;
                return;
            }
        }
        list.push_back({key,value});
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        int h= hash(key);
        auto& list = table[h];
        for(auto& elem : list){
            if(elem.first==key) return elem.second;            
        } return -1;
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        int h = hash(key);
        auto& list = table[h];
        for(auto& elem : list){
            if(elem.first==key){            
                list.remove(elem);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */