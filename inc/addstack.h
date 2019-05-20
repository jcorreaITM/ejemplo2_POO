#include "stack.h"

class AddingStack : public Stack 
{
    private:
	int sum;
    public:
	AddingStack(void);
	void push(int value);
	int pop(void);	
	int getSum(void);
};

AddingStack::AddingStack(void) : Stack() 
{
	sum = 0;
}

void AddingStack::push(int value) 
{
	sum += value;
	Stack::push(value);
}

int AddingStack::pop(void) 
{
	int val = Stack::pop();
	sum -= val;
	return val;
}

int AddingStack::getSum(void) 
{
	return sum;
}