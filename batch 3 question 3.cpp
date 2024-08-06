#include <iostream>
#include <stdexcept>
using namespace std;
double safe(double num, double den) {
    if (den == 0) {
        throw runtime_error("Error: No division by zero");
    }return num / den;
}
int main() {
    double nume, deno;
    cout << "Enter the numerator: ";
    cin >> nume;
    cout << "Enter the denominator: ";
    cin >> deno;
    try {
        double res = safe(nume, deno);
        cout << "Result: " << res << endl;
    } catch (const runtime_error& e) {
        cerr << e.what() << endl;
    }
}
