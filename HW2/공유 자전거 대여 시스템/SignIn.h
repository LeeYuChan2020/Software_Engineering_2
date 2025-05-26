/**
 * Project SE Design & Implementation
 */


#ifndef _SIGNIN_H
#define _SIGNIN_H

class SignIn {
public: 
	
/**
 * @param id
 * @param password
 */
void HandleSignIn(String id, String password);
private: 
	Member member_account_;
};

#endif //_SIGNIN_H