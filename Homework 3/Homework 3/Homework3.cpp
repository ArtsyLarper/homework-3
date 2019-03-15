#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class Person {
private:
	static const int LIMIT = 25;
	string lname; //Person's last name
	char fname[LIMIT]; //Person's first name
public:
	Person() { lname = ""; fname[0] = '\0'; } //#1
	Person(const string & ln, const char * fn = "Heyyou")
	{
		this->lname = ln;
		strcpy_s(this->fname, fn);
	}
		//#2
// the following methods display lname and fname
	void Show() const
	{
		cout << fname << " " << lname << endl;
	}		//firstname lastname format
	void FormalShow() const
	{
		cout << lname << ", " << fname << endl;
	}//lastname, firstname format

};

int main()
{
	Person person1;
	Person person2("Valentine");
	Person person3("Jalbon", "KJ");
	person1.Show();
	person1.FormalShow();
	person2.Show();
	person2.FormalShow();
	person3.Show();
	person3.FormalShow();

	return 0;
}