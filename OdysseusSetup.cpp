//
//  OdysseusSetup.cpp
//  
//
//  Created by Dayt0n on 6/25/15.
//
//

#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>

using namespace std;

void menuSelect ()
{
    system("clear");
    printf("What would you like to do?:\n");
    printf(" \n");
    printf("1) Install libimobiledevice and friends (correctly)\n");
    printf("2) Cancel\n");
    printf("Selection: ");
}

int main()
{
    menuSelect();
    int userInput;
    cin >> userInput;
    switch (userInput) {
        case 1:
            system("sudo apt-get update");
            system("sudo apt-get -y install libimobiledevice-dev libssl-dev libusb-1.0.0 libzip2");
            system("sudo apt-get -y install usbmuxd automake autoconf libtool pkg-config openssl build-essential libplist++-dev libzip-dev libcurl4-openssl-dev");
            system("clear");
            link("/lib/x86_64-linux-gnu/libssl.so.1.0.0", "/lib/x86_64-linux-gnu/libssl.so.1");
            link("/lib/x86_64-linux-gnu/libcrypto.so.1.0.0", "/lib/x86_64-linux-gnu/libcrypto.so.1");
            printf("Done. Odysseus should be fully configured.\n");
        case 2:
            break;
    }
    return 0;
}
