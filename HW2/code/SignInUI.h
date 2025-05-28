#ifndef _SIGNINUI_H
#define _SIGNINUI_H

#include "SignIn.h"
#include <fstream>
using namespace std;

class SignInUI {
public: 
	SignInUI();
	~SignInUI();
	void EnterAccountInfo(ifstream& input_file, ofstream& output_file, string& id);
private: 
	SignIn* psign_in_;
};

#endif //_SIGNINUI_H