CPP = g++

SRCS = returnObjDeadTime.cpp

TARGET = returnObjDeadTime

BUILDDIR = buildDir

CPPOBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.cpp=.o))

CPP_EXTRA_INC = 

CPP_INC = $(patsubst %,-I%,$(CPP_EXTRA_INC))

all: clean createdirs build

createdirs:
	$(shell mkdir $(BUILDDIR))

$(CPPOBJS): $(BUILDDIR)/%.o : %.cpp
	$(CPP) $(CPP_INC) -c $< -o $@

build: $(CPPOBJS)
	$(CPP) $(CPP_INC) -o $(BUILDDIR)/$(TARGET) $^

clean:
	$(shell rm -rf ${BUILDDIR})
	$(shell del ${BUILDDIR})

.SUFFIXES: .cpp .o

.PHONEY: clean createdirs build