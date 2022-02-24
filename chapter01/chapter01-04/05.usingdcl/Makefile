CPP = g++

SRCS = usingDcl.cpp

TARGET = usingDcl

BUILDDIR = buildDir

CPPOBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.cpp=.o))

all: clean createdirs build

clean:
	$(shell rm -rf $(BUILDDIR))
	$(shell del $(BUILDDIR))

createdirs:
	$(shell mkdir ${BUILDDIR})


build: $(CPPOBJS)
	$(CPP) -o $(BUILDDIR)/$(TARGET) $^

$(CPPOBJS): $(BUILDDIR)/%.o : %.cpp
	$(CPP) -c $< -o $@

.PHONY: clean createdirs build
.SUFFIXES: .cpp .o