#include <iostream>
using namespace std;

class triangle {
private:
    string ShapeName; int a = 0, b = 0, c = 0, A = 0, B = 0, C = 0;
public:
    triangle(){}
    triangle(string _ShapeName, int _a, int _b, int _c, int _A, int _B, int _C) : ShapeName(_ShapeName), a(_a),
        b(_b), c(_c), A(_A), B(_B), C(_C){}
    string Shape_Name() { return ShapeName; }
    int a1() { return a; }
    int b1() { return b; }
    int c1() { return c; }
    int A1() { return A; }
    int B1() { return B; }
    int C1() { return C; }

    void print_info(string ShapeName, int a, int b, int c, int A, int B, int C) {
        cout << "" << ShapeName << ":" << "\nСтороны: " << "a=" << a << " b=" << b << " c=" << c
            << "\nУглы: " << "A=" << A << " B=" << B << " C=" << C << endl;
    }
};
class right_triangle : public triangle{};
class isosceles_triangle : public right_triangle{};
class equilateral_triangle : public isosceles_triangle{};
class quadrilateral : public triangle {
private:
    int d = 0, D = 0;
public:
    quadrilateral(){}
    quadrilateral(string _ShapeName, int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) : triangle(_ShapeName, _a, _b, _c, _A, _B, _C)
    {
        d = _d; D = _D;
    }
    int d2() { return d; }
    int D2() { return D; }

    void print_info(string ShapeName, int a, int b, int c, int d, int A, int B, int C, int D) {
        cout << "\n" << ShapeName << ":" << "\nСтороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d
            << "\nУглы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;
    }
};
class rectangle : public quadrilateral{};
class square : public rectangle{};
class parallelogram : public square{};
class rhomb : public parallelogram{};


int main()
{
    setlocale(LC_ALL, "Russian");
    triangle* ta;
    triangle obj1;
    right_triangle obj2;
    isosceles_triangle obj3;
    equilateral_triangle obj4;
    ta = &obj1;
    ta = &obj2;
    ta = &obj3;
    ta = &obj4;
    obj1.print_info("Треугольник", 10, 20, 30, 50, 60, 70);
    cout << endl;
    obj2.print_info("Прямоугольный треугольник", 10, 20, 30, 50, 60, 90);
    cout << endl;
    obj3.print_info("Равнобедренный треугольник", 10, 20, 10, 50, 60, 50);
    cout << endl;
    obj4.print_info("Равносторонний треугольник", 30, 30, 30, 60, 60, 60);
    quadrilateral obj5;
    rectangle obj6;
    square obj7;
    parallelogram obj8;
    rhomb obj9;
    ta = &obj5;
    ta = &obj6;
    ta = &obj7;
    ta = &obj8;
    ta = &obj9;
    obj5.print_info("Четырёхугольник", 10, 20, 30, 40, 50, 60, 70, 80);
    obj6.print_info("Прямоугольник", 10, 20, 10, 20, 90, 90, 90, 90);
    obj7.print_info("Квадрат", 20, 20, 20, 20, 90, 90, 90, 90);
    obj8.print_info("Параллелограмм", 20, 30, 20, 30, 30, 40, 30, 40);
    obj9.print_info("Ромб", 30, 30, 30, 30, 30, 40, 30, 40);
}
