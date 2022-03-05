CPP = g++

SRCS = RacingCar.cpp

TARGET = RacingCar

BUILDDIR = buildDir

CPPOBJS = $(addprefix ${BUILDDIR}/, ${SRCS:.cpp=.o})

all: clean createdirs build

createdirs:
	$(shell mkdir $(BUILDDIR))

clean:
	$(shell rm -rf ${BUILDDIR})
	$(shell del ${BUILDDIR})

build: $(CPPOBJS)
	$(CPP) -o $(BUILDDIR)/$(TARGET) $^

$(CPPOBJS): $(BUILDDIR)/%.o : %.cpp
	$(CPP) -c $< -o $@

.PHONY: clean createdirs build
.SUFFIXES: .cpp .o
