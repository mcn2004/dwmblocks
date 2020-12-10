# !/bin/sh

wire="$(ip a | grep eth0 | grep inet | wc -l)"
wifi="$(ip a | grep wlan | grep inet | wc -l)"

if [ $wire = 1 ]; then
    echo "  "
elif [ $wifi = 1 ]; then
    echo "   "
else
    echo " 睊 "
fi


