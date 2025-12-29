#include <iostream>
#include <string>
#include <cstring>   
#include <cctype>    
using namespace std;
template <class b>
class Stack {
    int TOS = -1;
    int size;
    b* arr;

public:
    Stack(int _size = 100) {
        size = _size;
        arr = new b[size];
    }

    ~Stack() {
        delete[] arr;
    }

    bool isEmpty() {
        return TOS == -1;
    }

    bool isFull() {
        return TOS == size - 1;
    }

    void push(b x) {
        if (!isFull()) {
            arr[++TOS] = x;
        } else {
            cout << "Stack is full\n";
        }
    }

    b pop() {
        if (!isEmpty()) {
            return arr[TOS];
            TOS--;
        } else {
            cout << "Stack is empty\n";
            return -1;
        }
    }

    b peek() {
        if (!isEmpty()) return arr[TOS];
        else return -1;
    }
};
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

int applyOp(int a, int b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b; 
    }
    return 0;
}
int evaluate(char* exp) {
    Stack<int> operands(100);
    Stack<char> operators(100);
    int n = strlen(exp);
    for (int i = 0; i < n; i++) {
        if (exp[i] == ' ') continue;

        
        if (isdigit(exp[i])) {
            int val = 0;
            while (i < n && isdigit(exp[i])) {
                val = val * 10 + (exp[i] - '0');
                i++;
            }
            operands.push(val);
            i--;
        }
      
        else if (exp[i] == '(') {
            operators.push(exp[i]);
        }
      
        else if (exp[i] == ')') {
            while (!operators.isEmpty() && operators.peek() != '(') {
                int b = operands.pop();
                int a = operands.pop();
                char op = operators.pop();
                operands.push(applyOp(a, b, op));
            }
            operators.pop(); 
        }
 
        else {
            while (!operators.isEmpty() && precedence(operators.peek()) >= precedence(exp[i])) {
                int b = operands.pop();
                int a = operands.pop();
                char op = operators.pop();
                operands.push(applyOp(a, b, op));
            }
            operators.push(exp[i]);
        }
    }

    while (!operators.isEmpty()) {
        int b = operands.pop();
        int a = operands.pop();
        char op = operators.pop();
        operands.push(applyOp(a, b, op));
    }

    return operands.pop();
}
int main() {
    cout << evaluate("1+5*2") << endl;   
    cout << evaluate("(2+3)*4") << endl;  
    cout << evaluate("3/2*2") << endl;     
    cout << evaluate("2*4*(2+22)") << endl;     
}