#ifndef _SIGNINUI_H
#define _SIGNINUI_H

#include "SignIn.h"
#include <fstream>
using namespace std;

class SignInUI {
public: 
	void EnterAccountInfo(ifstream& input_file, ofstream& output_file);
private: 
	SignIn* psign_in_;
};

#endif //_SIGNINUI_H