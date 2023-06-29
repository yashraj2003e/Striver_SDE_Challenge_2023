/*
Valid Paranthesis
*/


class Solution {
public:
    bool isValid(string s) {
        if(s.length()==0) return true;
	stack<char> st;
// [([{}])]
// '(])'
	for(int i=0;i<s.length();i++) {
		if(s[i]=='(' || s[i]=='{' || s[i]=='[') {
			st.push(s[i]);
		}
		else {
			if(st.size()==0) return false;

			if(s[i]==']') {
				if(st.top()=='[') {
					st.pop();
				}
				else {
					return false;
				}
			}
			if(s[i]=='}') {
				if(st.top()=='{') { 
					st.pop();
				}
				else {
					return false;
				}
			}
			if(s[i]==')') {
				if(st.top()=='(') {
					st.pop();
				}
				else {
					return false;
				}
			}
			
		}
	}

	return st.size()==0;
    }
};