#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <fstream>
#include <chrono>

using namespace std;
void file()
{
	ofstream file;
	file.open("test.txt", ios_base::app);
	unsigned long milliseconds_since_epoch = chrono::system_clock::now().time_since_epoch() / chrono::milliseconds(1);
	time_t now = time(0);
	
	char* dt = ctime(&now);
	file << milliseconds_since_epoch << "The local date and time is: " << dt << endl;
	file.close();

}
int main() {
	file();
	// current date/time based on current system
	time_t now = time(0);
	// convert now to string form
	char* dt = ctime(&now);
	cout << "The local date and time is: " << dt << endl;
}




