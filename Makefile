all: gitdeps
	mkdir -p build
	cd build && cmake ../ && make

gitdeps:
	simple-deps --config arduino-libraries

clean:
	rm -rf build
