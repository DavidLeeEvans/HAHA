#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_openfl_desktop_Icon
#include <openfl/desktop/Icon.h>
#endif
#ifndef INCLUDED_openfl_desktop_InteractiveIcon
#include <openfl/desktop/InteractiveIcon.h>
#endif
#ifndef INCLUDED_openfl_desktop_NativeApplication
#include <openfl/desktop/NativeApplication.h>
#endif
#ifndef INCLUDED_openfl_display_Application
#include <openfl/display/Application.h>
#endif
#ifndef INCLUDED_openfl_display_NativeWindow
#include <openfl/display/NativeWindow.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_Lib
#include <openfl/utils/_internal/Lib.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d993c3fd7589a798_21_new,"openfl.desktop.NativeApplication","new",0xb79ecadb,"openfl.desktop.NativeApplication.new","openfl/desktop/NativeApplication.hx",21,0xc0103ef7)
HX_LOCAL_STACK_FRAME(_hx_pos_d993c3fd7589a798_179_get_activeWindow,"openfl.desktop.NativeApplication","get_activeWindow",0x866ea384,"openfl.desktop.NativeApplication.get_activeWindow","openfl/desktop/NativeApplication.hx",179,0xc0103ef7)
HX_LOCAL_STACK_FRAME(_hx_pos_d993c3fd7589a798_191_get_applicationID,"openfl.desktop.NativeApplication","get_applicationID",0xb1dea63d,"openfl.desktop.NativeApplication.get_applicationID","openfl/desktop/NativeApplication.hx",191,0xc0103ef7)
HX_LOCAL_STACK_FRAME(_hx_pos_d993c3fd7589a798_244_get_isCompiledAOT,"openfl.desktop.NativeApplication","get_isCompiledAOT",0x370bdffd,"openfl.desktop.NativeApplication.get_isCompiledAOT","openfl/desktop/NativeApplication.hx",244,0xc0103ef7)
HX_LOCAL_STACK_FRAME(_hx_pos_d993c3fd7589a798_260_get_openedWindows,"openfl.desktop.NativeApplication","get_openedWindows",0x3ad181ec,"openfl.desktop.NativeApplication.get_openedWindows","openfl/desktop/NativeApplication.hx",260,0xc0103ef7)
HX_LOCAL_STACK_FRAME(_hx_pos_d993c3fd7589a798_315_exit,"openfl.desktop.NativeApplication","exit",0xed6e2843,"openfl.desktop.NativeApplication.exit","openfl/desktop/NativeApplication.hx",315,0xc0103ef7)
HX_LOCAL_STACK_FRAME(_hx_pos_d993c3fd7589a798_336_isSetAsDefaultApplication,"openfl.desktop.NativeApplication","isSetAsDefaultApplication",0x28dfca54,"openfl.desktop.NativeApplication.isSetAsDefaultApplication","openfl/desktop/NativeApplication.hx",336,0xc0103ef7)
HX_LOCAL_STACK_FRAME(_hx_pos_d993c3fd7589a798_348_removeAsDefaultApplication,"openfl.desktop.NativeApplication","removeAsDefaultApplication",0x23e7e4ea,"openfl.desktop.NativeApplication.removeAsDefaultApplication","openfl/desktop/NativeApplication.hx",348,0xc0103ef7)
HX_LOCAL_STACK_FRAME(_hx_pos_d993c3fd7589a798_359_setAsDefaultApplication,"openfl.desktop.NativeApplication","setAsDefaultApplication",0x046a4c5e,"openfl.desktop.NativeApplication.setAsDefaultApplication","openfl/desktop/NativeApplication.hx",359,0xc0103ef7)
HX_LOCAL_STACK_FRAME(_hx_pos_d993c3fd7589a798_31_get_nativeApplication,"openfl.desktop.NativeApplication","get_nativeApplication",0x4258fb0b,"openfl.desktop.NativeApplication.get_nativeApplication","openfl/desktop/NativeApplication.hx",31,0xc0103ef7)
HX_LOCAL_STACK_FRAME(_hx_pos_d993c3fd7589a798_59_get_supportsDefaultApplication,"openfl.desktop.NativeApplication","get_supportsDefaultApplication",0x19079c61,"openfl.desktop.NativeApplication.get_supportsDefaultApplication","openfl/desktop/NativeApplication.hx",59,0xc0103ef7)
HX_LOCAL_STACK_FRAME(_hx_pos_d993c3fd7589a798_83_get_supportsDockIcon,"openfl.desktop.NativeApplication","get_supportsDockIcon",0xa70a41de,"openfl.desktop.NativeApplication.get_supportsDockIcon","openfl/desktop/NativeApplication.hx",83,0xc0103ef7)
HX_LOCAL_STACK_FRAME(_hx_pos_d993c3fd7589a798_105_get_supportsMenu,"openfl.desktop.NativeApplication","get_supportsMenu",0xc9b9c671,"openfl.desktop.NativeApplication.get_supportsMenu","openfl/desktop/NativeApplication.hx",105,0xc0103ef7)
HX_LOCAL_STACK_FRAME(_hx_pos_d993c3fd7589a798_122_get_supportsStartAtLogin,"openfl.desktop.NativeApplication","get_supportsStartAtLogin",0x40bdaa06,"openfl.desktop.NativeApplication.get_supportsStartAtLogin","openfl/desktop/NativeApplication.hx",122,0xc0103ef7)
HX_LOCAL_STACK_FRAME(_hx_pos_d993c3fd7589a798_149_get_supportsSystemTrayIcon,"openfl.desktop.NativeApplication","get_supportsSystemTrayIcon",0xdb00b1f0,"openfl.desktop.NativeApplication.get_supportsSystemTrayIcon","openfl/desktop/NativeApplication.hx",149,0xc0103ef7)
namespace openfl{
namespace desktop{

void NativeApplication_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d993c3fd7589a798_21_new)
HXLINE( 247)		this->_hx___openedWindows = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 232)		this->icon = null();
HXLINE( 207)		this->autoExit = true;
HXLINE( 291)		super::__construct(null());
            	}

