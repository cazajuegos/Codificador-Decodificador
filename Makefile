

all : $(OBJS)
	g++ src/sld.cpp -IC:\MinGW\include -LC:\MinGW\lib -w -Wl,-subsystem,windows -lmingw32 -lSDL2main -lSDL2 -o MAINSD