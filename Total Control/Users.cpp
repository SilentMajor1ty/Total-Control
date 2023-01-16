#include "Users.h"
using namespace std;

void Users::Copy(int n, User* orig, User* (&result), int exclude)
{
	int q = 0;
	for (int i = 0; i < n; i++) {
		if(i != exclude)
			result[q++] = orig[i];
	}
}

Users::Users()
{
	users = new User[0];
	count = 0;
}

Users::~Users()
{
	//Деструктор
}

bool Users::Del(int id)
{
	if (IsEmpty())
		return false;

	int index = -1;
	for (int i = 0; i < count; i++) {
		if (users[i].id == id) {
			index = i;
			break;
		}
	}

	if (index == -1)
		return false;


	User* buf = new User[count];
	Copy(count, users, buf, -1);

	count--;
	users = new User[count];

	Copy(count + 1, buf, users, index); // окрім index
	delete[] buf;

	return true;
}

void Users::Add(User u)
{
	if (count == 0) {
		count = 1;
		users = new User[count];
	}
	else {
		User* buf = new User[count];
		Copy(count, users, buf, -1);

		count++;
		users = new User[count];

		Copy(count - 1, buf, users, -1);
		delete[] buf;
	}
	users[count - 1] = u;
}

User Users::Get(int i)
{
	if (i < 0 || i >= count) {
		return User();
	}

	return users[i];
}

bool Users::Check(User buf, int i)
{
	int day = atoi(users[i].date.day);
	int dayInput = atoi(buf.date.day);

	int month = atoi(users[i].date.month);
	int monthInput = atoi(buf.date.month);

	int year = atoi(users[i].date.year);
	int yearInput = atoi(buf.date.year);

	int timeStart = atoi(users[i].timeStart.hour);
	int timeStartInput = atoi(buf.timeStart.hour);

	int timeEnd = atoi(users[i].timeEnd.hour);
	int timeEndInput = atoi(buf.timeEnd.hour);

	if (day == dayInput && month == monthInput && year == yearInput &&
		(timeStart <= timeEndInput) && (timeEnd >= timeStartInput) &&
		users[i].idPlace == buf.idPlace) {
		return true;
	}

	return false;
}

bool Users::Load()
{
	ifstream load("..\\Resources\\USERS.txt");

	if (!load) {
		return false;
	}

	load >> count;
	users = new User[count];
	for (int i = 0; i < count; i++) {
		load >> users[i].id;
		load >> users[i].idPlace;
		load >> users[i].date.day;
		load >> users[i].date.month;
		load >> users[i].date.year;
		load >> users[i].timeStart.hour;
		load >> users[i].timeStart.minutes;
		load >> users[i].timeEnd.hour;
		load >> users[i].timeEnd.minutes;
	}

	load.close();
	return true;
}

bool Users::Save()
{
	if (IsEmpty())
		return false;

	ofstream save("..\\Resources\\USERS.txt", ios::out);

	save << count << endl;
	for (int i = 0; i < count; i++) {
		save << users[i].id << endl;
		save << users[i].idPlace << endl;
		save << users[i].date.day[0];
		save << users[i].date.day[1] << endl;
		save << users[i].date.month[0];
		save << users[i].date.month[1] << endl;
		save << users[i].date.year[0];
		save << users[i].date.year[1];
		save << users[i].date.year[2];
		save << users[i].date.year[3] << endl;
		save << users[i].timeStart.hour[0];
		save << users[i].timeStart.hour[1] << endl;
		save << users[i].timeStart.minutes[0];
		save << users[i].timeStart.minutes[1] << endl;
		save << users[i].timeEnd.hour[0];
		save << users[i].timeEnd.hour[1] << endl;
		save << users[i].timeEnd.minutes[0];
		save << users[i].timeEnd.minutes[1];

		if(i < count - 1)
			save << endl;
	}

	save.close();
	return true;
}

void Users::Clear()
{
	delete[] users;

	users = new User[0];
	count = 0;
}

bool Users::IDBusy(int id)
{
	for (int i = 0; i < count; i++) {
		if (users[i].id == id) {
			return true;
		}
	}

	return false;
}

//Для Windows Forms
string ConvertToString(System::String^ s) {
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	string	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));

	return os;
}

//Для Windows Forms
System::String^ ConvertToString(string& os) {
	System::String^ s = gcnew System::String(os.c_str());

	return s;
}
