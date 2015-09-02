## MBED Toolchain

Don't want to use the Windoze XP-inspired online compiler? Me neither!


On Ubuntu, run

```
sudo apt-get install gcc-arm-none-eabi
```

Double check the `Makefile` to verify that you have the mount directory for the KL25Z correct. This should be fairly standard,
but plug in the board and check that `/home/$USER/FRDM-KL25Z` exists just to make sure. Don't forget to append the `/.` on the end.

Now, edit `main.cpp`. If you need other header files, go ahead and include them. Adding other `.cpp` files is a little tricker,
but we can cross that bridge later.

Run `make` to compile your program. There should be a `yourbinfile.bin` file in your directory.

Run `make upload`, and after a brief upload time (< 1 second for most), your program should be running!

No need even to upgrade the firmware with a Windoze 7 computer.
