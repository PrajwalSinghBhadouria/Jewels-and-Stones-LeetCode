class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
     map<char,int> mp;
     for(int i=0; i<stones.size(); i++){
        mp[stones[i]]++;
     }
     int count=0;
     for(int i=0; i<jewels.size(); i++){
        if(mp.find(jewels[i])!=mp.end()){
            count = count + mp[jewels[i]];
        }
     }   
    return count;
    }
};
