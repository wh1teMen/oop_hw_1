#include<iostream>
#include<string>
using namespace std;

class Human{
public:
	void SetAge(int Age) {
		this->Age = Age;
	}
	int GetAge() {
		return Age;
	}
	void SetName(string Name) {
		this->Name = Name;
	}
	string GetName() {
		return Name;
	}
	void SetSurname(string Surname) {
		this->Surname = Surname;
	}
	string GetSurname() {
		return Surname;
	}
	void SetPatronamic(string Patronamic) {
		this->Patronamic = Patronamic;
	}
	string GetPatronamic() {
		return Patronamic;
	}
	string Fullname() {
		string str;
		str =Surname +" "+ Name+" " + Patronamic+"\n";
		return str;
	}

private:
	int Age;
	string Name;
	string Surname;
	string Patronamic;

};
class Student{
public:
	void SetGroup(int group) {
		Group = group;
	}
	int GetGroup() {
		return Group;
	}
	void SetSpecialization(string specialization) {
		Specialization = specialization;
	}
	string GetSpecialization() {
		return Specialization;
	}
	

private:
	
	int Group;
	string Specialization;


};
class Flat{
public:
	
	
private:


};



int main() {
	system("chcp 1251>nul");
	Human first;
	first.SetAge(11);
	first.SetName("Иван");
	first.SetSurname("Петров");
	first.SetPatronamic("Алексеевич");
	cout << first.Fullname();
	cout <<"Возраст: "<< first.GetAge();
	Student firstStudent;
	firstStudent.SetSpecialization("Разаработчик ПО");
	firstStudent.SetGroup(111);
	cout << endl;
	cout <<"Специальность: " << firstStudent.GetSpecialization()<<"\n";
	cout <<"Группа: "<< firstStudent.GetGroup();
	









	system("pause>nul");
	return 0;
}