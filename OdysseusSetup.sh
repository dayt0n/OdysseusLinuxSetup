# By dayt0n
# shell script cause iH8sn0w made me realize it was pointless to have it coded in c++

clear
echo "What would you like to do?:"
echo " "
echo "1) Install libimobiledevice and friends (correctly)"
echo "2) Cancel"
read -p "Selection: " userInput
if [[ $userInput = "1" ]]; then
    sudo apt-get update
    sudo apt-get -y install build-essential libimobiledevice-dev libssl-dev libusb-1.0.0 libzip2 libreadline6
    sudo apt-get -y install usbmuxd automake autoconf libtool pkg-config openssl build-essential libplist++-dev libzip-dev libcurl4-openssl-dev
    clear
    sudo ln -s /lib/x86_64-linux-gnu/libssl.so.1.0.0 /lib/x86_64-linux-gnu/libssl.so.1
    sudo ln -s/lib/x86_64-linux-gnu/libcrypto.so.1.0.0 /lib/x86_64-linux-gnu/libcrypto.so.1
    echo "Done. Odysseus should be fully configured."
else
    :
fi
exit
