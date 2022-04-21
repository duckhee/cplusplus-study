CPP = g++

SRCS = PointThis.cpp

TARGET = PointThis

BUILDDIR = buildDir

CPPOBJS = $(addprefix $(BUILDDIR)/, ${SRCS:.cpp=.o})

all: clean createdirs build

CPP_EXTRA = 

CPP_INC = $(patsubst %,-I%, ${CPP_EXTRA})

createdirs:
	$(shell mkdir ${BUILDDIR})

build: $(CPPOBJS)
	$(CPP) $(CPP_INC) -o $(BUILDDIR)/$(TARGET) $^

$(CPPOBJS): $(BUILDDIR)/%.o : %.cpp
	$(CPP) $(CPP_INC) -c $< -o $@

clean:
	$(shell rm -rf ${BUILDDIR})
	$(shell del ${BUILDDIR})

.PHONEY: clean createdirs build

.SUFFIXES: .cpp .o