Dynamic NativeApplication_obj::__CreateEmpty() { return new NativeApplication_obj; }

void *NativeApplication_obj::_hx_vtable = 0;

Dynamic NativeApplication_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NativeApplication_obj > _hx_result = new NativeApplication_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NativeApplication_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x33ced195;
	}
}

 ::openfl::display::NativeWindow NativeApplication_obj::get_activeWindow(){
            	HX_STACKFRAME(&_hx_pos_d993c3fd7589a798_179_get_activeWindow)
HXDLIN( 179)		return this->_hx___activeWindow;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,get_activeWindow,return )

::String NativeApplication_obj::get_applicationID(){
            	HX_STACKFRAME(&_hx_pos_d993c3fd7589a798_191_get_applicationID)
HXDLIN( 191)		return ::openfl::utils::_internal::Lib_obj::application->meta->get_string(HX_("packageName",f1,04,ad,04));
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,get_applicationID,return )

bool NativeApplication_obj::get_isCompiledAOT(){
            	HX_STACKFRAME(&_hx_pos_d993c3fd7589a798_244_get_isCompiledAOT)
HXDLIN( 244)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,get_isCompiledAOT,return )

::Array< ::Dynamic> NativeApplication_obj::get_openedWindows(){
            	HX_STACKFRAME(&_hx_pos_d993c3fd7589a798_260_get_openedWindows)
HXDLIN( 260)		return this->_hx___openedWindows->copy();
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,get_openedWindows,return )

void NativeApplication_obj::exit(::hx::Null< int >  __o_code){
            		int code = __o_code.Default(0);
            	HX_STACKFRAME(&_hx_pos_d993c3fd7589a798_315_exit)
HXDLIN( 315)		::lime::_hx_system::System_obj::exit(code);
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeApplication_obj,exit,(void))

bool NativeApplication_obj::isSetAsDefaultApplication(::String extension){
            	HX_STACKFRAME(&_hx_pos_d993c3fd7589a798_336_isSetAsDefaultApplication)
HXDLIN( 336)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeApplication_obj,isSetAsDefaultApplication,return )

void NativeApplication_obj::removeAsDefaultApplication(::String extension){
            	HX_STACKFRAME(&_hx_pos_d993c3fd7589a798_348_removeAsDefaultApplication)
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeApplication_obj,removeAsDefaultApplication,(void))

void NativeApplication_obj::setAsDefaultApplication(::String extension){
            	HX_STACKFRAME(&_hx_pos_d993c3fd7589a798_359_setAsDefaultApplication)
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeApplication_obj,setAsDefaultApplication,(void))

 ::openfl::desktop::NativeApplication NativeApplication_obj::_hx___nativeApplication;

 ::openfl::desktop::NativeApplication NativeApplication_obj::get_nativeApplication(){
            	HX_GC_STACKFRAME(&_hx_pos_d993c3fd7589a798_31_get_nativeApplication)
HXLINE(  32)		if (::hx::IsNull( ::openfl::desktop::NativeApplication_obj::_hx___nativeApplication )) {
HXLINE(  34)			::openfl::desktop::NativeApplication_obj::_hx___nativeApplication =  ::openfl::desktop::NativeApplication_obj::__alloc( HX_CTX );
            		}
HXLINE(  37)		return ::openfl::desktop::NativeApplication_obj::_hx___nativeApplication;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,get_nativeApplication,return )

