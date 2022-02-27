CPP = g++

SRCS = standardFunction.cpp

TARGET = standardFunction

BUILDDIR = buildDir

CPPOBJS = $(addprefix ${BUILDDIR}/, ${SRCS:.cpp=.o})

all: clean createdirs build

clean:
	$(shell rm -rf ${BUILDDIR})
	$(shell del ${BUILDDIR})

createdirs:
	$(shell mkdir ${BUILDDIR})

build: $(CPPOBJS)
	$(CPP) -o $(BUILDDIR)/$(TARGET) $^

$(CPPOBJS): $(BUILDDIR)/%.o : %.cpp
	$(CPP) -c $< -o $@

.SUFFIXES: .cpp .o
.PHONY: clean createdirs build