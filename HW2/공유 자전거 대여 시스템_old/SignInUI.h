/**
 * Project SE Design & Implementation
 */


#ifndef _SIGNINUI_H
#define _SIGNINUI_H

class SignInUI {
public: 
	
/**
 * @param input_file
 * @param id
 * @param password
 */
void EnterAccountInfo(ofstream input_file, String id, String password);
private: 
	SignIn sign_in_;
};

#endif //_SIGNINUI_H