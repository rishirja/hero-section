#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
string InfixToprefix(string s){
    int i=0;
    string st;
    string ans="";
    int  n=s.size();
    while(i<n){
        if(s[i]>='A' && s[i] <='Z'|| s[i]>='a' && s[i]<='z'|| s[i]>='0' && s[i]<='9'){
            ans=ans+s[i];
        }
        else if(s[i]=='('){
            st.push_back(s[i]);
        }
        else if(s[i]==')' ){
            while(st.empty() && st.top!='('){
                ans=ans+st.top;
                st.pop();
            }
            st.pop();
        }
        else{
            while(st.empty() && priority(s[i])<=priority(st.top())){
                ans+=st.top();
                st.pop();
                
            }
        }
    }
}