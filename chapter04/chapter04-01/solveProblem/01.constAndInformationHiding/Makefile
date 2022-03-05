CPP = g++

SRCS = FruitBuyer.cpp FruitSeller.cpp main.cpp

TARGET = FruitMain

BUILDDIR = buildDir

CPP_EXTRAINC = FruitBuyer.hpp FruitSeller.hpp

CPP_INC = $(patsubst %,-I%,$(CPP_EXTRAINC))

CPPOBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.cpp=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILDDIR})

clean:
	$(shell rm -rf ${BUILDDIR})
	$(shell del ${BUILDDIR})

$(CPPOBJS): $(BUILDDIR)/%.o : %.cpp
	$(CPP) $(CPP_INC) -c $< -o $@

build: $(CPPOBJS)
	$(CPP) $(CPP_INC) -o $(BUILDDIR)/$(TARGET) $^

.SUFFIXES: .cpp .o .hpp

.PHONY: clean createdirs build