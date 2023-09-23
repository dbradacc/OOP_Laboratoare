#ifndef HOURLY_WORKER_H
#define HOURLY_WORKER_H
#include "Employee.h"
#include <iostream>
using namespace std;
class HourlyWorker : public Employee
{
 public:
 HourlyWorker(string, string, double, double);
 double getPay();
 void print();
 private:
 double wage;
 double hours;
};
#endif
