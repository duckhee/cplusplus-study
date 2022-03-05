CPP = g++

SRCS = Car.cpp RacingMain.cpp

CPP_EXINC = Car.h

CPP_INC = -I$(CPP_EXINC)

BUILDDIR = buildDir

CPPOBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.cpp=.o))

TARGET = RacingMain

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILDDIR})

clean:
	$(shell rm -rf ${BUILDDIR})
	$(shell del ${BUILDDIR})

$(CPPOBJS):$(BUILDDIR)/%.o : %.cpp
	$(CPP) $(CPP_INC) -c $< -o $@

build: $(CPPOBJS)
	$(CPP) $(CPP_INC) -o $(BUILDDIR)/$(TARGET) $^

.PHONY: clean createdirs build

.SUFFIXES: .cpp .h .o