bool NativeApplication_obj::get_supportsDefaultApplication(){
            	HX_STACKFRAME(&_hx_pos_d993c3fd7589a798_59_get_supportsDefaultApplication)
HXDLIN(  59)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,get_supportsDefaultApplication,return )

bool NativeApplication_obj::get_supportsDockIcon(){
            	HX_STACKFRAME(&_hx_pos_d993c3fd7589a798_83_get_supportsDockIcon)
HXDLIN(  83)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,get_supportsDockIcon,return )

bool NativeApplication_obj::get_supportsMenu(){
            	HX_STACKFRAME(&_hx_pos_d993c3fd7589a798_105_get_supportsMenu)
HXDLIN( 105)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,get_supportsMenu,return )

bool NativeApplication_obj::get_supportsStartAtLogin(){
            	HX_STACKFRAME(&_hx_pos_d993c3fd7589a798_122_get_supportsStartAtLogin)
HXDLIN( 122)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,get_supportsStartAtLogin,return )

bool NativeApplication_obj::get_supportsSystemTrayIcon(){
            	HX_STACKFRAME(&_hx_pos_d993c3fd7589a798_149_get_supportsSystemTrayIcon)
HXDLIN( 149)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,get_supportsSystemTrayIcon,return )


::hx::ObjectPtr< NativeApplication_obj > NativeApplication_obj::__new() {
	::hx::ObjectPtr< NativeApplication_obj > __this = new NativeApplication_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< NativeApplication_obj > NativeApplication_obj::__alloc(::hx::Ctx *_hx_ctx) {
	NativeApplication_obj *__this = (NativeApplication_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NativeApplication_obj), true, "openfl.desktop.NativeApplication"));
	*(void **)__this = NativeApplication_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

NativeApplication_obj::NativeApplication_obj()
{
}

void NativeApplication_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeApplication);
	HX_MARK_MEMBER_NAME(_hx___activeWindow,"__activeWindow");
	HX_MARK_MEMBER_NAME(autoExit,"autoExit");
	HX_MARK_MEMBER_NAME(icon,"icon");
	HX_MARK_MEMBER_NAME(_hx___openedWindows,"__openedWindows");
	HX_MARK_MEMBER_NAME(startAtLogin,"startAtLogin");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NativeApplication_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___activeWindow,"__activeWindow");
	HX_VISIT_MEMBER_NAME(autoExit,"autoExit");
	HX_VISIT_MEMBER_NAME(icon,"icon");
	HX_VISIT_MEMBER_NAME(_hx___openedWindows,"__openedWindows");
	HX_VISIT_MEMBER_NAME(startAtLogin,"startAtLogin");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val NativeApplication_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { return ::hx::Val( icon ); }
		if (HX_FIELD_EQ(inName,"exit") ) { return ::hx::Val( exit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoExit") ) { return ::hx::Val( autoExit ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"activeWindow") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_activeWindow() ); }
		if (HX_FIELD_EQ(inName,"startAtLogin") ) { return ::hx::Val( startAtLogin ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"applicationID") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_applicationID() ); }
		if (HX_FIELD_EQ(inName,"isCompiledAOT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isCompiledAOT() ); }
		if (HX_FIELD_EQ(inName,"openedWindows") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_openedWindows() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__activeWindow") ) { return ::hx::Val( _hx___activeWindow ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__openedWindows") ) { return ::hx::Val( _hx___openedWindows ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_activeWindow") ) { return ::hx::Val( get_activeWindow_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_applicationID") ) { return ::hx::Val( get_applicationID_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_isCompiledAOT") ) { return ::hx::Val( get_isCompiledAOT_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_openedWindows") ) { return ::hx::Val( get_openedWindows_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"setAsDefaultApplication") ) { return ::hx::Val( setAsDefaultApplication_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"isSetAsDefaultApplication") ) { return ::hx::Val( isSetAsDefaultApplication_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"removeAsDefaultApplication") ) { return ::hx::Val( removeAsDefaultApplication_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool NativeApplication_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"supportsMenu") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_supportsMenu() ); return true; } }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"supportsDockIcon") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_supportsDockIcon() ); return true; } }
		if (HX_FIELD_EQ(inName,"get_supportsMenu") ) { outValue = get_supportsMenu_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nativeApplication") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_nativeApplication() ); return true; } }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__nativeApplication") ) { outValue = ( _hx___nativeApplication ); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_supportsDockIcon") ) { outValue = get_supportsDockIcon_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"supportsStartAtLogin") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_supportsStartAtLogin() ); return true; } }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_nativeApplication") ) { outValue = get_nativeApplication_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"supportsSystemTrayIcon") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_supportsSystemTrayIcon() ); return true; } }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_supportsStartAtLogin") ) { outValue = get_supportsStartAtLogin_dyn(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"supportsDefaultApplication") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_supportsDefaultApplication() ); return true; } }
		if (HX_FIELD_EQ(inName,"get_supportsSystemTrayIcon") ) { outValue = get_supportsSystemTrayIcon_dyn(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"get_supportsDefaultApplication") ) { outValue = get_supportsDefaultApplication_dyn(); return true; }
	}
	return false;
}

