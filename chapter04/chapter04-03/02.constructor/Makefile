CPP = g++

SRCS = constructor.cpp

BUILDDIR = buildDir

TARGET = constructor

CPPOBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.cpp=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir $(BUILDDIR))

build: $(CPPOBJS)
	$(CPP) -o $(BUILDDIR)/$(TARGET) $^

$(CPPOBJS): $(BUILDDIR)/%.o : %.cpp
	$(CPP) -c $< -o $@

clean:
	$(shell rm -rf ${BUILDDIR})
	$(shell del ${BUILDDIR})

.SUFFIXES: .cpp .o

.PHONY: clean createdirs build
