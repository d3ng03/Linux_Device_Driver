#! /bin/sh
module="chardev"
device="chardev"
group="root"
mode="766"

sudo /sbin/insmod $module.ko || exit 1

rm -f /dev/${device}

sudo mknod /dev/${device} c 99 98

sudo chgrp $group /dev/${device}
sudo chmod $mode  /dev/${device}