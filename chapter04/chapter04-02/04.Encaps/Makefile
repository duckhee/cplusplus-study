CPP = g++

SRCS = Encaps2.cpp

BUILDDIR = buildDir

TARGET = Encaps

CPPOBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.cpp=.o))

C_EXTRAINC =

CPP_INC = $(patsubst %,-I%, $(C_EXTRAINC))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILDDIR})

build: $(CPPOBJS)
	$(CPP) $(CPP_INC) -o $(BUILDDIR)/$(TARGET) $^

$(CPPOBJS): $(BUILDDIR)/%.o : %.cpp
	$(CPP)  -c $< -o $@

clean:
	$(shell rm -rf ${BUILDDIR})
	$(shell del ${BUILDDIR})

.SUFFIXES: .cpp .o .hpp

.PHONY: clean createdirs build
