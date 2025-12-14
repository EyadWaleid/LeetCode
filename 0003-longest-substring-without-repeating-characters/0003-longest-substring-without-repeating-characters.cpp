#include <algorithm>
class Solution {
public:
  //lengthOfLongestSubstring
int lengthOfLongestSubstring(string s) {
    string filter = "";
    int start = 0;
    int  count = 0;
    int maxCount = 0;
    for (int i = 0; i < s.length(); i++) {
        if (i == 0) {
            count++;
            filter += s[i];

            maxCount = max(maxCount, count);
        }
        else {
            size_t pos = filter.find(s[i]);
            
            if (pos!= string::npos) {
                int index = filter.find(s[i]);
                filter += s[i];
                start = index + 1;

                filter.erase(0, filter.find(s[i])+1);
                if ((index + 1) - start == 0) {
                    count = filter.length();
                }
                else {
                    count = (index + 1) - start;
                }
            }
            else {
                count++;
                filter += s[i];
                maxCount = max(maxCount, count);
               }}}
   return maxCount;
}};