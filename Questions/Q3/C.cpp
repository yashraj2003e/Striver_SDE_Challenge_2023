/*
STRING -
151. Reverse words in a String
*/


string reverseWords(string st) {
	
	stack<string> s;

	string f = "";
	for(int i=0;i<st.length();i++) {
		if(st[i]==' ') {
			if(f[0]==' ') {
				f="";
			}
			else {
				s.push(f);
				f="";
			}
			
		}
		else {
			f+=st[i];
		}
	}

	s.push(f);
	f = "";

	while(!s.empty()) {
		f+=s.top();
		s.pop();
		if(s.size()!=0)
			f+=" ";
	}

	string f1 = "";

	int x = 0;
	for(int i=0;i<f.length();i++) {
		if(f[i]!=' ') x=1;
		if(f[i]==' ') {
			if(i+1<f.length())
				if(f[i+1]!=' ') {
					if(x!=0)
						f1+=f[i];
				}
		}
		else {
			f1+=f[i];
		}
	}
	return f1;
}

