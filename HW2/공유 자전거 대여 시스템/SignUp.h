/**
 * Project SE Design & Implementation
 */


#ifndef _SIGNUP_H
#define _SIGNUP_H

class SignUp {
public: 
	
/**
 * @param id
 * @param password
 * @param phone_number
 */
void AddUserAccount(String id, String password, String phone_number);
private: 
	User user_account_;
};

#endif //_SIGNUP_H