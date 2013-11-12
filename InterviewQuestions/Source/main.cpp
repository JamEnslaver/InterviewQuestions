#include <iostream>
#include <cstddef>
#include "Lists/LinkedNode.h"
using namespace std;

int main()
{
	LinkedNode first;
	first.value = 1;
	LinkedNode second;
	second.value = 2;

	first.next = &second;

	LinkedNode* pointer = &first;

	while (pointer != NULL)
	{
		cout << pointer->value;
		pointer = pointer->next;
	}

	char input;
	cin >> input;
	return 0;
}
