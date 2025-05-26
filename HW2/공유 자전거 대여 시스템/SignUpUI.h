/**
 * Project SE Design & Implementation
 */


#ifndef _SIGNUPUI_H
#define _SIGNUPUI_H

class SignUpUI {
public: 
	
/**
 * void
 * 
 * string id
 * string pwd
 * string 
 * 
 * void createUserAccount(ofstream& inputfile, string id, string pwd, string phnNum);
 * 
 * @param input_file
 * @param id
 * @param password
 * @param phone_number
 */
void CreateUserAccount(ofstream input_file, String id, String password, String phone_number);
private: 
	SignUp sign_up_;
};

#endif //_SIGNUPUI_H