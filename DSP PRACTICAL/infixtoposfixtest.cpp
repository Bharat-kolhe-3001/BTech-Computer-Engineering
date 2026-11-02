#include<iostream>
#include<stack>
#include<string>
using namespace std;
int precedence(char op){
    if(op=='+'||op=='-'){
        return 1;
    }
    else if(op=='*'||op=='/'){
        return 2;
    }
    else if(op=='^'){
   return 3;
    }
    return 0;
}

bool isoperator(char c){
    return (c=='+'||c='-'||c=='*'||c=='/'||c=='^');
}
string infixtopostfix(string infix){
    stack<char>s;
    string postfix ="";
    for(i=0;i<infix.length();i++){
        char c = infix[i];
        if(isalnum(c)){
        posfix+=c;
        }
        else if(c=='('){
            s.push(c);
        }
        else if(c==')'){
            while(!s.empty()&&s.top()!='('){
                postfix +=S.top();
                s.pop();
            }
            s.pop();
        }
        else if(is Operator(c)){
            while(!s.empty()&&precedence(s.top())>=precedence(c)){
                postfix+=s.top();
                s.pop();
            }
            s.push(c);
        }
    }//end for loop
    while(!s.empty()){
        postfix += s.top();
        s.pop();
    }
    return postfix;
}
int main(){
    string infix;
    cout<<"Enter an infix expression";
    cin>>infix;
    string postfix = infixtopostfix(infix);
    cout<<"Postfix Expression"<<postfix<<"\n";
    return 0;
}