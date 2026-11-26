class Solution {
public:
    bool canAliceWin(int n) {
        if(n < 10) return false;
        else 
        {
            int x = 10;
            while(n > 0)
            {
                if(x % 2 == 0)
                {
                    n -= x;
                    if(n == 0) return true;
                    if(n < 0) return false;
                }
                else
                {
                    n -= x;
                    if(n == 0) return false;
                    if(n < 0) return true;
                    
                }
                x--;
            }
        }
        return true;
    }
};