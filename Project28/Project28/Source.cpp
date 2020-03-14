#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

using namespace std;


void regist(string namee, string email, string pass) {
	ofstream is("tit.txt", ios::app);
	if (!is.is_open())
	{
		cout << "Error file" << endl;
	}

	cout << "Enter email " << endl;
	cin >> email;
	is << email << endl;
	cout << "Enter password" << endl;
	cin >> pass;
	is << pass << endl;
	cout << "Enter your name" << endl;
	cin >> namee;
	is << namee << endl;
	is.close();
}
void vkhid(string namee2, string email, string pass,  string email2, string pass2, int i) {
	fstream fin("tit.txt");
	cout << "Enter email " << endl;
	cin >> email;
	cout << "Enter password" << endl;
	cin >> pass;

	while (!fin.eof())
	{

		getline(fin, email2);

		if (email2 == email) {
			getline(fin, pass2);
			getline(fin, namee2);
		}
		if (email == email2 && pass == pass2) {
			cout << "Helloy  " << namee2 << endl;
			i++;
		}
		
	}
	if (i = 0) {
		cout << "Incorrect login or password" << endl;
		
	}
	i = 0;
}

int main() {
	int a;
	fstream fin("tit.txt");
	int i = 0;
	string namee;
	string email;
	string pass;
	string namee2;
	string email2;
	string pass2;
	bool  pra = true;

	
	do
	{

		cout << "1) Registrascia" << endl;
		cout << "2) Vkhid" << endl;
		cin >> a;
		switch (a)
		{
		case 1: {
			regist(namee, email, pass);
		}
			  break;
		case 2: {
			
			vkhid(namee2, email, pass, email2, pass2, i);
		}
			  break;
		default:
			break;
		}

	} while (true);
	
	fin.close();

	system("pause");
	return 0;

}
