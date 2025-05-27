#ifndef _SIGNUPUI_H
#define _SIGNUPUI_H
#include <fstream>
#include <string.h>
#include "SignUp.h"
using namespace std;

class SignUpUI {
public: 
	void CreateUserAccount(ifstream& input_file, ofstream& output_file);
private: 
	SignUp* psign_up_;
};

#endif