#include "Ball.h"
#include <string>
#include <iostream>

using namespace std;
Ball::Ball(double radius)
{
    m_color = "red";
    m_radius = radius;
}
Ball::Ball(string color , double radius )
{
    m_color = color;
    m_radius = radius;
}
void Ball::print()
{
    cout << "color : " << m_color << endl;
    cout << "radius: " << m_radius << endl;


}
