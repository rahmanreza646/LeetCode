class Solution {

    
    public:
    vector<string> v;
    void generate(string &s, int open,int close)
    {
        if(open==0 && close==0)
        {
            v.push_back(s);
        }
        
        if(open>0)
        {
            s.push_back('(');
            generate(s,open-1,close);
            s.pop_back();
        }
        if(close>0)
        {
            if(open<close)
            {
                s.push_back(')');
                generate(s,open,close-1);
                s.pop_back();
                
            }
        }
    }
    public:
    vector<string> generateParenthesis(int n) {
        string str;
        generate(str,n,n);
        return v;
        
    }
};
