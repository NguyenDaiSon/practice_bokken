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
		const std::set<int> s1{2, 1, 4, 3};
		print_set(s1);

		std::set<int> s2{7, 8, 6, 9};
		print_set(s2);

		// copy assigment operator
		s2 = s1;
		print_set(s1);
		print_set(s2);
	}

	{
		const std::set<int> s1{2, 1, 4, 3};
		print_set(s1);

		std::set<int> s2{7, 8, 6, 9};
		print_set(s2);

		// still copy assigment operator due to const
		s2 = std::move(s1); 
		print_set(s1);
		print_set(s2);
	}

	{
		std::set<int> s1{2, 1, 4, 3};
		print_set(s1);

		std::set<int> s2{7, 8, 6, 9};
		print_set(s2);

		// copy assigment operator
		s2 = s1;
		print_set(s1);
		print_set(s2);
	}

	{
		std::set<int> s1{2, 1, 4, 3};
		print_set(s1);

		std::set<int> s2{7, 8, 6, 9};
		print_set(s2);

		// move assigment operator
		s2 = std::move(s1);
		print_set(s1); // { }
		print_set(s2); // { 1 2 3 4}
	}


	{
		std::set<int> s1{2, 1, 4, 3};
		print_set(s1);

		// set& operator=( std::initializer_list<value_type> ilist );
		s1 = {6, 7, 8, 8, 9};
		print_set(s1); // { 6 7 8 9 } // 8 instead of 8 8

	}


	return 0;
}
