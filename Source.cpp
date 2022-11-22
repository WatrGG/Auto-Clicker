#include <iostream>
#include <Windows.h>
#include <string>

void menu() {
	std::cout << "Welcome to thes auto clicker dashboard" << std::endl;
	std::cout << "To start the auto clicker, press X and to stop it press Z" << std::endl;
}

void clicker() {
	bool click = false;

	while (true) {
		if (GetAsyncKeyState('X')) {
			click = true;
		}
		else if (GetAsyncKeyState('Z')) {
			click = false;
		}
		if (click) {
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			Sleep(100); // adjust the speed of the autoclicker here, scale is cps, Ex. Sleep(10); = 10 cps etc.
		}
	}
}

int main() {

	menu();
	clicker();

	return 0;
}