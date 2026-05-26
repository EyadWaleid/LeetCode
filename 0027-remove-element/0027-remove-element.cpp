class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = 0 ;
        int endpoint = 0 ;
    if(nums.empty()){
        return 0 ;
    }
    else{
            if(nums[nums.size()-1] == val){
            for(int index = nums.size()-1; index >= 0 ; index --  ){
                if(nums[index] == val){
                    endpoint = index-1  ;
                }
                else {
                    break;
                }
            }

        }
        else{
            endpoint = nums.size()-1;
        }
 
                cout<<endpoint;

        for(int index = 0 ; index <  nums.size() ; index++ ){
            
                if( index > endpoint){
                    break;
                }
            
            if(nums[index]== val){
                if(nums[endpoint]== val){
                    for(int subIndex = endpoint ; subIndex >= 0 ; subIndex-- ){
                    if(nums[subIndex] == val){
                         endpoint = subIndex-1  ;
                       }
                else {
                    break;
                }
                        
                    }
                }
                   if( index > endpoint){
                    break;
                }
                int switcher = nums[index];
                nums[index] = nums[endpoint];
                nums[endpoint] = switcher;
               endpoint= endpoint-1  ;
            }
        }
              cout<<endpoint;
        return endpoint+1 ;
    }
  
    }
};