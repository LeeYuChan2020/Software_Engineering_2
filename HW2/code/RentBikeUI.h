#ifndef _RENTBIKEUI_H
#define _RENTBIKEUI_H

#include "RentBike.h"
#include <fstream>
using namespace std;

class RentBikeUI {
public: 
	RentBikeUI();
	~RentBikeUI();
	void EnterBikeID(ifstream& input_file, ofstream& output_file);
private: 
	RentBike* prent_bike_;
};

#endif //_RENTBIKEUI_H