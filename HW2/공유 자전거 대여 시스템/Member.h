/**
 * Project SE Design & Implementation
 */


#ifndef _MEMBER_H
#define _MEMBER_H

class Member {
public: 
	
/**
 * isLoggedIn = true
 * isExit = false
 * @param id
 * @param password
 */
void LoadAccount(String id, String password);
	
/**
 * if(ID != admin)
 *   phoneNumber = null
 * ID = null
 * password = null
 * isLoggedIn = false
 * 
 * @param id
 */
void ClearSession(String id);
	
/**
 * @param is_exit
 */
void Exit(Boolean is_exit);
protected: 
	String id_;
	String password_;
	Boolean is_logged_in_;
	Boolean is_exit_;
};

#endif //_MEMBER_H