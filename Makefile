PROGNAME = starter

a.exe: ${PROGNAME}.cpp
	c:/MinGW/bin/g++ -Wall -std=c++17 -o a.exe -g -Ic:/MinGW/include ${PROGNAME}.cpp


run: a.exe
	.\a.exe

clean:
	del /Q a.exe
