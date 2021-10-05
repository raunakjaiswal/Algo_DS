#include <iostream>
using namespace std;
#include<stack>

bool checkparenthesis(string p){
       stack<int> s;
  for(int i=0;i<p.size();i++){
      if(p[i]=='{'||p[i]=='('||p[i]=='[')
        s.push(p[i]);
        else{
            if(s.empty()==true)
              return false;
              else if(((p[i]==')'&& s.top()=='(')||(p[i]=='}'&&s.top()=='{')||(p[i]==']'&&s.top()=='['))==false)
                return false;
                else
                s.pop();      
        }
  }
  return (s.empty()==true);
}
int main(){
    // Check weather a given string is a valid parenthesis or not
    string p;
  cout<<"Enter String ";
  cin>>p;
   if(checkparenthesis(p)==true)
     cout<<"Valid parenthesis ";
     else
     cout<<"Invalid Parenthesis";
  
  return 0;
}