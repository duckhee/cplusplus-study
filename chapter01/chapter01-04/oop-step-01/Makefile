CPP = g++

SRCS = oop.cpp

TARGET = bank

BUILDDIR = buildDir

#CPPFLAGS = `pkg-config --cflags --libs opencv3` --std=c++11 -Wall

CPPOBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.cpp=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILDDIR})

clean:
	$(shell rm -rf ${BUILDDIR})
	$(shell del ${BUIlDDIR})

build: $(CPPOBJS)
	#$(CPP) $(CPPFLAGS) -o $(BUILDDIR)/$(TARGET) $^
	$(CPP) -o $(BUILDDIR)/$(TARGET) $^

$(CPPOBJS): $(BUILDDIR)/%.o : %.cpp
	#$(CPP) $(CPPFLAGS) -c $< -o $@
	$(CPP)  -c $< -o $@

.PHONY: clean createdirs build
.SUFFIXES: .cpp .o