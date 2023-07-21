#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

double circle_area (double radius);
double circle_circumferance (double radius);

int main()
{
    int radius;
    std::cout << "Input radius in centimeters: ";
    std::cin >> radius;

    double area = circle_area (radius);
	double circumferance = circle_circumferance (radius);
	
	std::cout << "Area of the circle is: " << area << " cm";
	std::cout << "\nCircumferance of the circle is: " << circumferance << " cm";
	
    return 0;
}

double circle_area (double radius)
{
    return M_PI * pow(radius, 2);
}
double circle_circumferance (double radius)
{
    return 2 * M_PI * radius;
}
