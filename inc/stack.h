class Stack 
{
    private:
	int stackstore[100];
	int SP;
    public:
    Stack(void) { SP = 0; }
	void push(int value);
	int pop(void);
};

int Stack::pop(void) 
{
	return stackstore[--SP];
}

void Stack::push(int value) 
{
	stackstore[SP++] = value;
}