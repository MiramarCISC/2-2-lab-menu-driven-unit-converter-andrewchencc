#include "converter.hpp"

#include <iomanip>
#include <iostream>
#include <limits>

using namespace std;

int main() {
    int choice = -1;
    double value = 0.0;
    double result = 0.0;
    
    cout << fixed << setprecision(2);

    do {
        printMenu();

        if (!(cin >> choice)) {
            cout << "Invalid choice. Please try again." << endl;

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (!isValidMenuChoice(choice)) {
            cout << "Invalid choice. Please try again." << endl;
            continue;
        }

        if (choice == EXIT_CHOICE) {
            cout << "Goodbye!" << endl;
            break;
        }

        cout << "Enter value: ";

        if (!(cin >> value)) {
            cout << "Invalid value for this conversion. Please try again."
                 << endl;

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (!isValidValueForChoice(choice, value)) {
            cout << "Invalid value for this conversion. Please try again."
                 << endl;
            continue;
        }

        switch (choice) {
            case INCHES_TO_CENTIMETERS:
                result = inchesToCentimeters(value);
                cout << value << " inches = "
                     << result << " centimeters" << endl;
                break;

            case CENTIMETERS_TO_INCHES:
                result = centimetersToInches(value);
                cout << value << " centimeters = "
                     << result << " inches" << endl;
                break;

            case POUNDS_TO_KILOGRAMS:
                result = poundsToKilograms(value);
                cout << value << " pounds = "
                     << result << " kilograms" << endl;
                break;

            case KILOGRAMS_TO_POUNDS:
                result = kilogramsToPounds(value);
                cout << value << " kilograms = "
                     << result << " pounds" << endl;
                break;

            case FAHRENHEIT_TO_CELSIUS:
                result = fahrenheitToCelsius(value);
                cout << value << " Fahrenheit = "
                     << result << " Celsius" << endl;
                break;

            case CELSIUS_TO_FAHRENHEIT:
                result = celsiusToFahrenheit(value);
                cout << value << " Celsius = "
                     << result << " Fahrenheit" << endl;
                break;

            default:
                // All invalid choices were handled before the switch.
                break;
        }

    } while (choice != EXIT_CHOICE);

    return 0;
}