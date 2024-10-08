#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>
#include <functional>
#include <initializer_list>

template <typename T, typename C = std::less<T>>
void print_set(const std::set<T,C>& s) {
	std::cout << "set /" << s.size() << "/ = { ";
	std::ranges::copy(s, std::ostream_iterator<T>(std::cout, " "));
	std::cout << "}\n";
}

int main() {
	{
		const std::set<int, std::greater<>> s1 { 2, 1, 4, 3};
		print_set(s1);

		const std::set<int, decltype(s1.key_comp())> s2{s1};
		print_set(s2);
	}

	{
		const std::set<int> s1 { 2, 1, 4, 3}; // Comp = std::less<> by default
		print_set(s1);

		// value_comp() is same as key_comp() for std::set
		const std::set<int, decltype(s1.value_comp())> s2{s1};
		print_set(s2);
	}

	return 0;
}
