#include "test/p7_test.h"
#ifdef _WINDOWS_PLATFORM_
#include <process.h>
#endif

int main(int argc, char** argv) {
	p7_test_main();

#ifdef _WINDOWS_PLATFORM_
	system("pause");
#endif

	return 0;
}
