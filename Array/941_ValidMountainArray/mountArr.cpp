class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int flagInc = 0, flagDec = 0;
        int maxIdx;
        if(arr.size() < 3) return false;
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] < arr[i+1]) {
                flagInc = 1;
                continue;
            }
            if(arr[i] == arr[i+1]) return false;
            else {
                maxIdx = i;
                break;
            }
        }
        for(int j = maxIdx; j < arr.size()-1; j++) {
            if(arr[j] > arr[j+1]) {
                flagDec = 1;
                continue;
            }
            else {
                return false;
            }
        }
        if(flagInc && flagDec) return true;
        return false;
    }
};
