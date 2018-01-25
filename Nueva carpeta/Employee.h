#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string> // C++ standard string class

class Employee{
public:
	Employee( const std::string &, const std::string &,const std::string & );
	virtual ~Employee() { } // virtual destructor
	void setFirstName( const std::string & ); // set first name
	std::string getFirstName() const; // return first name
	void setLastName( const std::string & ); // set last name
	std::string getLastName() const; // return last name
	void setSocialSecurityNumber( const std::string & ); // set SSN
	std::string getSocialSecurityNumber() const;
	virtual double earnings() const = 0;
	virtual void print() const;
private:
	std::string firstName;
	std::string lastName;
	std::string socialSecurityNumber;
}; // end class Employee

#endif
