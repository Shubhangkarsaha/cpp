bool isValidParenthesis(string s)
{
    stack<int> e;
    for (int i=0; i<s.length(); i++) {
        char ch = s[i];

        // if opening bracket stack push
        // if close bracket stack top check and close

        if (ch == '(' || ch == '{' || ch =='[') {
            e.push(ch);
        } else {

            //for closing bracket
            if (!e.empty()) {
              char top = e.top();
              if ((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch ==']' && top =='[')) {
                e.pop();
              } else {
                return false;
              }
            } else {
              return false;
            }
        }  
    }

    if (e.empty()) {
        return true;
    } else {
        return false;
    }
}
