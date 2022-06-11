MODULES = display read_image
HEADERS = $(foreach mod, $(MODULES), $(mod).hpp)
SOURCES = $(foreach mod, $(MODULES), $(mod).cpp)
OBJECTS = $(foreach mod, $(MODULES), $(mod).o)

%.o : %.cpp $(HEADERS)
	g++ -c -o $@ $<

read_ticket_image_test: test.o $(OBJECTS)
	g++ `pkg-config --libs opencv4` -o read_ticket_image_test test.o $(OBJECTS)