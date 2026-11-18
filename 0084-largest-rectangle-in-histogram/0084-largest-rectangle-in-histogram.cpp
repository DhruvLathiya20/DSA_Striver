#include<iostream>
using namespace std;

class Solution{
private:
    vector<int> s;
    int maxArea = 0;
public:
    int largestRectangleArea(vector<int> &heights){
        int n = heights.size();
        for(int i = 0; i < n;i++){
            while(!s.empty() && heights[i] < heights[s.back()]){
                int h = heights[s.back()];
                int e = s.back();
                s.pop_back();
                int w = s.empty() ? i : i - s.back() - 1;
                maxArea = max(maxArea, h * w);
            }
            s.push_back(i);
        }
        while (!s.empty()) {
            int h = heights[s.back()];
            s.pop_back();
            int w = s.empty() ? n : n - s.back() - 1;
            maxArea = max(maxArea, h * w);
        }
        return maxArea;
    }
};