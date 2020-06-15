#include "HeadFileInclude.h"

void RecHelloWorld(std::string HW, int st) {
	if (st == HW.size() + 1) {
		return;
	}
	else {
		std::cout << HW.substr(0, st) << '\n';
		RecHelloWorld(HW, ++st);
		std::cout << HW.substr(0, st) << '\n';
	}
}