include Rules.mk

cppsrc := $(wildcard src/*.cpp) \
	  $(wildcard ../CommonFunc/src/*.cpp)

objs = $(cppsrc:.cpp=.o)

$(EXECUTABLE): $(objs)
	mkdir -p $(BUILD_DIR)
	$(CXX) -o $(BUILD_DIR)/$@ $^ $(CXXFLAGS)

.PHONY: clean

clean:
	rm -fr $(BUILD_DIR)
	rm -f $(objs)
