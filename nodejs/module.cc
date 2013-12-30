#include <node.h>
#include <v8.h>

using namespace v8;

Handle<Value> Method(const Arguments& args) {
	HandleScope scope;
	
	//String::New("world!!!");	
	
	return scope.Close(String::New("world!!!"));
}

void init(Handle<Object> exports) {
  exports->Set(String::NewSymbol("module"),
      FunctionTemplate::New(Method)->GetFunction());
}

NODE_MODULE(module, init)

