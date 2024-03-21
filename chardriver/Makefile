KERNDIR=/lib/modules/$(shell uname -r)/build
obj-m+=chardev.o
objs+=chardev.o
PWD=$(shell pwd)

default:
	make -C $(KERNDIR) M=$(PWD) modules

user:
	gcc user.c -o user

clean:
	make -C $(KERNDIR) M=$(PWD) clean
	rm -rf *.ko
	rm -rf *.o
	rm -rf user