class Solution {
    
    bool include(int num , vector<int>& nums , int startIndex ){
        int write = startIndex ; 
        bool swaped = false; 
      for(int index = startIndex ; index < nums.size() ; index ++  ){
        if(nums[index] != num ){
            swap(nums[write] , nums[index]);
            write ++ ;
        }
        else{
            swaped = true ;
        }
      } 
        return swaped ;
    }
public:
    int removeDuplicates(vector<int>& nums) {
        int firstSwapValue ; 
        int numberOfSwap = 0 ;
        int newVectorSize = 0 ;
        bool firstSwappedAppeard = false;  
        for(int index = 0 ; index < nums.size() ; index ++ ){
         

            if(include(nums[index] , nums , index+1)){
                numberOfSwap++ ;
                newVectorSize =  nums.size() - numberOfSwap ; 
                firstSwappedAppeard = true ;
            } 
            
        }
          if(newVectorSize == 0){
            return nums.size() ;
        }
        else{
            return newVectorSize ;
        }
        }  
      

    
};