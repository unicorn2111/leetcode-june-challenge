class Solution {
public:
    static bool compare(vector<int>a , vector<int> b)
        {
            if(a[0]-a[1]<b[0]-b[1])
                return true;
            else return false;
        }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int cost=0;
        sort(costs.begin(), costs.end(),compare);
        for(int i=0;i<costs.size();i++)
        {
            if(i<costs.size()/2)
                cost+=costs[i][0];
            else
                cost+=costs[i][1];
        }
        return cost;
    }
};

//another more effecient solution

class Solution {
public:
    
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int cost=0, n= costs.size();
        vector<int> ex;
        for(int i=0;i<n;i++)
            cost+=costs[i][0];
        for(int i=0;i<n;i++)
            ex.push_back(costs[i][1]-costs[i][0]);
        sort(ex.begin(), ex.end());
        for(int i=0;i<n/2;i++)
            cost+=ex[i];
        
        return cost;
    }
};
