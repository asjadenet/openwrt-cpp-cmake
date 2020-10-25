#include <set>
#include "set_contains.h"
bool set_contains(int n)
{
	std::set numbers = {3, 6, 1, 9, 2};
	return numbers.contains(n);
}
