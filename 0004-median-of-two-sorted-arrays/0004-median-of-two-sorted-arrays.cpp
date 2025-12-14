class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> mergedList=merge(nums1,nums2);

        if(mergedList.size()%2==0){
                  int firstIndex=(mergedList.size()-1)/2;
            int secondIndex=firstIndex+1;
            double median= static_cast<double>(mergedList[firstIndex]+mergedList[secondIndex])/2;
            return median; 
    

        }
        else{
      
                int firstIndex=(mergedList.size()-1)/2;
 
            double median= mergedList[firstIndex]; 
            return median;

        }
                    
    }
vector<int> merge(vector<int> firstList,vector<int> secondList){
    vector<int> mregList;
    int left=0;
    int right=0;
    while(left<firstList.size() &&  right<secondList.size()){
        if(firstList[left]<=secondList[right]) {
            mregList.push_back(firstList[left]);
            left++;
        }
        else{
          mregList.push_back(secondList[right]);
            right++;
        }
    }
    while(left<firstList.size()){
           mregList.push_back(firstList[left]);
            left++;
    }
       while(right<secondList.size()){
           mregList.push_back(secondList[right]);
            right++;
    }
    return mregList;

}
};