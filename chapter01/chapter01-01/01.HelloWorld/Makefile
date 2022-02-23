CPP = g++

SRCS = HelloWorld.cpp

TARGET = HelloWorld

BUILDDIR = buildDir

CPPOBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.cpp=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILDDIR})

clean:
	$(shell rm -rf ${BUILDDIR})
	$(shell del ${BUILDDIR})

$(CPPOBJS): ${BUILDDIR}/%.o : %.cpp
	$(CPP) -o $@ -c $<

build: $(CPPOBJS)
	$(CPP) -o ${BUILDDIR}/$(TARGET) $^