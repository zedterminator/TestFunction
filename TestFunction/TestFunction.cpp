#include <Windows.h>
#include <iostream>

using namespace std;

void FunctionOne() {
    cout << "Day la function mot!" << endl;
}

void FunctionTwo(const char* string) {
    cout << string << endl;
}


int main()
{
	while (true)
	{
		if (GetAsyncKeyState(VK_NUMPAD1) & 1) {
			FunctionOne();
			FunctionTwo("Hello Mother F :v");
		}
	}
}
