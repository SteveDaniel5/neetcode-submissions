class TimeMap {
public:
      unordered_map<string, vector<pair<string, int>>> mp;
    TimeMap() {
         
        
    }
    
    void set(string key, string value, int timestamp) {
        
        this->mp[key].push_back({value,timestamp});
    }
    
    string get(string key, int timestamp) {
        if(mp.find(key) == mp.end()) {
            return "";
        }
        auto it = mp.find(key);
        int end = it->second.size()-1;
        int start = 0;
        string ans ="";
        while(start<=end){
            int mid = start+(end-start)/2;
            if(it->second[mid].second<=timestamp){
                ans=it->second[mid].first;
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return ans;

        
    }
};
