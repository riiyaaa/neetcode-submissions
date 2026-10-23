class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        int ans = 0;
        stack <int> s;
        int a = 0;
        int b = 0;
       
        for(int i = 0; i<n; i++){
             string ch = tokens[i];
            if(ch == "+"|| ch == "-"|| ch == "*"|| ch == "/"){
                
                if(!s.empty()){
                     b = s.top(); s.pop();
                     a = s.top(); s.pop();
                }
                
                if (ch == "+") s.push(a + b);
                else if (ch == "-") s.push(a - b);
                else if (ch == "*") s.push(a * b);
                else s.push(a / b);
            } else{
                s.push(stoi(ch));
            }
        }
        return s.top();
    }
};
