#include <iostream>
#include "..\Solver\Queue.h"

int main()
{
	Queue::Queue list = { 1, 2, 3, 4, 5};
	std::cout << list << std::endl;
	list.enqueue(6);
	std::cout << list << std::endl;
	list.dequeue();
	std::cout << list << std::endl;
	std::cout << list.peek() << std::endl;
	return 0;
}
