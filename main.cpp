#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;
#include "oolua/oolua.h"
void say(char const* input) {
    printf("%s\n", input);
}

void say2(string strBig){

  //  cout<<strBig.c_str()<<endl;
    printf("%s\n", strBig.c_str());
}
int add(int a,int b){

    return a+b;
}
OOLUA_CFUNC(say, l_say);
OOLUA_CFUNC(add, l_add);
void hello_minimalist_function() {
    using namespace OOLUA; //NOLINT(build/namespaces)
    Script vm;
    set_global(vm, "say", l_say);
    set_global(vm, "add", l_add);
    run_chunk(vm, "say('Hello Lua')");

    int a=run_chunk(vm, "add(1,2)");
}

int main(int argc, char const *argv[]) {

     say2("dd");
  //  hello_minimalist_function();
    return 0;
}