# !/bin/sh

wire="$(ip a | grep eth0 | grep inet | wc -l)"
wifi="$(ip a | grep wlan | grep inet | wc -l)"

if [ $wire = 1 ]; then
    echo "  "
elif [ $wifi = 1 ]; then
    data="$(iwctl station wlan0 show | grep Connected)"
    ssid=$(python -c "print('$data'.split()[2])")

    echo "    : $ssid"
else
    echo " 睊 "
fi


