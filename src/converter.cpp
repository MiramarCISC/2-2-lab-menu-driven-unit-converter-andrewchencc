#include "converter.hpp"
#include <iostream>

using namespace std;

double inchesToCentimeters(double inches) {
    return inches * CENTIMETERS_PER_INCH;
}

double centimetersToInches(double centimeters) {
    return centimeters / CENTIMETERS_PER_INCH;
}

double poundsToKilograms(double pounds) {
    return pounds / POUNDS_PER_KILOGRAM;
}

double kilogramsToPounds(double kilograms) {
    return kilograms * POUNDS_PER_KILOGRAM;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0/9.0;
}

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0/5.0) + 32.0;
}

bool isValidMenuChoice(int choice) {
    return (choice >= EXIT_CHOICE && choice <= CELSIUS_TO_FAHRENHEIT);

}

bool requiresNonNegativeValue(int choice) {
    return (choice >= 1 && choice <= 4);
}

bool isValidValueForChoice(int choice, double value) {
    if (!isValidMenuChoice(choice))
        return false;

    if(requiresNonNegativeValue(choice) && value < 0.0)
        return false;

    return true;
}

void printMenu() {
    cout << endl;
    cout << "Unit Converter" << endl;
    cout << endl;
    cout << "1. Inches to centimeters" << endl;
    cout << "2. Centimeters to inches" << endl;
    cout << "3. Pounds to kilograms" << endl;
    cout << "4. Kilograms to pounds" << endl;
    cout << "5. Fahrenheit to Celsius" << endl;
    cout << "6. Celsius to Fahrenheit" << endl;
    cout << "0. Exit" << endl;
    cout << endl;
    cout << "Enter choice: ";
}
