#include <cstdlib>
using std::rand;

#ifndef DOCTOR_H_
#define DOCTOR_H_

class Doctor {
private:
	int WorkTime;
	bool isAvailable;

public:
	
	Doctor(int wTime, bool available) {
		wTime = doctorTimer();
		WorkTime = wTime;
		available = false;
		isAvailable = available;
	}
	
	
	int doctorTimer() {
		int var = rand() % 20 + 1;
		return var;

	}
};


#endif