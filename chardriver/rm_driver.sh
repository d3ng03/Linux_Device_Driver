
#! /bin/sh
module="chardev"
device="chardev"

sudo /sbin/rmmod --force -v $module || exit 1

sudo rm -f /dev/${device}