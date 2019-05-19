/**
 * Demonstrates STL property query algorithms.
 * 
 * @author Erel Segal-Halevi
 * @since 2019-05
 */

#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <array>
#include "output_containers.hpp"
using namespace std;



int main() {
	cout << boolalpha;
	vector<int> v{4,6,8,5,4,1,3,1,4,7};       // OK
	cout << "all_of(v, <10): " << all_of(begin(v), end(v), [](int x){return x<10;}) << endl;
	cout << "all_of(v, <8): " << all_of(begin(v), end(v), [](int x){return x<8;}) << endl;
	cout << "all_of(v, <1): " << all_of(begin(v), end(v), [](int x){return x<1;}) << endl;
	cout << "\nany_of(v, <10): " << any_of(begin(v), end(v), [](int x){return x<10;}) << endl;
	cout << "any_of(v, <8): " << any_of(begin(v), end(v), [](int x){return x<8;}) << endl;
	cout << "any_of(v, <1): " << any_of(begin(v), end(v), [](int x){return x<1;}) << endl;
	cout << "\nnone_of(v, <10): " << none_of(begin(v), end(v), [](int x){return x<10;}) << endl;
	cout << "none_of(v, <8): " << none_of(begin(v), end(v), [](int x){return x<8;}) << endl;
	cout << "none_of(v, <1): " << none_of(begin(v), end(v), [](int x){return x<1;}) << endl;
}

