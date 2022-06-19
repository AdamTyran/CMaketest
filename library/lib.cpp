#include <iostream>
#include "lib.hpp"

namespace lib {
	void hello_lib() {
		cout << "Hello in lib\";
			lib::hello_lib();
		return 0;
	}
}