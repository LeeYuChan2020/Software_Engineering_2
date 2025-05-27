#ifndef _CHECKUSERBIKERENTAL_H
#define _CHECKUSERBIKERENTAL_H
#include <vector>
#include "CheckUserBikeRentalUI.h"
#include "User.h"

class CheckUserBikeRentalUI;
class User;

class CheckUserBikeRental {
public:
	CheckUserBikeRental();
	~CheckUserBikeRental();
	void get_ui(CheckUserBikeRentalUI* ptr);
	void CheckUserBikeRentalList();
private:
	CheckUserBikeRentalUI* pcheck_ubr_ui_;
	User* puser_account_;
};

#endif