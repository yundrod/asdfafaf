#ifndef EMPLOYEE3_H_INCLUDED
#define EMPLOYEE3_H_INCLUDED
#include<string>
#include"CommissionEmployee.h"

class BasePlusComissionEmployee:public ComissionEmployee{
public:
	BasePlusComissionEmployee(const string&,const string&,const string&,double=0.0,double=0.0,double=0.0);
	void setBaseSalary(double);
	double getBaseSalary()const;
	virtual double earnings()const;
	virtual void print()const;
private:
	double baseSalary;
};
#endif // EMPLOYEE3_H_INCLUDED
