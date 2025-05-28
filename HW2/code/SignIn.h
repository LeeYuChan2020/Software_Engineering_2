#ifndef _SIGNIN_H
#define _SIGNIN_H

#include "Member.h"
#include <string>
using namespace std;

class SignIn {
public:
	SignIn();
	void HandleSignIn(string id, string password);
private:
	Member* pmember_account_;
};

#endif //_SIGNIN_H