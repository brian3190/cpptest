#include <node.h>

void Sum(const v8::FunctionCallbackInfo<v8::Value>& args) {
  v8::Isolate* isolate = args.GetIsolate();

  int i;
  double a = 3.1519426, b = 2.718;

  for ( i= 0; i< 1000000000; ++i) {
    a += b;
  }

  auto total = v8::Number::New(isolate, a);

  args.GetReturnValue().Set(total);
}

void Hello(const v8::FunctionCallbackInfo<v8::Value>& args) {
  v8::Isolate* isolate = args.GetIsolate();

  auto message = v8::String::NewFromUtf8(isolate, "Hello World!");
  args.GetReturnValue().Set(message);
}

void Initialize(v8::Local<v8::Object> exports) {
  NODE_SET_METHOD(exports, "sum", Sum);
  NODE_SET_METHOD(exports, "hello", Hello);
}

NODE_MODULE(addon, Initialize)
