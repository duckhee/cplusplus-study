CPP = g++

SRCS = Calculator.cpp main.cpp

CPP_EXINC = Calculator.hpp

CPP_INC = -I$(CPP_EXINC)

TARGET = Calculator

BUILDDIR = buildDir

CPPOBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.cpp=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILDDIR})

clean:
	$(shell rm -rf $(BUILDDIR))
	$(shell del ${BUILDDIR})

$(CPPOBJS): $(BUILDDIR)/%.o : %.cpp
	$(CPP) $(CPP_INC) -c $< -o $@

build: $(CPPOBJS)
	$(CPP) $(CPP_INC) -o $(BUILDDIR)/$(TARGET) $^

.PHONY: clean createdirs build

.SUFFIXES: .cpp .h .o