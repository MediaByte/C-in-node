#include <node.h>

namespace demo {

	void Method(const v8::FunctionCallbackInfo<v8::Value>& args) {
	  v8::Isolate* isolate = args.GetIsolate();

	  //Return Value here:
	   auto communication = "Hello World";


	   args.GetReturnValue().Set(v8::String::NewFromUtf8(isolate, communication, v8::NewStringType::kNormal).ToLocalChecked());

	}

	void Initialize(v8::Local<v8::Object> exports) {

	  NODE_SET_METHOD(exports, "sayHello", Method);
	  
	}

	NODE_MODULE(NODE_GYP_MODULE_NAME, Initialize)

}