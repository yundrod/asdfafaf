#include <iostream>
#include <stdexcept>
#include "SalariedEmployee.h" 
using namespace std;
SalariedEmployee::SalariedEmployee( const string &first,const string &last, const string &ssn, double salary )
: Employee( first, last, ssn )
{
	setWeeklySalary( salary );
} // end SalariedEmployee constructor
void SalariedEmployee::setWeeklySalary( double salary ){
	if ( salary >= 0.0 )
		weeklySalary = salary;
	else
		throw invalid_argument( "Weekly salary must be >= 0.0" );
}
double SalariedEmployee::getWeeklySalary() const{
	return weeklySalary;
}
double SalariedEmployee::earnings() const{
	return getWeeklySalary();
} // end function earnings
void SalariedEmployee::print() const{
	cout << "salaried employee: ";
	Employee::print();
	cout << "\nweekly salary: " << getWeeklySalary();
}
