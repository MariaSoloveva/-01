#include <iostream>
#include <cmath>
int main()
{
    // 1
    std::cout << 3.14 << std::endl;
    // вывод числа пи
    // 2
    std::cout << "1 13 49" << std::endl;
    // вывол строки чисел
    // 3
    std::cout << "Enter the simbol" << std::endl;
    char simbol;
    std::cin >> simbol;
    std::cout << 1 << simbol << 13 << simbol << 49 << std::endl;
    // строки чисел с символом
    // 4
    std::cout << 17<< "  " << 14 << "  " << 567 << std::endl;
    // вывод строки чисел с двумя пробелами между числами
    // 5
    double x = 0;
    double y = 0;
    std::cout << "Enter a" << std::endl;
    double a = 0;
    std::cin >> a;
    x = 12 * a * a + 7 * a - 12;
    y = 3 * x * x * x + 4 * x * x - 11 * x + 1;
    std::cout << "x=" << x << std::endl;
    std::cout << "y=" << y << std::endl;
    // формулы
    // 6
    std::cout << "Enter the mass" << std::endl;
    double m = 0;
    std::cin >> m;
    std::cout << "Enter the amount" << std::endl;
    double v = 0;
    std::cin >> v;
    double p = m / v;
    std::cout << "p=" << p << std::endl;
    // рассчет плотности
    // 7
    std::cout << "Enter the number A" << std::endl;
    double a_1 = 0;
    std::cin >> a_1;
    std::cout << "Enter the number B" << std::endl;
    double b_1 = 0;
    std::cin >> b_1;
    double x_1 = -b_1 / a_1;
    std::cout << "x=" << x_1 << std::endl;
    // решение линейного уравнения
    // 8
    std::cout << "Enter the coordinates of the fist point" << std::endl;
    double x1 = 0;
    std::cin >> x1;
    double y1 = 0;
    std::cin >> y1;
    std::cout << "Enter the coordinates of the second point" << std::endl;
    double x2 = 0;
    std::cin >> x2;
    double y2 = 0;
    std::cin >> y2;
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    std::cout << "R=" << distance << std::endl;
    // вычисления расстояния между точками
    // 9
    std::cout << "Enter the base length of an isosceles trapezoid" << std::endl;
    double a1 = 0;
    std::cin >> a1;
    double b1 = 0;
    std::cin >> b1;
    std::cout << "Enter the height of this trapezoid" << std::endl;
    double h = 0;
    std::cin >> h;
    double f = 2*(std::sqrt(((std::abs(b1 - a1)) / 2) * ((std::abs(b1 - a1)) / 2) + h * h));
    double p1 = a1 + b1 + f;
    std::cout << "Perimeter =" << p1 << std::endl;
    // периметр трапеции
    // 10
    std::cout << "Enter the outer radius of the ring" << std::endl;
    double radius1 = 0;
    std::cin >> radius1;
    std::cout << "Enter the inner radius of the ring" << std::endl;
    double radius2 = 0;
    std::cin >> radius2;
    double S = 3.1416 * (radius1 * radius1 - radius2 * radius2);
    std::cout << S << std::endl;
    // площадь кольца
    // 11
    std::cout << "Enter the side of the square" << std::endl;
    double l = 0;
    std::cin >> l;
    double p2 = 4 * l;
    std::cout << p2 << std::endl;
    // периметр квадрата
    // 12
    std::cout << "Enter radius" << std::endl;
    double radius = 0;
    std::cin >> radius;
    std::cout << "Diameter=" << 2 * radius << std::endl;
    return 0;
}
