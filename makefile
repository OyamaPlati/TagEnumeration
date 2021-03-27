driver.exe: tagEnumeration.o driver.o
	g++ tagEnumeration.o driver.o -o driver.exe -std=c++2a
tagEnumeration.o: tagEnumeration.cpp
	g++ -c tagEnumeration.cpp -o tagEnumeration.o -std=c++2a
driver.o: driver.cpp
	g++ -c driver.cpp -o driver.o -std=c++2a
run:
	./driver.exe $(argument)
clean:
	rm *.o driver.exe 
