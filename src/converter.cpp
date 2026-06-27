#include "converter.hpp"
#include <iostream>

using namespace std;

double inchesToCentimeters(double inches) {
    return inches * 2.54;
}

double centimetersToInches(double centimeters) {
    return centimeters / 2.54;
}

double poundsToKilograms(double pounds) {
    return pounds * 0.453592;
}

double kilogramsToPounds(double kilograms) {
    return kilograms / 0.453592;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double celsiusToFahrenheit(double celsius) {
    return celsius * 9.0 / 5.0 + 32.0;
}

bool isValidMenuChoice(int choice) {
    return choice >= EXIT_CHOICE &&
           choice <= CELSIUS_TO_FAHRENHEIT;
}

bool requiresNonNegativeValue(int choice) {
    return choice >= INCHES_TO_CENTIMETERS &&
           choice <= KILOGRAMS_TO_POUNDS;
}

bool isValidValueForChoice(int choice, double value) {
    if (!isValidMenuChoice(choice)) {
        return false;
    }

    if (requiresNonNegativeValue(choice) && value < 0.0) {
        return false;
    }

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