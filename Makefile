CXXFLAGS=-Wall -O3 -g

BIN_DIR := bin
SRC_DIR := src
OBJ_DIR := obj

BINARIES := $(BIN_DIR)/meeting
SRC_FILES := $(wildcard $(SRC_DIR)/*.cpp)

OBJECTS := $(SRC_FILES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)


RGB_LIB_DISTRIBUTION=libs/matrix
RGB_INCDIR=$(RGB_LIB_DISTRIBUTION)/include
RGB_LIBDIR=$(RGB_LIB_DISTRIBUTION)/lib
RGB_LIBRARY_NAME=rgbmatrix
RGB_LIBRARY=$(RGB_LIBDIR)/lib$(RGB_LIBRARY_NAME).a
LDFLAGS+=-L$(RGB_LIBDIR) -l$(RGB_LIBRARY_NAME) -lrt -lm -lpthread

.PHONY: all FORCE 

all: $(BINARIES)

$(BINARIES): $(OBJECTS) $(RGB_LIBRARY) | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $@ $(LDFLAGS)

$(RGB_LIBRARY): FORCE
	$(MAKE) -C $(RGB_LIBDIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	@echo "files from cpp"
	$(CXX) -I$(RGB_INCDIR) $(CXXFLAGS) -c $< -o $@ 

$(BIN_DIR) $(OBJ_DIR):
	@echo $@
	mkdir -p $@

FORCE:

clean:
	@rm -rfv $(BIN_DIR) $(OBJ_DIR)
	$(MAKE) -C $(RGB_LIBDIR) clean

-include $(OBJECTS:.o=.d) 