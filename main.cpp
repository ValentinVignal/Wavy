#include <iostream>
using namespace std;

#include "noiseMaker.h"


int main()
{
    wcout << "oneloneocder.com - Sythesizer Part 1" << endl;

    // Get all sound hardware
    vector<wstring> devices = NoiseMaker<short>::Enumerate();

    // Display findings
    for (auto d : devices) wcout << "Found Output Device:" << d << endl;

    // Create sound machine !! 
    NoiseMaker<short> sound(devices[0], 44100, 1, 8, 512);
}