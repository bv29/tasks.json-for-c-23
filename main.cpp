// C++ Program to demonstrate 
// Exploring Feature Test Macros 
#include <iostream> 
using namespace std; 

// main function 
int main() 
{ 
	// Check if ranges library is available 
	#ifdef __cpp_lib_ranges 
		cout << "Ranges library is Available." << endl; 
	#else 
		cout << "Ranges library is Not Available." << endl; 
	#endif 

	return 0; 
}
