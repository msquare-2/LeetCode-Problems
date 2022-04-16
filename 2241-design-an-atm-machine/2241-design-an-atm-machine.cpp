class ATM {
private:
    long long notes[5] = {}, value[5] = {20,50,100,200,500};
public:
    ATM() {
        
    }
    
    void deposit(vector<int> banknotesCount) {
        for(int i=0; i<5; i++){
            notes[i] += banknotesCount[i];
        }
    }
    
    vector<int> withdraw(int amount) {
        vector<int> take(5);
        for(int i=4; i>=0; i--){
            take[i] = min(notes[i], amount/value[i]);
            amount -= take[i] * value[i];
        }
        if(amount)
            return {-1};
        for(int i=0; i<5; i++){
            notes[i] -= take[i];
        }
        return take;
    }
};

/**
 * Your ATM object will be instantiated and called as such:
 * ATM* obj = new ATM();
 * obj->deposit(banknotesCount);
 * vector<int> param_2 = obj->withdraw(amount);
 */