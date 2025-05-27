#ifndef _SIGNOUTUI_H
#define _SIGNOUTUI_H

#include "SignOut.h"
#include <fstream>
using namespace std;


class SignOutUI {
public: 
	void RequestSignOut(ofstream& output_file);
private: 
	SignOut *psign_out_;
};

#endif //_SIGNOUTUI_H