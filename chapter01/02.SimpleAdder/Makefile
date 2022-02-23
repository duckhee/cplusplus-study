CPP = g++

SRCS = SimpleAdder.cpp

TARGET = SimpleAdder

BUILDDIR = buildDir

CPPOBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.cpp=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILDDIR})

build: $(CPPOBJS)
	$(CPP) -o $(BUILDDIR)/${TARGET} $^

$(CPPOBJS): $(BUILDDIR)/%.o : %.cpp
	$(CPP) -o $@ -c $<

clean:
	$(shell rm -rf ${BUILDDIR})
	$(shell del ${BUILDDIR})

.PHONEY: clean createdirs build