#include <iostream>
#include <algorithm>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <string>
#include <functional>
#include <vector>
#include <ranges>
#include <numeric>
#include <array>

#include "set_contains.h"

struct base {
	virtual int func() const = 0;
};

struct derived: base {
	constexpr int func() const override { return 2; }
};

constexpr auto func(const base &b) {
	return b.func();
}


consteval int add(int a, int b) { return a+b; }
constexpr int r = add(100, 300);

void ranges_sample()
{
	static constexpr auto il = {3, 1, 4, 1, 5, 9};
	std::ranges::reverse_view rv {il};
	for (int i : rv)
		std::cout << i << ' ';
	std::cout << '\n';
	for(int i : il | std::views::reverse)
		std::cout << i << ' ';
	std::cout << '\n';
}

void const_expr_num_array()
{
	constexpr std::array myArray{1, 2, 3, 4, 5};
	constexpr auto sum = std::accumulate(myArray.begin(), myArray.end(), 0);
	std::cout << "sum: "  << sum << std::endl;
}

int main()
{
	std::cout << "Compiler version:" << __VERSION__ << std::endl;

	std::cout << "Here are some random new C++20 features:\n";
	std::cout << "set_contains 3:" << set_contains(3) << '\n';
	std::cout << "set_contains 4:" << set_contains(4) << '\n';

	constexpr derived d{};
	static_assert(func(d) == 2);

	std::cout << "r:" << r << '\n';
	ranges_sample();

	std::cout << "const_expr_num_array():\n";
	const_expr_num_array();

	std::string hello = "hello";
	std::cout << hello << "starts with he:" << hello.starts_with("he") << '\n';
	std::cout << hello << "starts with she:" << hello.starts_with("she") << '\n';

	return 0;
}
