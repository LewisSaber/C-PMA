#include "Items.h"
#include <string>
#include <iostream>
#include <cmath>
using namespace std;
/*Items::Items()
{
	m_name = "null";
	m_grn = 0;
	m_cop = 0;
}*/
Items::Items(int grn)
{
	m_name = "null";
	m_grn = grn;
	m_cop = 0;
}
Items::Items(int grn, int cop)
{
	m_name = "null";
	m_grn = grn;
	m_cop = cop;
}
Items::Items(string name, int grn, int cop)
{
	m_name = name;
	m_grn = grn;
	m_cop = cop;
}
Items::Items(const Items &a)
{
	m_name = a.m_name;
	m_grn = a.m_grn;
	m_cop = a.m_cop;
}
void Items::Input()
{
	double cost;
	cout << "Enter name : ";
	cin >> m_name;
	cout << "Enter price : ";
	cin >> cost;
	m_grn = floor(cost);
	m_cop = cost * 100 - floor(cost) * 100;
}
void Items::print()
{
	cout << "Name : " << m_name << endl << "Price : " << m_grn << "." << m_cop << endl;
}
void Items::SetName(string name)
{
	m_name = name;
}
void Items::SetGrn(int grn) {
	m_grn = grn;
}
void Items::SetCop(int cop)
{
	m_cop = cop;
}
void Items::SetCost(double cost)
{
	m_grn = floor(cost);
	m_cop = cost * 100 - floor(cost) * 100;
}
string Items::GetName() { return m_name; }
int Items::GetGrn() { return m_grn; }
int Items::GetCop() { return m_cop; }
double Items::GetCost() {
	double cost = m_grn + m_cop / 100;
	return cost;
}
void Items::CopyFrom(const Items& a)
{
	m_name = a.m_name;
	m_grn = a.m_grn;
	m_cop = a.m_cop;
}


