CPP = g++

SRCS = stdCppFunc.cpp

TARGET = stdCppFunc

BUILDDIR = buildDir

CPPFLAGS = -lm

CPPOBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.cpp=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILDDIR})

clean:
	$(shell rm -rf ${BUILDDIR})
	$(shell del ${BUILDDIR})

build: $(CPPOBJS)
	$(CPP) $(CPPFLAGS) -o $(BUILDDIR)/$(TARGET) $^

$(CPPOBJS): $(BUILDDIR)/%.o : %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

.PHONY: clean createdirs build

.SUFFIXES: .cpp .o