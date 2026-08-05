cmake -B build -DBUILD_TESTS=ON
cmake --build build
cd build && ctest --output-on-failure
