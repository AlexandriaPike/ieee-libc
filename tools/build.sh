# Usage: ./tools/build.sh gcc $(pwd)/system-root

# Build and install ieee-libc
make clean
CC="$1" ./configure --prefix="${2}"
CC="$1" make
make install

cd "${2}"

# retrieve and build ieee-libc-test (passing it two compilers(libc) to compare)
git clone https://github.com/ieee-libc/ieee-libc-test
./ieee-libc-test/build.sh "${1}" "${2}/bin/compiler"


