class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n=s.size();
        vector<string> ans;
        for(int i=0;i<n;i+=k){
            string a;
            if(n-i>=k)
            {a=s.substr(i,k);}
            else{
                a=s.substr(i,n-i);
                a.append( k-(n-i),fill);
            }
            ans.push_back(a);
        }
        return ans;
    }
};
