#pragma once
#include <fstream>
#include <string> //Äëÿ Windows Forms
using namespace std;
using namespace System;

struct Date
{
	char day[2];
	char month[2];
	char year[4];
};

struct Time
{
	char hour[2];
	char minutes[2];
};

struct User
{
	int id;
	int idPlace;
	Date date;
	Time timeStart;
	Time timeEnd;
};

class Users
{
private:
	User* users;
	int count;

	void Copy(int n, User* org, User*(&res), int excl);

public: 
	Users();
	~Users();

	bool Del(int id);
	void Add(User u);
	User Get(int i);
	bool Check(User u, int i);
	bool Load();
	bool Save();
	void Clear();
	int Count() 
	{
		return count; 
	}
	bool IsEmpty()
	{ 
		return count == 0; 
	}
	bool IDBusy(int id);
};

//Äëÿ Windows Forms
string ConvertToString(System::String^ s);
String^ ConvertToString(string& os); 