::hx::Val NativeApplication_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { icon=inValue.Cast<  ::openfl::desktop::InteractiveIcon >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoExit") ) { autoExit=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"startAtLogin") ) { startAtLogin=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__activeWindow") ) { _hx___activeWindow=inValue.Cast<  ::openfl::display::NativeWindow >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__openedWindows") ) { _hx___openedWindows=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NativeApplication_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"__nativeApplication") ) { _hx___nativeApplication=ioValue.Cast<  ::openfl::desktop::NativeApplication >(); return true; }
	}
	return false;
}

void NativeApplication_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__activeWindow",76,65,68,d3));
	outFields->push(HX_("activeWindow",56,e2,a7,b2));
	outFields->push(HX_("applicationID",2b,5f,bc,37));
	outFields->push(HX_("autoExit",2d,e6,43,26));
	outFields->push(HX_("icon",79,e7,b2,45));
	outFields->push(HX_("isCompiledAOT",eb,98,e9,bc));
	outFields->push(HX_("__openedWindows",ba,73,61,48));
	outFields->push(HX_("openedWindows",da,3a,af,c0));
	outFields->push(HX_("startAtLogin",34,07,d5,a0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NativeApplication_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::NativeWindow */ ,(int)offsetof(NativeApplication_obj,_hx___activeWindow),HX_("__activeWindow",76,65,68,d3)},
	{::hx::fsBool,(int)offsetof(NativeApplication_obj,autoExit),HX_("autoExit",2d,e6,43,26)},
	{::hx::fsObject /*  ::openfl::desktop::InteractiveIcon */ ,(int)offsetof(NativeApplication_obj,icon),HX_("icon",79,e7,b2,45)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(NativeApplication_obj,_hx___openedWindows),HX_("__openedWindows",ba,73,61,48)},
	{::hx::fsBool,(int)offsetof(NativeApplication_obj,startAtLogin),HX_("startAtLogin",34,07,d5,a0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo NativeApplication_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::desktop::NativeApplication */ ,(void *) &NativeApplication_obj::_hx___nativeApplication,HX_("__nativeApplication",d9,eb,c0,f1)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String NativeApplication_obj_sMemberFields[] = {
	HX_("__activeWindow",76,65,68,d3),
	HX_("get_activeWindow",df,ce,46,b7),
	HX_("get_applicationID",82,6a,2c,3e),
	HX_("autoExit",2d,e6,43,26),
	HX_("icon",79,e7,b2,45),
	HX_("get_isCompiledAOT",42,a4,59,c3),
	HX_("__openedWindows",ba,73,61,48),
	HX_("get_openedWindows",31,46,1f,c7),
	HX_("startAtLogin",34,07,d5,a0),
	HX_("exit",1e,f7,1d,43),
	HX_("isSetAsDefaultApplication",99,db,a2,f9),
	HX_("removeAsDefaultApplication",05,f0,d3,fd),
	HX_("setAsDefaultApplication",63,12,ac,ec),
	::String(null()) };

static void NativeApplication_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeApplication_obj::_hx___nativeApplication,"__nativeApplication");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NativeApplication_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::_hx___nativeApplication,"__nativeApplication");
};

#endif

::hx::Class NativeApplication_obj::__mClass;

static ::String NativeApplication_obj_sStaticFields[] = {
	HX_("__nativeApplication",d9,eb,c0,f1),
	HX_("get_nativeApplication",d0,c5,7e,bd),
	HX_("get_supportsDefaultApplication",fc,d0,26,4d),
	HX_("get_supportsDockIcon",b9,b6,4a,c4),
	HX_("get_supportsMenu",cc,f1,91,fa),
	HX_("get_supportsStartAtLogin",61,28,09,92),
	HX_("get_supportsSystemTrayIcon",0b,bd,ec,b4),
	::String(null())
};

void NativeApplication_obj::__register()
{
	NativeApplication_obj _hx_dummy;
	NativeApplication_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.desktop.NativeApplication",69,c1,5b,04);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NativeApplication_obj::__GetStatic;
	__mClass->mSetStaticField = &NativeApplication_obj::__SetStatic;
	__mClass->mMarkFunc = NativeApplication_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NativeApplication_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NativeApplication_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NativeApplication_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NativeApplication_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NativeApplication_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NativeApplication_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace desktop
