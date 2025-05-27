#ifndef _REGISTERBIKEUI_H
#define _REGISTERBIKEUI_H

#include "RegisterBike.h"
#include <fstream>
using namespace std;

class RegisterBikeUI {
public: 
	RegisterBikeUI();
	~RegisterBikeUI();
	void EnterBikeInfo(ifstream& input_file, ofstream& output_file);
private: 
	RegisterBike* pregister_bike_;
};

#endif //_REGISTERBIKEUI_H