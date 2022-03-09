class RandomizedSet {
    vector<int> ar;
    unordered_map<int, int> myMap;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(myMap.find(val) != myMap.end())
            return false;
        else{
            ar.push_back(val);
            myMap[val] = ar.size()-1;
            return true;
        }
    }
    
    bool remove(int val) {
        if(myMap.find(val) == myMap.end()){
            return false;
        }
        auto it = myMap.find(val);
        ar[it->second] = ar.back();
        ar.pop_back();
        myMap[ar[it->second]] = it->second;
        myMap.erase(val);
        return true;
    }
    
    int getRandom() {
        return ar[rand()%ar.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */