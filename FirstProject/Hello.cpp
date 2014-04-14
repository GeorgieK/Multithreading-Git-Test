#include <thread>
#include <iostream>

using std::cout;
using std::endl;
using std::thread;

int main() {
	cout << "Testing my Breakpoints" << endl;
#ifndef _GLIBCXX_HAS_GTHREADS
  cout << "GThreads are not supported..." << endl;
#endif
  cout << "Hello World!" << endl;
  return 0;
}
