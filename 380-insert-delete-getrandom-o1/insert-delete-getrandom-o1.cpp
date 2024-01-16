#include <vector>
#include <unordered_map>
#include <cstdlib>

class RandomizedSet {
public:
    RandomizedSet() {

    }

    bool insert(int val) {
        if (valToIndex.find(val) != valToIndex.end()) {
            return false; // Element already exists
        }

        values.push_back(val);
        valToIndex[val] = values.size() - 1;
        return true;
    }

    bool remove(int val) {
        if (valToIndex.find(val) == valToIndex.end()) {
            return false; // Element does not exist
        }

        int lastElement = values.back();
        int valIndex = valToIndex[val];

        values[valIndex] = lastElement;
        valToIndex[lastElement] = valIndex;

        values.pop_back();
        valToIndex.erase(val);

        return true;
    }

    int getRandom() {
        int randomIndex = rand() % values.size();
        return values[randomIndex];
    }

private:
    std::vector<int> values;
    std::unordered_map<int, int> valToIndex;
};


/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */