#include <hxcpp.h>

#ifndef INCLUDED_haxe_crypto_Adler32
#include <haxe/crypto/Adler32.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_zip__InflateImpl_Window
#include <haxe/zip/_InflateImpl/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c56ff62bdcecb4fa_37_new,"haxe.zip._InflateImpl.Window","new",0x88adb9f3,"haxe.zip._InflateImpl.Window.new","/home/david/bin/haxe/std/haxe/zip/InflateImpl.hx",37,0xaaf2d33d)
HX_LOCAL_STACK_FRAME(_hx_pos_c56ff62bdcecb4fa_44_slide,"haxe.zip._InflateImpl.Window","slide",0x409d7984,"haxe.zip._InflateImpl.Window.slide","/home/david/bin/haxe/std/haxe/zip/InflateImpl.hx",44,0xaaf2d33d)
HX_LOCAL_STACK_FRAME(_hx_pos_c56ff62bdcecb4fa_53_addBytes,"haxe.zip._InflateImpl.Window","addBytes",0xb984b017,"haxe.zip._InflateImpl.Window.addBytes","/home/david/bin/haxe/std/haxe/zip/InflateImpl.hx",53,0xaaf2d33d)
HX_LOCAL_STACK_FRAME(_hx_pos_c56ff62bdcecb4fa_60_addByte,"haxe.zip._InflateImpl.Window","addByte",0xa74a10dc,"haxe.zip._InflateImpl.Window.addByte","/home/david/bin/haxe/std/haxe/zip/InflateImpl.hx",60,0xaaf2d33d)
HX_LOCAL_STACK_FRAME(_hx_pos_c56ff62bdcecb4fa_68_getLastChar,"haxe.zip._InflateImpl.Window","getLastChar",0xdd866f95,"haxe.zip._InflateImpl.Window.getLastChar","/home/david/bin/haxe/std/haxe/zip/InflateImpl.hx",68,0xaaf2d33d)
HX_LOCAL_STACK_FRAME(_hx_pos_c56ff62bdcecb4fa_72_available,"haxe.zip._InflateImpl.Window","available",0x3285339c,"haxe.zip._InflateImpl.Window.available","/home/david/bin/haxe/std/haxe/zip/InflateImpl.hx",72,0xaaf2d33d)
HX_LOCAL_STACK_FRAME(_hx_pos_c56ff62bdcecb4fa_75_checksum,"haxe.zip._InflateImpl.Window","checksum",0x2f923f50,"haxe.zip._InflateImpl.Window.checksum","/home/david/bin/haxe/std/haxe/zip/InflateImpl.hx",75,0xaaf2d33d)
namespace haxe{
namespace zip{
namespace _InflateImpl{

void Window_obj::__construct(bool hasCrc){
            	HX_GC_STACKFRAME(&_hx_pos_c56ff62bdcecb4fa_37_new)
HXLINE(  38)		this->buffer = ::haxe::io::Bytes_obj::alloc(65536);
HXLINE(  39)		this->pos = 0;
HXLINE(  40)		if (hasCrc) {
HXLINE(  41)			this->crc =  ::haxe::crypto::Adler32_obj::__alloc( HX_CTX );
            		}
            	}

Dynamic Window_obj::__CreateEmpty() { return new Window_obj; }

void *Window_obj::_hx_vtable = 0;

Dynamic Window_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Window_obj > _hx_result = new Window_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Window_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1515906b;
}

void Window_obj::slide(){
            	HX_STACKFRAME(&_hx_pos_c56ff62bdcecb4fa_44_slide)
HXLINE(  45)		if (::hx::IsNotNull( this->crc )) {
HXLINE(  46)			this->crc->update(this->buffer,0,32768);
            		}
HXLINE(  47)		 ::haxe::io::Bytes b = ::haxe::io::Bytes_obj::alloc(65536);
HXLINE(  48)		 ::haxe::zip::_InflateImpl::Window _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  48)		_hx_tmp->pos = (_hx_tmp->pos - 32768);
HXLINE(  49)		b->blit(0,this->buffer,32768,this->pos);
HXLINE(  50)		this->buffer = b;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,slide,(void))

void Window_obj::addBytes( ::haxe::io::Bytes b,int p,int len){
            	HX_STACKFRAME(&_hx_pos_c56ff62bdcecb4fa_53_addBytes)
HXLINE(  54)		if (((this->pos + len) > 65536)) {
HXLINE(  55)			this->slide();
            		}
HXLINE(  56)		this->buffer->blit(this->pos,b,p,len);
HXLINE(  57)		 ::haxe::zip::_InflateImpl::Window _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  57)		_hx_tmp->pos = (_hx_tmp->pos + len);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Window_obj,addBytes,(void))

