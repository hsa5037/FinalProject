CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g
CXXFLAGS += -v
LDFLAGS = -lboost_date_time

OBJS = main.o Future.o Game.o Inventory.o Past.o Present.o Purgatory.o Space.o

SRCS = main.cpp Future.cpp Game.cpp Inventory.cpp Past.cpp Present.cpp Purgatory.cpp Space.cpp

HEADERS = Future.hpp Game.hpp Inventory.hpp Past.hpp Present.hpp Purgatory.hpp Space.hpp

final: ${SRCS} ${HEADERS} 
	${CXX} ${LDFLAGS} ${SRCS} -o final

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm final
