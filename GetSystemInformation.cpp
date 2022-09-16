// GetSystemInformation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <stdio.h>
#pragma comment(lib, "user32.lib")
#include <fstream>
using namespace std;

int main()
{
    std::cout << "This is a C++ program to get information about the system\n";

    SYSTEM_INFO siSysInfo;

    // Copy the hardware information to the SYSTEM_INFO structure. 

    GetSystemInfo(&siSysInfo);

    // Display the contents of the SYSTEM_INFO structure. 

    printf("Hardware information: \n");
    printf("  OEM ID: %u\n", siSysInfo.dwOemId);
    printf("  Number of processors: %u\n", siSysInfo.dwNumberOfProcessors);
    printf("  Processor type: %u\n", siSysInfo.dwProcessorType);
       
    
    ofstream file;
    file.open("SystemInformation.txt");
    file << "This is a C++ program to get information about the system\n\n";
    file << "Hardware information: \n\n";
    file << "Number of processors: ";
    file << siSysInfo.dwNumberOfProcessors;
    file << "\nProcessor type: ";
    file << siSysInfo.dwProcessorType;
    
    file.close();
    return 0;
}

