#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeHTTPRequest
#include <lime/_internal/backend/native/NativeHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise
#include <lime/app/Promise.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequestErrorResponse
#include <lime/net/_HTTPRequestErrorResponse.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_Bytes
#include <lime/net/_HTTPRequest_Bytes.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d0a88ab7a13f72d7_90_new,"lime.net._HTTPRequest_Bytes","new",0xc45547d0,"lime.net._HTTPRequest_Bytes.new","lime/net/HTTPRequest.hx",90,0x339db723)
HX_LOCAL_STACK_FRAME(_hx_pos_d0a88ab7a13f72d7_95_fromBytes,"lime.net._HTTPRequest_Bytes","fromBytes",0x58799e11,"lime.net._HTTPRequest_Bytes.fromBytes","lime/net/HTTPRequest.hx",95,0x339db723)
HX_LOCAL_STACK_FRAME(_hx_pos_d0a88ab7a13f72d7_110_load,"lime.net._HTTPRequest_Bytes","load",0x04fea4b6,"lime.net._HTTPRequest_Bytes.load","lime/net/HTTPRequest.hx",110,0x339db723)
HX_LOCAL_STACK_FRAME(_hx_pos_d0a88ab7a13f72d7_116_load,"lime.net._HTTPRequest_Bytes","load",0x04fea4b6,"lime.net._HTTPRequest_Bytes.load","lime/net/HTTPRequest.hx",116,0x339db723)
HX_LOCAL_STACK_FRAME(_hx_pos_d0a88ab7a13f72d7_99_load,"lime.net._HTTPRequest_Bytes","load",0x04fea4b6,"lime.net._HTTPRequest_Bytes.load","lime/net/HTTPRequest.hx",99,0x339db723)
namespace lime{
namespace net{

void _HTTPRequest_Bytes_obj::__construct(::String uri){
            	HX_STACKFRAME(&_hx_pos_d0a88ab7a13f72d7_90_new)
HXDLIN(  90)		super::__construct(uri);
            	}

Dynamic _HTTPRequest_Bytes_obj::__CreateEmpty() { return new _HTTPRequest_Bytes_obj; }

void *_HTTPRequest_Bytes_obj::_hx_vtable = 0;

Dynamic _HTTPRequest_Bytes_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< _HTTPRequest_Bytes_obj > _hx_result = new _HTTPRequest_Bytes_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool _HTTPRequest_Bytes_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x09b24b15) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x09b24b15;
	} else {
		return inClassId==(int)0x7f4deb50;
	}
}

 ::Dynamic _HTTPRequest_Bytes_obj::fromBytes( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_d0a88ab7a13f72d7_95_fromBytes)
HXDLIN(  95)		return bytes;
            	}


HX_DEFINE_DYNAMIC_FUNC1(_HTTPRequest_Bytes_obj,fromBytes,return )

 ::lime::app::Future _HTTPRequest_Bytes_obj::load(::String uri){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::lime::net::_HTTPRequest_Bytes,_gthis, ::lime::app::Promise,promise) HXARGC(1)
            		void _hx_run( ::lime::net::_HTTPRequestErrorResponse errorResponse){
            			HX_GC_STACKFRAME(&_hx_pos_d0a88ab7a13f72d7_110_load)
HXLINE( 111)			_gthis->responseData = errorResponse->responseData;
HXLINE( 112)			promise->error(errorResponse->error);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::lime::net::_HTTPRequest_Bytes,_gthis, ::lime::app::Promise,promise) HXARGC(1)
            		void _hx_run( ::haxe::io::Bytes bytes){
            			HX_GC_STACKFRAME(&_hx_pos_d0a88ab7a13f72d7_116_load)
HXLINE( 117)			_gthis->responseData = _gthis->fromBytes(bytes);
HXLINE( 118)			promise->complete(_gthis->responseData);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_d0a88ab7a13f72d7_99_load)
HXDLIN(  99)		 ::lime::net::_HTTPRequest_Bytes _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 100)		if (::hx::IsNotNull( uri )) {
HXLINE( 102)			this->uri = uri;
            		}
HXLINE( 105)		 ::lime::app::Promise promise =  ::lime::app::Promise_obj::__alloc( HX_CTX );
HXLINE( 106)		 ::lime::app::Future future = this->_hx___backend->loadData(this->uri,null());
HXLINE( 108)		future->onProgress(promise->progress_dyn());
HXLINE( 109)		future->onError( ::Dynamic(new _hx_Closure_0(_gthis,promise)));
HXLINE( 115)		future->onComplete( ::Dynamic(new _hx_Closure_1(_gthis,promise)));
HXLINE( 121)		return promise->future;
            	}



::hx::ObjectPtr< _HTTPRequest_Bytes_obj > _HTTPRequest_Bytes_obj::__new(::String uri) {
	::hx::ObjectPtr< _HTTPRequest_Bytes_obj > __this = new _HTTPRequest_Bytes_obj();
	__this->__construct(uri);
	return __this;
}

::hx::ObjectPtr< _HTTPRequest_Bytes_obj > _HTTPRequest_Bytes_obj::__alloc(::hx::Ctx *_hx_ctx,::String uri) {
	_HTTPRequest_Bytes_obj *__this = (_HTTPRequest_Bytes_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(_HTTPRequest_Bytes_obj), true, "lime.net._HTTPRequest_Bytes"));
	*(void **)__this = _HTTPRequest_Bytes_obj::_hx_vtable;
	__this->__construct(uri);
	return __this;
}

_HTTPRequest_Bytes_obj::_HTTPRequest_Bytes_obj()
{
}

::hx::Val _HTTPRequest_Bytes_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { return ::hx::Val( fromBytes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *_HTTPRequest_Bytes_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *_HTTPRequest_Bytes_obj_sStaticStorageInfo = 0;
#endif

static ::String _HTTPRequest_Bytes_obj_sMemberFields[] = {
	HX_("fromBytes",a1,f2,20,72),
	HX_("load",26,9a,b7,47),
	::String(null()) };

::hx::Class _HTTPRequest_Bytes_obj::__mClass;

void _HTTPRequest_Bytes_obj::__register()
{
	_HTTPRequest_Bytes_obj _hx_dummy;
	_HTTPRequest_Bytes_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.net._HTTPRequest_Bytes",de,5f,09,09);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(_HTTPRequest_Bytes_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< _HTTPRequest_Bytes_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = _HTTPRequest_Bytes_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = _HTTPRequest_Bytes_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace net
