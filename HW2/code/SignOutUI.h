#ifndef _SIGNOUTUI_H
#define _SIGNOUTUI_H

#include "SignOut.h"
#include <fstream>
using namespace std;


class SignOutUI {
public: 
	SignOutUI();
	~SignOutUI();
	void RequestSignOut(ofstream& output_file, string& id);
private: 
	SignOut *psign_out_;
};

#endif //_SIGNOUTUI_H