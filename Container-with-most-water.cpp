#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int lower = 0;
        int upper = height.size()-1;
        int highest = 0;
        while(lower<upper){
            highest = max(highest,min(height[lower],height[upper])*(upper-lower));
            if (height[lower]<height[upper]){
                lower+=1;
            }else{
                upper-=1;
            }
        }
        return highest;
    }
};