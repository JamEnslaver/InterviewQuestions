#include <iostream>
using namespace std;

int main()
{
	LinkedNode first;
	first.value = 1;
	LinkedNode second;
	second.value = 2;

	first.next = &second;

	return 0;
}
