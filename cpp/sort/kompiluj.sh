#!/bin/sh
echo "----Kompilacja programu----"
g++ -Wall -Wextra -o main *.cpp && {
echo "---Kompilacja ukonczona----"
echo "---Uruchamianie programu---"
chmod +x main
./main
}
echo "---Zakonczono program---"
