#ifndef HOSPITAL_H_
#define HOSPITAL_H_


class Hospital {

public:
	int patientsPerHour;
	int numDoctors;
	int numNurses;


private:

	Hospital(int P, int D, int N) {
		patientsPerHour = P;
		numDoctors = D;
		numNurses = N;
	}


};





#endif