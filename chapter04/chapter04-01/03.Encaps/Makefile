CPP = g++

SRCS = Encaps.cpp

TARGET = Encaps

BUILDDIR = buildDir

CPPOBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.cpp=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILDDIR})

clean:
	$(shell rm -rf ${BUILDDIR})
	$(shell del ${BUILDDIR})

$(CPPOBJS): $(BUILDDIR)/%.o : %.cpp
	$(CPP) -c $< -o $@

build: $(CPPOBJS)
	$(CPP) -o $(BUILDDIR)/$(TARGET) $^

.SUFFIXES: .cpp .o
.PHONY: clean createdirs build