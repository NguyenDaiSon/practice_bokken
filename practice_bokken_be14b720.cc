#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>
#include <functional>
#include <forward_list>
#include <initializer_list>

template <typename T, typename C = std::less<T>>
void print_set(const std::set<T,C>& s) {
	std::cout << "set /" << s.size() << "/ = { ";
	std::ranges::copy(s, std::ostream_iterator<T>(std::cout, " "));
	std::cout << "}\n";
}

int main() {
	{
		const std::set<int> s{2, 1, 4, 3};
		print_set(s);
	}

	{
		const std::set<int, std::greater<>> s{2, 1, 4, 3};
		print_set(s);
	}

	{
		const std::forward_list<int> c{2, 1, 4, 3};
		const std::set<int> s{std::cbegin(c), std::cend(c)};
		print_set(s);
	}

	{
		const std::set<int> s1{2, 1, 4, 3}; // std::less<> by default
		print_set(s1);

		const std::set<int> s2(s1); // std::less<> by default
		print_set(s2);
	}

	{
		const std::set<int, std::greater<>> s1{2, 1, 4, 3};
		print_set(s1);

		const std::set<int, std::greater<>> s2{s1};
		print_set(s2);
	}


	{
		std::set<int> s1{2, 1, 4, 3};
		const auto s2{std::move(s1)}; 
		print_set(s1); // { }
		print_set(s2); // { 1 2 3 4 }

	}

	{
		const std::initializer_list<int> c{2, 1, 4, 3};
		const std::set<int> s{c};
		print_set(s);
	}

	{
		const std::initializer_list<int> c{2};
		const std::set<int> s{c};
		print_set(s);
	}

	{
		const std::set<int> s{2};
		print_set(s);
	}

	{
		const std::set<int> s{{2}}; // std::initializer_list<int>
		print_set(s);
	}


	return 0;
}
