class Solution {
public:
    bool judgeCircle(string mv) {
        int ud = 0;
        int lr = 0;
        for(char i : mv)
        {
            if(i == 'U') ud+=1;
            else if(i == 'D') ud-=1;
            else if(i == 'L') lr+=1;
            else if(i == 'R') lr-=1;
        }
        return ud == 0 && lr == 0;
    }
};