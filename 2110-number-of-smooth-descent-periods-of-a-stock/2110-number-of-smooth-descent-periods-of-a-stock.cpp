#include <algorithm>
class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long count=0 ;
        int last=0;
        int first=-1;
        for(int i=0;i<prices.size();i++){
            if(i+1!=prices.size()){
            if(prices[i]==(prices[i+1]+1)){
                if(first<0) first=i;
                last=i+1;
                count+=(last-first);

                        }
            else{
                first=-1;
                last=0;

            }

        }}
        return count+prices.size();
        
    }
};  