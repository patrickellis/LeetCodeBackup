class MyHashSet {
private:
    int prime;
    vector<list<int>> table;
    int hash(int key){
        return key % prime;
    }
    list<int>::iterator search(int key){
        int h = hash(key);
        return find(table[h].begin(), table[h].end(), key);
    }
    
public:

    /** Initialize your data structure here. */
    MyHashSet() : prime(10007), table(prime){}
    
    void add(int key) {
        int h = hash(key);
        if(!contains(key)){
            table[h].push_back(key);   
        }
    }
    
    void remove(int key) {
        int h = hash(key);
        if(search(key) != table[h].end()) table[h].erase(search(key));
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        int h = hash(key);
        return(search(key)!=table[h].end());
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */