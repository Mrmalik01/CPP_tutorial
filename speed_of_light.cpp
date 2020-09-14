#include <iostream>

using namespace std;

int main()
{
    const double SPEED_OF_LIGHT = 3e8;
    const string SPEED_UNIT = "m/s";

    const double DISTANCE_BETWEEN_EARTH_SUN = 150.45e9;
    const string DISTANC_UNIT = "m";

    cout << "The time taken to reach the Sun from the Earth if we travel with the speed of light is : " << ((DISTANCE_BETWEEN_EARTH_SUN / SPEED_OF_LIGHT) / 60) / 60 << " Hrs\n";
}