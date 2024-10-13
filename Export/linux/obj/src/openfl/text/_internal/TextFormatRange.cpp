#include <hxcpp.h>

#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextFormatRange
#include <openfl/text/_internal/TextFormatRange.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_424f5152d3d777c6_17_new,"openfl.text._internal.TextFormatRange","new",0xe9f64276,"openfl.text._internal.TextFormatRange.new","openfl/text/_internal/TextFormatRange.hx",17,0x7efc7e5b)
namespace openfl{
namespace text{
namespace _internal{

void TextFormatRange_obj::__construct( ::openfl::text::TextFormat format,int start,int end){
            	HX_STACKFRAME(&_hx_pos_424f5152d3d777c6_17_new)
HXLINE(  18)		this->format = format;
HXLINE(  19)		this->start = start;
HXLINE(  20)		this->end = end;
            	}

Dynamic TextFormatRange_obj::__CreateEmpty() { return new TextFormatRange_obj; }

void *TextFormatRange_obj::_hx_vtable = 0;

Dynamic TextFormatRange_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextFormatRange_obj > _hx_result = new TextFormatRange_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool TextFormatRange_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0f35b45a;
}


::hx::ObjectPtr< TextFormatRange_obj > TextFormatRange_obj::__new( ::openfl::text::TextFormat format,int start,int end) {
	::hx::ObjectPtr< TextFormatRange_obj > __this = new TextFormatRange_obj();
	__this->__construct(format,start,end);
	return __this;
}

::hx::ObjectPtr< TextFormatRange_obj > TextFormatRange_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::text::TextFormat format,int start,int end) {
	TextFormatRange_obj *__this = (TextFormatRange_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextFormatRange_obj), true, "openfl.text._internal.TextFormatRange"));
	*(void **)__this = TextFormatRange_obj::_hx_vtable;
	__this->__construct(format,start,end);
	return __this;
}

TextFormatRange_obj::TextFormatRange_obj()
{
}

void TextFormatRange_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextFormatRange);
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_END_CLASS();
}

void TextFormatRange_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(start,"start");
}

::hx::Val TextFormatRange_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return ::hx::Val( end ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return ::hx::Val( format ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TextFormatRange_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextFormatRange_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("end",db,03,4d,00));
	outFields->push(HX_("format",37,8f,8e,fd));
	outFields->push(HX_("start",62,74,0b,84));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextFormatRange_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(TextFormatRange_obj,end),HX_("end",db,03,4d,00)},
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(int)offsetof(TextFormatRange_obj,format),HX_("format",37,8f,8e,fd)},
	{::hx::fsInt,(int)offsetof(TextFormatRange_obj,start),HX_("start",62,74,0b,84)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TextFormatRange_obj_sStaticStorageInfo = 0;
#endif

static ::String TextFormatRange_obj_sMemberFields[] = {
	HX_("end",db,03,4d,00),
	HX_("format",37,8f,8e,fd),
	HX_("start",62,74,0b,84),
	::String(null()) };

::hx::Class TextFormatRange_obj::__mClass;

void TextFormatRange_obj::__register()
{
	TextFormatRange_obj _hx_dummy;
	TextFormatRange_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.text._internal.TextFormatRange",84,8f,62,a4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextFormatRange_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextFormatRange_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextFormatRange_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextFormatRange_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace text
} // end namespace _internal
