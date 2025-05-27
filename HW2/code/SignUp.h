#ifndef _SIGNUP_H
#define _SIGNUP_H
#include <string>
#include "User.h"
using namespace std;


class SignUp {
public:
	SignUp();
	~SignUp();
	void AddUserAccount(string id, string password, string phone_number);
private:
	User* puser_account_;
};

#endif