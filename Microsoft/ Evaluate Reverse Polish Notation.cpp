class Solution {
    long calCulate(int val1 , int val2 , char opera){
        if(opera== '+') return val1 + val2;
        else if(opera == '-') return val1 - val2;
        else if(opera == '*') return (long)val1 * val2;
        else return val1 / val2;
    }
public:
    int evalRPN(vector<string>& tokens) {
        stack<long> st;
        for(int i = 0 ; i < tokens.size(); i++){
            if(tokens[i].size() == 1 and tokens[i][0] < 48){
                long val2 = st.top();
                st.pop();
                long val1 = st.top();
                st.pop();

                string opertor = tokens[i];
                long totalVal = calCulate(val1, val2 , opertor[0]);

                st.push(totalVal);
            }
            else
            {
                st.push(stol(tokens[i]));
            }
        }

        return st.top();
    }
};