void Window_obj::addByte(int c){
            	HX_STACKFRAME(&_hx_pos_c56ff62bdcecb4fa_60_addByte)
HXLINE(  61)		if ((this->pos == 65536)) {
HXLINE(  62)			this->slide();
            		}
HXLINE(  63)		this->buffer->b[this->pos] = ( (unsigned char)(c) );
HXLINE(  64)		this->pos++;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,addByte,(void))

int Window_obj::getLastChar(){
            	HX_STACKFRAME(&_hx_pos_c56ff62bdcecb4fa_68_getLastChar)
HXDLIN(  68)		return ( (int)(this->buffer->b->__get((this->pos - 1))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,getLastChar,return )

int Window_obj::available(){
            	HX_STACKFRAME(&_hx_pos_c56ff62bdcecb4fa_72_available)
HXDLIN(  72)		return this->pos;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,available,return )

 ::haxe::crypto::Adler32 Window_obj::checksum(){
            	HX_STACKFRAME(&_hx_pos_c56ff62bdcecb4fa_75_checksum)
HXLINE(  76)		if (::hx::IsNotNull( this->crc )) {
HXLINE(  77)			this->crc->update(this->buffer,0,this->pos);
            		}
HXLINE(  78)		return this->crc;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,checksum,return )


::hx::ObjectPtr< Window_obj > Window_obj::__new(bool hasCrc) {
	::hx::ObjectPtr< Window_obj > __this = new Window_obj();
	__this->__construct(hasCrc);
	return __this;
}

::hx::ObjectPtr< Window_obj > Window_obj::__alloc(::hx::Ctx *_hx_ctx,bool hasCrc) {
	Window_obj *__this = (Window_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Window_obj), true, "haxe.zip._InflateImpl.Window"));
	*(void **)__this = Window_obj::_hx_vtable;
	__this->__construct(hasCrc);
	return __this;
}

Window_obj::Window_obj()
{
}

void Window_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Window);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(crc,"crc");
	HX_MARK_END_CLASS();
}

void Window_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(crc,"crc");
}

::hx::Val Window_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return ::hx::Val( pos ); }
		if (HX_FIELD_EQ(inName,"crc") ) { return ::hx::Val( crc ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"slide") ) { return ::hx::Val( slide_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return ::hx::Val( buffer ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addByte") ) { return ::hx::Val( addByte_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addBytes") ) { return ::hx::Val( addBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"checksum") ) { return ::hx::Val( checksum_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"available") ) { return ::hx::Val( available_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getLastChar") ) { return ::hx::Val( getLastChar_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Window_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"crc") ) { crc=inValue.Cast<  ::haxe::crypto::Adler32 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Window_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("buffer",00,bd,94,d0));
	outFields->push(HX_("pos",94,5d,55,00));
	outFields->push(HX_("crc",d4,82,4b,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Window_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(Window_obj,buffer),HX_("buffer",00,bd,94,d0)},
	{::hx::fsInt,(int)offsetof(Window_obj,pos),HX_("pos",94,5d,55,00)},
	{::hx::fsObject /*  ::haxe::crypto::Adler32 */ ,(int)offsetof(Window_obj,crc),HX_("crc",d4,82,4b,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Window_obj_sStaticStorageInfo = 0;
#endif

static ::String Window_obj_sMemberFields[] = {
	HX_("buffer",00,bd,94,d0),
	HX_("pos",94,5d,55,00),
	HX_("crc",d4,82,4b,00),
	HX_("slide",31,c5,c7,7e),
	HX_("addBytes",8a,2e,f5,36),
	HX_("addByte",c9,61,60,7d),
	HX_("getLastChar",02,3b,fc,fa),
	HX_("available",c9,59,83,77),
	HX_("checksum",c3,bd,02,ad),
	::String(null()) };

::hx::Class Window_obj::__mClass;

void Window_obj::__register()
{
	Window_obj _hx_dummy;
	Window_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.zip._InflateImpl.Window",81,44,4f,10);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Window_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Window_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Window_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Window_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace zip
} // end namespace _InflateImpl
