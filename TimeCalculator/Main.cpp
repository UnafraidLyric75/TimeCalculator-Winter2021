#include <iostream>

using namespace std;

int main() {
	const long SECONDS_PER_MINUTE = 60L;
	const long MINUTES_PER_HOUR = 60L;
	const long HOURS_PER_DAY = 24L;
	string isRepeating;
	bool repeat = true;

	while (repeat) {
		long seconds = 0;
		long minutes = 0;
		long hours = 0;
		long days = 0;

		cout << "Enter a number of seconds: ";
		cin >> seconds;
		cout << seconds << " seconds is:" << endl;

		// do the math here boi
		// The seconds math
		minutes = seconds / SECONDS_PER_MINUTE;
		seconds = seconds % SECONDS_PER_MINUTE;
		hours = minutes / MINUTES_PER_HOUR;
		minutes = minutes % MINUTES_PER_HOUR;
		days = hours / HOURS_PER_DAY;
		hours = hours % HOURS_PER_DAY;
		

		cout << days << " days, " << hours << " hours, " << minutes << " minutes " << seconds << " seconds" << endl;
		cout << "Press any key to continue, press X to exit: ";
		cin >> isRepeating;
		cout << endl;
		if (isRepeating == "x" || isRepeating == "X") {
			repeat = false;
		}
	}

	return 0;
}