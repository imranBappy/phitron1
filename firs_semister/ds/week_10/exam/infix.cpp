// C program to convert infix expression to postfix

#include <bits/stdc++.h>
using namespace std;
// Stack type
struct Stack
{
    int top;
    unsigned capacity;
    int *array;
};
void stack_print(stack<int> s);
// Stack Operations
struct Stack *createStack(unsigned capacity)
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));

    if (!stack)
        return NULL;

    stack->top = -1;
    stack->capacity = capacity;

    stack->array = (int *)malloc(stack->capacity * sizeof(int));

    return stack;
}

int isEmpty(struct Stack *stack)
{
    return stack->top == -1;
}

char peek(struct Stack *stack)
{
    return stack->array[stack->top];
}

char pop(struct Stack *stack)
{
    if (!isEmpty(stack))
        return stack->array[stack->top--];
    return '$';
}

void push(struct Stack *stack, char op)
{
    stack->array[++stack->top] = op;
}

// A utility function to check if
// the given character is operand
int isOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

// A utility function to return
// precedence of a given operator
// Higher returned value means
// higher precedence
int Prec(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 1;

    case '*':
    case '/':
        return 2;

    case '^':
        return 3;
    }
    return -1;
}

// The main function that
// converts given infix expression
// to postfix expression.
void stack_print1(struct Stack *stack)
{
    for (int i = 0; i <= stack->top; i++)
    {
        printf("%c", stack->array[i]);
    }
    printf("\n");
}
int infixToPostfix(char *exp)
{
    int i, k;

    // Create a stack of capacity
    // equal to expression size
    struct Stack *stack = createStack(strlen(exp));
    if (!stack) // See if stack was created successfully
        return -1;

    for (i = 0, k = -1; exp[i]; ++i)
    {
        printf("step %d : ", i);
        stack_print1(stack);
        // If the scanned character is
        // an operand, add it to output.
        if (isOperand(exp[i]))
            exp[++k] = exp[i];

        // If the scanned character is an
        // ‘(‘, push it to the stack.
        else if (exp[i] == '(')
            push(stack, exp[i]);

        // If the scanned character is an ‘)’,
        // pop and output from the stack
        // until an ‘(‘ is encountered.
        else if (exp[i] == ')')
        {
            while (!isEmpty(stack) && peek(stack) != '(')
                exp[++k] = pop(stack);
            if (!isEmpty(stack) && peek(stack) != '(')
                return -1; // invalid expression
            else
                pop(stack);
        }

        else // an operator is encountered
        {
            while (!isEmpty(stack) && Prec(exp[i]) <= Prec(peek(stack)))
                exp[++k] = pop(stack);
            push(stack, exp[i]);
        }
    }

    // pop all the operators from the stack
    while (!isEmpty(stack))
        exp[++k] = pop(stack);

    exp[++k] = '\0';
    printf("%s", exp);
}

// Driver's code

void stack_print(stack<int> s)
{
    vector<int> debugVector = vector<int>();
    while (!s.empty())
    {
        int t = s.top();
        debugVector.push_back(t);
        s.pop();
    }
    reverse(debugVector.begin(), debugVector.end());
    for (const auto &it : debugVector)
    {
        cout << it << " ";
    }
}

int main()
{
    char exp[] = "(5*((6^2)+(7-(2/6))))-((7*(8+1))+(5*4))";

    // Function call
    infixToPostfix(exp);
    return 0;
}
