#pragma once
#include<iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stack>
#include <deque>
#include<conio.h>
#include "message.h"
using namespace std;
class user
{
private:
	string username;
	string pass;
	vector<user> contact;
	stack <string> messages;
	deque <string> temporarymessages;
public:
	static int id;
	int p_id;
	user();
	user(string username, string pass);
	void send(user u1, user u2);
	void addcontacts(user u2,user u1);
	void search(user u, user u2);
	void undo();
	void viewallsentmessages();
	void viewallusers();
	bool checknames(string name, user u1);
	void viewallmessages();
	void addmessagetofavourites(int choice);
	void viewfavouritemessages();
	void removeoldestmessagefromfavourites();
	void viewallmessagesfromspecificperson(user u);
	void setUsername(string uName);
	void setpassword(string password);
	string getUsername();
	string getPassword();
	int incrementid();
	void setID(int ID);
	int getID();
};



