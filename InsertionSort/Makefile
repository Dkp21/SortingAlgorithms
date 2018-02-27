include Rules.mk

cppsrc = $(wildcard src/*.cpp)

objs = $(cppsrc:.cpp=.o)

$(EXECUTABLE): $(objs)
	$(shell mkdir $(BUILD_DIR) > /dev/null 2>&1)
	$(CXX) $(CXXFLAGS) -o $(BUILD_DIR)/$@ $^

.PHONY: clean

clean:
	$(shell rm -rf $(BUILD_DIR) > /dev/null 2>&1)
	$(shell rm src/*.o > /dev/null 2>&1)
