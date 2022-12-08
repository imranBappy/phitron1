// C++ program to evaluate a prefix expression.
#include <bits/stdc++.h>
using namespace std;

bool isOperand(char c)
{
    // If the character is a digit then it must
    // be an operand
    return isdigit(c);
}
void stack_print(stack<double> s)
{
    vector<double> debugVector = vector<double>();
    while (!s.empty())
    {
        double t = s.top();
        debugVector.push_back(t);
        s.pop();
    }
    reverse(debugVector.begin(), debugVector.end());
    for (const auto &it : debugVector)
    {
        cout << it << " ";
    }
    cout << endl;
}
double evaluatePrefix(string exprsn)
{
    stack<double> Stack;
    int i = 0;
    for (int j = exprsn.size() - 1; j >= 0; j--)
    {
     
        // Push operand to Stack
        // To convert exprsn[j] to digit subtract
        // '0' from exprsn[j].
        if (isOperand(exprsn[j]))
            Stack.push(exprsn[j] - '0');

        else
        {

            // Operator encountered
            // Pop two elements from Stack
            double o1 = Stack.top();
            Stack.pop();
            double o2 = Stack.top();
            Stack.pop();

            // Use switch case to operate on o1
            // and o2 and perform o1 O o2.
            switch (exprsn[j])
            {
            case '+':
                Stack.push(o1 + o2);
                break;
            case '-':
                Stack.push(o1 - o2);
                break;
            case '*':
                Stack.push(o1 * o2);
                break;
            case '/':
                Stack.push(o1 / o2);
            case '^':
                Stack.push(pow(o1, o2));
                break;
            }
        }
    }

    return Stack.top();
}
double evaluatePrefix1(string prefixExp)
{

    stack<double> operendStack;
    int size = prefixExp.size() - 1;
    int xx = 0;
    for (int i = size; i >= 0; i--)
    {
        printf("step %d : ", xx);
        stack_print(operendStack);
        xx++;

        if (isdigit(prefixExp[i]))
            operendStack.push(prefixExp[i] - '0');
        else
        {
            double o1 = operendStack.top();
            operendStack.pop();
            double o2 = operendStack.top();
            operendStack.pop();
            if (prefixExp[i] == '+')
                operendStack.push(o1 + o2);
            else if (prefixExp[i] == '-')
                operendStack.push(o1 - o2);
            else if (prefixExp[i] == '*')
                operendStack.push(o1 * o2);
            else if (prefixExp[i] == '/')
                operendStack.push(o1 / o2);
            else if (prefixExp[i] == '^')
                operendStack.push(pow(o1, o2));
            else
            {
                cout << "Invalid Expression";
                return -1;
            }
        }
    }
    return operendStack.top();
}

// Driver code
int main()
{
    // (((*5^62(+(-7/26((-(*7+81(+*54
    string exprsn = "-*5+^62-7/26+*7+81*54";
    cout << evaluatePrefix1(exprsn) << endl;
    return 0;
}
