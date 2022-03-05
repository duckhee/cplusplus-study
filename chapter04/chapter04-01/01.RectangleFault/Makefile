CPP = g++

SRCS = RectangleFault.cpp

TARGET = RectangleFault

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

.PHONY: clean createdirs build
.SUFFIXES: .cpp .o