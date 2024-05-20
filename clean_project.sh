#!/bin/bash
rm *.o
rm .qmake.stash
rm Makefile
rm *.pro
qmake -project
sed -i '8i\QT += widgets' ProgettoP2.pro
qmake
