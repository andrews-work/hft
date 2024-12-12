# Define compiler and flags
CXX = clang++
CXXFLAGS = -std=c++14 -Wall -g -Isrc  # Include the root src directory

# Define directories
BUILD_DIR = build
SRC_DIR = src

# Define target executable name
TARGET = $(BUILD_DIR)/test

# Define source files (main.cpp, manager.cpp, trader.cpp, strategy files)
SOURCES = $(SRC_DIR)/main.cpp \
          $(SRC_DIR)/traders/manager.cpp \
          $(SRC_DIR)/traders/trader.cpp \


# Define object files (compiled version of source files)
OBJECTS = $(addprefix $(BUILD_DIR)/, $(SOURCES:.cpp=.o))

# Default target: compile and run the program
all: $(TARGET)

# Rule to create the target executable
$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET)

# Rule to compile source files into object files (.o)
$(BUILD_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)  # Ensure the build/ and build/src directories exist
	$(CXX) $(CXXFLAGS) -c $< -o $@  # Compiler with additional -I for src

# Rule to run the compiled program
run: $(TARGET)
	./$(TARGET)

# Rule to clean the build (remove object and executable files)
clean:
	rm -rf $(BUILD_DIR)
