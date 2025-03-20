CXX = g++
CXXFLAGS = -Wall -std=c++17
SRC = main.cpp arrayOperations.cpp memoryAllocate.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = my_program

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)


