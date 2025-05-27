#ifndef _CHECKUSERBIKERENTALUI_H
#define _CHECKUSERBIKERENTALUI_H
#include <fstream>
#include <string>
#include <vector>
#include "CheckUserBikeRental.h"
using namespace std;

class CheckUserBikeRentalUI {
public: 
	void SetOutputFile(ofstream& output_file);
	void StartInterface(const vector<pair<string, string>>& rented_bike_info);
private:
	ofstream* poutput_file_;
	CheckUserBikeRental* pcheck_user_bike_rental_;
};

#endif