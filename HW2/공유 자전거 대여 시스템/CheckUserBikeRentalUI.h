/**
 * Project SE Design & Implementation
 */


#ifndef _CHECKUSERBIKERENTALUI_H
#define _CHECKUSERBIKERENTALUI_H

class CheckUserBikeRentalUI {
public: 
	
/**
 * @param output_file
 */
void set_output_file(OutputStream output_file);
	
/**
 * vector<pair<string, string>> StringPair = {{"ID1", "Bike1"}, {"ID2", "Bike2"}};
 * 
 * for (int i = 0; i < StringPair.size(); i++) {
 *     cout << StringPair[i].first << " " << StringPair[i].second << endl;
 * }
 * @param rented_bike_info
 */
void StartInterface(StringPair[*] rented_bike_info);
private: 
	OutputStream ouput_file_;
	CheckUserBikeRental check_user_bike_rental_;
};

#endif //_CHECKUSERBIKERENTALUI_H