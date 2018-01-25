#include <iostream>
#include <iomanip>
//#include "CommissionEmployee.h"
#include "derivada.h"
using namespace std;
/*//invocar clase base desde derivda
int main(){
	ComissionEmployee commissionEmployee("Sue", "Jones", "222-22-2222", 10000, 0.06 );
	ComissionEmployee *commissionEmployeePtr = NULL;
	BasePlusComissionEmployee basePlusCommissionEmployee("Bob", "Lewis", "333-33-3333", 5000, .04, 300 );
	BasePlusComissionEmployee *basePlusCommissionEmployeePtr = NULL;
	cout << fixed << setprecision( 2 );
	cout << "Print base-class and derived-class objects:\n\n";
	commissionEmployee.print();
	cout << "\n\n";
	basePlusCommissionEmployee.print();
	commissionEmployeePtr = &commissionEmployee;	
	cout << "\n\n\nCalling print with base-class pointer to "<< "\nbase-class object invokes base-class print function:\n\n";
	commissionEmployeePtr->print();
	basePlusCommissionEmployeePtr = &basePlusCommissionEmployee;
	cout << "\n\n\nCalling print with derived-class pointer to "<< "\nderived-class object invokes derived-class "<< "print function:\n\n";
	basePlusCommissionEmployeePtr->print();
	commissionEmployeePtr = &basePlusCommissionEmployee;
	cout << "\n\n\nCalling print with base-class pointer to "<< "derived-class object\ninvokes base-class print "<< "function on that derived-class object:\n\n";
	commissionEmployeePtr->print();
	cout << endl;
}*/

/*//error al corvertir base a derivada
int main(){
	ComissionEmployee commissionEmployee("Sue", "Jones", "222-22-2222", 10000, .06 );
	BasePlusComissionEmployee *basePlusCommissionEmployeePtr = NULL;
	basePlusCommissionEmployeePtr = &commissionEmployee;
	} // end main
*/
/*
//puntero base  no acepta funciones derivadas
int main(){
	ComissionEmployee *commissionEmployeePtr = NULL; // base class ptr
	BasePlusComissionEmployee basePlusCommissionEmployee("Bob", "Lewis", "333-33-3333", 5000, .04, 300 ); // derived class
	commissionEmployeePtr = &basePlusCommissionEmployee;
	string firstName = commissionEmployeePtr->getFirstName();
	string lastName = commissionEmployeePtr->getLastName();
	string ssn = commissionEmployeePtr->getSocialSecurityNumber();
	double grossSales = commissionEmployeePtr->getGrossSales();
	double commissionRate = commissionEmployeePtr->getComissionRate();
	double baseSalary = commissionEmployeePtr->getBaseSalary();
	commissionEmployeePtr->setBaseSalary( 500 );
}
*/

int main(){
	ComissionEmployee commissionEmployee("Sue", "Jones", "222-22-2222", 10000, 0.06 );
	ComissionEmployee *commissionEmployeePtr = NULL;
	BasePlusComissionEmployee basePlusCommissionEmployee("Bob", "Lewis", "333-33-3333", 5000, .04, 300 );
	BasePlusComissionEmployee *basePlusCommissionEmployeePtr = NULL;
	cout << fixed << setprecision( 2 );
	cout << "Invoking print function on base-class and derived-class "<< "\nobjects with static binding\n\n";
	commissionEmployee.print(); // static binding
	cout << "\n\n";
	basePlusCommissionEmployee.print(); // static binding
	cout << "\n\n\nInvoking print function on base-class and "<< "derived-class \nobjects with dynamic binding";
	commissionEmployeePtr = &commissionEmployee;
	cout << "\n\nCalling virtual function print with base-class pointer"<< "\nto base-class object invokes base-class "<< "print function:\n\n";
	commissionEmployeePtr->print();
	basePlusCommissionEmployeePtr = &basePlusCommissionEmployee;
	cout << "\n\nCalling virtual function print with derived-class "<< "pointer\nto derived-class object invokes derived-class "<< "print function:\n\n";
	basePlusCommissionEmployeePtr->print();
	commissionEmployeePtr = &basePlusCommissionEmployee;
	cout << "\n\nCalling virtual function print with base-class pointer"<< "\nto derived-class object invokes derived-class "<< "print function:\n\n";
	commissionEmployeePtr->print();
	cout << endl;
}
