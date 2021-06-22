// Deitel ch.04 exercise 4.13
#include <iostream>

using namespace std;

int main()
{
    // initializing
    int kilometer{0};
    int liter{0};
    unsigned int totalKilo{0};
    unsigned int totalLiter{0};

    cout << "Enter kilommeters driven (-1 to exit): ";
    cin >> kilometer;
    // the while loop with -1 as exit code

    while (kilometer != -1)
    {

        cout << "Enter Liters used: ";
        cin >> liter;

        totalKilo += kilometer;
        totalLiter += liter;

        double kmPerLiter{0};
        // using static cast to promote kilometer to double
        // so the calculation does not cause error
        kmPerLiter = static_cast<double>(kilometer) / liter;

        double totalKmPerLiter{0};
        totalKmPerLiter = static_cast<double>(totalKilo) / totalLiter;

        cout << fixed;

        cout << "kms per liter this trip: " << kmPerLiter << endl;
        cout << "Total kms per liter: " << totalKmPerLiter << endl;
        
        cout << "Enter kilommeters driven (-1 to exit): ";
        cin >> kilometer;
    }
}