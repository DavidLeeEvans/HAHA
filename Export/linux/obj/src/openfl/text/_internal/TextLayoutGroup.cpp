#include <hxcpp.h>

#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text__internal_GlyphPosition
#include <openfl/text/_internal/GlyphPosition.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextLayoutGroup
#include <openfl/text/_internal/TextLayoutGroup.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ef40d10222b5b349_32_new,"openfl.text._internal.TextLayoutGroup","new",0x137b1325,"openfl.text._internal.TextLayoutGroup.new","openfl/text/_internal/TextLayoutGroup.hx",32,0xdd4e988c)
HX_LOCAL_STACK_FRAME(_hx_pos_ef40d10222b5b349_43_getAdvance,"openfl.text._internal.TextLayoutGroup","getAdvance",0xf3645e67,"openfl.text._internal.TextLayoutGroup.getAdvance","openfl/text/_internal/TextLayoutGroup.hx",43,0xdd4e988c)
HX_LOCAL_STACK_FRAME(_hx_pos_ef40d10222b5b349_12_boot,"openfl.text._internal.TextLayoutGroup","boot",0xf04eadcd,"openfl.text._internal.TextLayoutGroup.boot","openfl/text/_internal/TextLayoutGroup.hx",12,0xdd4e988c)
namespace openfl{
namespace text{
namespace _internal{

void TextLayoutGroup_obj::__construct( ::openfl::text::TextFormat format,int startIndex,int endIndex){
            	HX_STACKFRAME(&_hx_pos_ef40d10222b5b349_32_new)
HXLINE(  33)		this->format = format;
HXLINE(  34)		this->startIndex = startIndex;
HXLINE(  35)		this->endIndex = endIndex;
            	}

Dynamic TextLayoutGroup_obj::__CreateEmpty() { return new TextLayoutGroup_obj; }

void *TextLayoutGroup_obj::_hx_vtable = 0;

Dynamic TextLayoutGroup_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextLayoutGroup_obj > _hx_result = new TextLayoutGroup_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool TextLayoutGroup_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0a7cb6ed;
}

Float TextLayoutGroup_obj::getAdvance(int index){
            	HX_STACKFRAME(&_hx_pos_ef40d10222b5b349_43_getAdvance)
HXDLIN(  43)		bool _hx_tmp;
HXDLIN(  43)		if ((index >= 0)) {
HXDLIN(  43)			_hx_tmp = (index < this->positions->length);
            		}
            		else {
HXDLIN(  43)			_hx_tmp = false;
            		}
HXDLIN(  43)		if (_hx_tmp) {
HXDLIN(  43)			return this->positions->__get(index).StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
            		}
            		else {
HXDLIN(  43)			return ( (Float)(0) );
            		}
HXDLIN(  43)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextLayoutGroup_obj,getAdvance,return )


::hx::ObjectPtr< TextLayoutGroup_obj > TextLayoutGroup_obj::__new( ::openfl::text::TextFormat format,int startIndex,int endIndex) {
	::hx::ObjectPtr< TextLayoutGroup_obj > __this = new TextLayoutGroup_obj();
	__this->__construct(format,startIndex,endIndex);
	return __this;
}

::hx::ObjectPtr< TextLayoutGroup_obj > TextLayoutGroup_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::text::TextFormat format,int startIndex,int endIndex) {
	TextLayoutGroup_obj *__this = (TextLayoutGroup_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextLayoutGroup_obj), true, "openfl.text._internal.TextLayoutGroup"));
	*(void **)__this = TextLayoutGroup_obj::_hx_vtable;
	__this->__construct(format,startIndex,endIndex);
	return __this;
}

TextLayoutGroup_obj::TextLayoutGroup_obj()
{
}

void TextLayoutGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextLayoutGroup);
	HX_MARK_MEMBER_NAME(ascent,"ascent");
	HX_MARK_MEMBER_NAME(descent,"descent");
	HX_MARK_MEMBER_NAME(endIndex,"endIndex");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(leading,"leading");
	HX_MARK_MEMBER_NAME(lineIndex,"lineIndex");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(positions,"positions");
	HX_MARK_MEMBER_NAME(startIndex,"startIndex");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_END_CLASS();
}

void TextLayoutGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ascent,"ascent");
	HX_VISIT_MEMBER_NAME(descent,"descent");
	HX_VISIT_MEMBER_NAME(endIndex,"endIndex");
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(leading,"leading");
	HX_VISIT_MEMBER_NAME(lineIndex,"lineIndex");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(positions,"positions");
	HX_VISIT_MEMBER_NAME(startIndex,"startIndex");
	HX_VISIT_MEMBER_NAME(width,"width");
}

