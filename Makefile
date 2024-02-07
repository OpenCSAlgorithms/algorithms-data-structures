doc_folder = ./doc
build_folder = ./build
test_folder = ./tests

.PHONY: build test package docs clean

build:
	cmake -B $(build_folder)

test: build
	$(MAKE) -C $(build_folder)/$(test_folder)
	cd $(build_folder)/$(test_folder) && ctest

package: test
	$(MAKE) -C $(build_folder) package

docs:
	doxygen Doxyfile

clean:
	rm -r -f $(build_folder)
	rm -r -f $(doc_folder)