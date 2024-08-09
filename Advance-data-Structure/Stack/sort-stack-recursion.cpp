#include <bits/stdc++.h>

void sortedInsert(stack<int> &stack, int element) {
	// base case
	if (stack.empty() || (!stack.empty() && stack.top() < element)) {
		stack.push(element);
		return;
	}

	int num = stack.top();
	stack.pop();

	// recursive call
	sortedInsert(stack, element);

	stack.push(num);
}

void sortStack(stack<int> &stack)
{
	if (stack.empty()) {
		return;
	}

	int element = stack.top();
	stack.pop();

	//recursive call
	sortStack(stack);

	sortedInsert(stack, element);
}
