#ifndef _SIGNOUT_H
#define _SIGNOUT_H

#include "Member.h"
#include <string>
using namespace std;

class SignOut {
public: 
	SignOut();
	~SignOut();
	void HandleSignOut(string& id);
private: 
	Member* pmember_account_;
};

#endif //_SIGNOUT_H