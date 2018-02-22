valgrind --tool=memcheck --leak-check=full  --log-file=mem.cpp.log.%p ./mem
g++ -g mem.cpp -o mem -ltcmalloc_debug
