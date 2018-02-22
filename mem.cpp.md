#compile cd gperftools-2.0 && ./configure --enable-frame-pointers && make
#valgrind --tool=memcheck --leak-check=full  --log-file=mem.cpp.log.%p ./mem
#g++ -g mem.cpp -o mem -ltcmalloc_debug
