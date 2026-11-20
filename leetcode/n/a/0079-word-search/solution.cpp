class Solution {
public:
    bool rec(int i,int j,int in,vector<vector<char>>& board,string& word)
    {
        if(in==word.size()) return true;
        if(i<0||i>=board.size()||j<0||j>=board[0].size()||board[i][j]!=word[in]) return false;
        char temp=board[i][j];
        board[i][j]='#';
        bool found=rec(i-1,j,in+1,board,word)||
                   rec(i+1,j,in+1,board,word)||
                   rec(i,j-1,in+1,board,word)||
                   rec(i,j+1,in+1,board,word);
        board[i][j]=temp;
        return found;
    }
    bool exist(vector<vector<char>>& board,string word)
    {
        int n=board.size(),m=board[0].size();
        if(word.size()>n*m) return false;
        int bc[256]={};
        int wc[256]={};
        for(auto& row:board)
            for(char c:row)
                bc[c]++;
        for(char c:word)
            wc[c]++;
        for(int i=0;i<256;i++)
            if(wc[i]>bc[i]) return false;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(board[i][j]==word[0]&&rec(i,j,0,board,word))
                    return true;
        return false;
    }
};