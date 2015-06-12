avion:		main.o misil.o piloto.o propulsor.o avion.o 
			g++ main.o misil.o piloto.o propulsor.o avion.o -o avion

main.o:		main.cpp misil.hpp piloto.hpp propulsor.hpp avion.hpp
			g++ -c main.cpp

misil.o:		misil.cpp misil.hpp
					g++ -c misil.cpp

piloto.o:		piloto.cpp piloto.hpp
					g++ -c piloto.cpp

propulsor.o:		propulsor.cpp propulsor.hpp
					g++ -c propulsor.cpp

avion.o:		avion.cpp avion.hpp
					g++ -c avion.cpp