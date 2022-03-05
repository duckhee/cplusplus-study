CPP = g++

SRCS = RecatngleFaultFind.cpp Point.cpp Rectangle.cpp 

TARGET = Rectangle

CPP_EXTRA_INC = Point.hpp Rectangle.hpp

CPP_INC = $(patsubst %,-I%,${CPP_EXTRA_INC})

BUILDDIR = buildDir

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

.PHONY: clean createdirs build

.SUFFIXES: .cpp .o .hpp