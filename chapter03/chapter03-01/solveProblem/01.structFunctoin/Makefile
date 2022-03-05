CPP = g++

SRCS = main.cpp

TARGET = Main

BUILDDIR = buildDir

CPPOBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.cpp=.o))

all: clean createDirs build

createDirs:
	$(shell mkdir ${BUILDDIR})

clean:
	$(shell rm -rf ${BUILDDIR})
	$(shell del ${BUILDDIR})

build: $(CPPOBJS)
	$(CPP) -o $(BUILDDIR)/$(TARGET) $^

$(CPPOBJS): $(BUILDDIR)/%.o : %.cpp
	$(CPP) -c $< -o $@

.PHONY: clean createdirs build
.SUFFIXES: .cpp .o