::hx::Val TextLayoutGroup_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ascent") ) { return ::hx::Val( ascent ); }
		if (HX_FIELD_EQ(inName,"format") ) { return ::hx::Val( format ); }
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descent") ) { return ::hx::Val( descent ); }
		if (HX_FIELD_EQ(inName,"leading") ) { return ::hx::Val( leading ); }
		if (HX_FIELD_EQ(inName,"offsetX") ) { return ::hx::Val( offsetX ); }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return ::hx::Val( offsetY ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endIndex") ) { return ::hx::Val( endIndex ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lineIndex") ) { return ::hx::Val( lineIndex ); }
		if (HX_FIELD_EQ(inName,"positions") ) { return ::hx::Val( positions ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startIndex") ) { return ::hx::Val( startIndex ); }
		if (HX_FIELD_EQ(inName,"getAdvance") ) { return ::hx::Val( getAdvance_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TextLayoutGroup_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ascent") ) { ascent=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descent") ) { descent=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leading") ) { leading=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endIndex") ) { endIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lineIndex") ) { lineIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"positions") ) { positions=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startIndex") ) { startIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextLayoutGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("ascent",5a,d9,6f,41));
	outFields->push(HX_("descent",3a,ae,3f,19));
	outFields->push(HX_("endIndex",37,2d,12,bc));
	outFields->push(HX_("format",37,8f,8e,fd));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("leading",c6,32,61,09));
	outFields->push(HX_("lineIndex",7e,9e,0f,05));
	outFields->push(HX_("offsetX",65,09,65,d7));
	outFields->push(HX_("offsetY",66,09,65,d7));
	outFields->push(HX_("positions",aa,f3,51,d0));
	outFields->push(HX_("startIndex",50,73,2b,da));
	outFields->push(HX_("width",06,b6,62,ca));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextLayoutGroup_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(TextLayoutGroup_obj,ascent),HX_("ascent",5a,d9,6f,41)},
	{::hx::fsFloat,(int)offsetof(TextLayoutGroup_obj,descent),HX_("descent",3a,ae,3f,19)},
	{::hx::fsInt,(int)offsetof(TextLayoutGroup_obj,endIndex),HX_("endIndex",37,2d,12,bc)},
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(int)offsetof(TextLayoutGroup_obj,format),HX_("format",37,8f,8e,fd)},
	{::hx::fsFloat,(int)offsetof(TextLayoutGroup_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsInt,(int)offsetof(TextLayoutGroup_obj,leading),HX_("leading",c6,32,61,09)},
	{::hx::fsInt,(int)offsetof(TextLayoutGroup_obj,lineIndex),HX_("lineIndex",7e,9e,0f,05)},
	{::hx::fsFloat,(int)offsetof(TextLayoutGroup_obj,offsetX),HX_("offsetX",65,09,65,d7)},
	{::hx::fsFloat,(int)offsetof(TextLayoutGroup_obj,offsetY),HX_("offsetY",66,09,65,d7)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TextLayoutGroup_obj,positions),HX_("positions",aa,f3,51,d0)},
	{::hx::fsInt,(int)offsetof(TextLayoutGroup_obj,startIndex),HX_("startIndex",50,73,2b,da)},
	{::hx::fsFloat,(int)offsetof(TextLayoutGroup_obj,width),HX_("width",06,b6,62,ca)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TextLayoutGroup_obj_sStaticStorageInfo = 0;
#endif

static ::String TextLayoutGroup_obj_sMemberFields[] = {
	HX_("ascent",5a,d9,6f,41),
	HX_("descent",3a,ae,3f,19),
	HX_("endIndex",37,2d,12,bc),
	HX_("format",37,8f,8e,fd),
	HX_("height",e7,07,4c,02),
	HX_("leading",c6,32,61,09),
	HX_("lineIndex",7e,9e,0f,05),
	HX_("offsetX",65,09,65,d7),
	HX_("offsetY",66,09,65,d7),
	HX_("positions",aa,f3,51,d0),
	HX_("startIndex",50,73,2b,da),
	HX_("width",06,b6,62,ca),
	HX_("getAdvance",8c,8e,6d,3e),
	::String(null()) };

::hx::Class TextLayoutGroup_obj::__mClass;

void TextLayoutGroup_obj::__register()
{
	TextLayoutGroup_obj _hx_dummy;
	TextLayoutGroup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.text._internal.TextLayoutGroup",b3,9c,07,52);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextLayoutGroup_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextLayoutGroup_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextLayoutGroup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextLayoutGroup_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TextLayoutGroup_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ef40d10222b5b349_12_boot)
HXDLIN(  12)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace text
} // end namespace _internal
