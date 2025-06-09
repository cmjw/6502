CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

SRC_DIR = src

SOURCES = $(SRC_DIR)/main.cpp $(SRC_DIR)/6502.cpp $(SRC_DIR)/util.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = 6502

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $@

$(SRC_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)

.PHONY: all clean