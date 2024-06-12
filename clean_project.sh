#!/bin/bash

# Definizione dei pattern di file
patterns=("*.o" ".qmake.stash" "*.pro" "Makefile")

# Iterazione attraverso ogni pattern
for pattern in "${patterns[@]}"; do
  # Espansione del pattern in un array di file
  files=($pattern)
  
  # Iterazione attraverso ogni file corrispondente al pattern
  for file in "${files[@]}"; do
    if [ -e "$file" ]; then  # Controlla se il file esiste
      rm "$file"
    fi
  done
done

# Generazione del progetto con qmake
qmake -project
sed -i '8i\QT += widgets core gui' ProgettoP2.pro
sed -i '9i\MOC = /usr/lib/qt6/moc' ProgettoP2.pro
echo "OBJECTS_DIR = \$\$OUT_PWD/obj" >> ProgettoP2.pro
qmake
# /usr/lib/qt6/moc qt_files/headers/window_new_sensor.h -o window_new_sensor.moc
make -j$(nproc)

