#include<iostream>
#include<stdexcept>
#include<iomanip>
#include "BasePlusCommissionEmployee.h"
using namespace std;
BasePlusComissionEmployee::BasePlusComissionEmployee(const string &first, const string &last, const string &ssn, double sales, double rate, double salary){
	firstName=first;
	lastName=last;
	socialSecurityNumber=ssn;
	setGrossSales(sales);
	setComissionRate(rate);
	setBaseSalary(salary);
}
void BasePlusComissionEmployee::setFirstName(const string &first){
	firstName=first;
}
string BasePlusComissionEmployee::getFirstName()const{
	return firstName;
}
void BasePlusComissionEmployee::setLastName(const string &last){
	lastName=last;
}
string BasePlusComissionEmployee::getLastName()const{
	return lastName;
}
void BasePlusComissionEmployee::setSecoialSecurityNumber(const string &ssn){
	socialSecurityNumber=ssn;
}
string BasePlusComissionEmployee::getSocialSecurityNumber()const{
	return socialSecurityNumber;
}
void BasePlusComissionEmployee::setGrossSales(double sales){
	if(sales>=0.0){
		grossSales=sales;
	}
	else{
		throw invalid_argument("gross must be >=0.0");
	}
}
double BasePlusComissionEmployee::getGrossSales()const{
	return grossSales;
}
void BasePlusComissionEmployee::setComissionRate(double rate){
	if(rate>=0.0 && rate<1.0){
		comissionRate=rate;
	}
	else{
		throw invalid_argument("ComissionRate must be >0.0 and <1.0");
	}
}
double BasePlusComissionEmployee::getComissionRate()const{
	return comissionRate;
}
void BasePlusComissionEmployee::setBaseSalary(double salary){
	if(salary>=0.0){
		baseSalary=salary;
	}
	else{
		throw invalid_argument("Salary must be >=0.0");
	}
}
double BasePlusComissionEmployee::getBaseSalary()const{
	return baseSalary;
}
double BasePlusComissionEmployee::earnings()const{
	return baseSalary + (comissionRate * grossSales);
}
void BasePlusComissionEmployee::print()const{
	cout<<"comission employee: "<<firstName<<' '<< lastName<<"\nsocial security number: "<<socialSecurityNumber;
	cout<<"\ngross sales: "<<grossSales<<"\ncomission rate: "<<comissionRate<<"\nbase Salary is: "<<baseSalary;
}
