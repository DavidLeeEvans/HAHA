#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
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
#ifndef INCLUDED_lime_app__Event_Int_Void
#include <lime/app/_Event_Int_Void.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_system_CFFI
#include <lime/system/CFFI.h>
#endif
#ifndef INCLUDED_lime_system_Display
#include <lime/system/Display.h>
#endif
#ifndef INCLUDED_lime_system_DisplayMode
#include <lime/system/DisplayMode.h>
#endif
#ifndef INCLUDED_lime_system_Endian
#include <lime/system/Endian.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_197_exit,"lime.system.System","exit",0x19210697,"lime.system.System.exit","lime/system/System.hx",197,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_228_getDisplay,"lime.system.System","getDisplay",0x2e892085,"lime.system.System.getDisplay","lime/system/System.hx",228,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_335_getTimer,"lime.system.System","getTimer",0xb1bf8f48,"lime.system.System.getTimer","lime/system/System.hx",335,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_349_load,"lime.system.System","load",0x1dbaa99f,"lime.system.System.load","lime/system/System.hx",349,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_363_openFile,"lime.system.System","openFile",0x26aa6b5f,"lime.system.System.openFile","lime/system/System.hx",363,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_389_openURL,"lime.system.System","openURL",0x0840dfec,"lime.system.System.openURL","lime/system/System.hx",389,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_407___copyMissingFields,"lime.system.System","__copyMissingFields",0x05666311,"lime.system.System.__copyMissingFields","lime/system/System.hx",407,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_422___getDirectory,"lime.system.System","__getDirectory",0xc98892d0,"lime.system.System.__getDirectory","lime/system/System.hx",422,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_498___parseArguments,"lime.system.System","__parseArguments",0xf4d0dcbc,"lime.system.System.__parseArguments","lime/system/System.hx",498,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_598___parseBool,"lime.system.System","__parseBool",0x34d2e084,"lime.system.System.__parseBool","lime/system/System.hx",598,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_602___registerEntryPoint,"lime.system.System","__registerEntryPoint",0x78d55f5a,"lime.system.System.__registerEntryPoint","lime/system/System.hx",602,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_612___runProcess,"lime.system.System","__runProcess",0x7e9f5dfd,"lime.system.System.__runProcess","lime/system/System.hx",612,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_632_get_allowScreenTimeout,"lime.system.System","get_allowScreenTimeout",0x287e314e,"lime.system.System.get_allowScreenTimeout","lime/system/System.hx",632,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_641_set_allowScreenTimeout,"lime.system.System","set_allowScreenTimeout",0x5c29adc2,"lime.system.System.set_allowScreenTimeout","lime/system/System.hx",641,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_648_get_applicationDirectory,"lime.system.System","get_applicationDirectory",0xf6955c7f,"lime.system.System.get_applicationDirectory","lime/system/System.hx",648,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_658_get_applicationStorageDirectory,"lime.system.System","get_applicationStorageDirectory",0x34818fe0,"lime.system.System.get_applicationStorageDirectory","lime/system/System.hx",658,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_668_get_deviceModel,"lime.system.System","get_deviceModel",0x3a3e2ff1,"lime.system.System.get_deviceModel","lime/system/System.hx",668,0x6434b429)
static const ::String _hx_array_data_acbd8395_23[] = {
	HX_("/sys/devices/virtual/dmi/id/sys_vendor",98,f9,6d,89),
};
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_703_get_deviceVendor,"lime.system.System","get_deviceVendor",0x99fb9840,"lime.system.System.get_deviceVendor","lime/system/System.hx",703,0x6434b429)
static const ::String _hx_array_data_acbd8395_25[] = {
	HX_("/sys/devices/virtual/dmi/id/product_name",f9,ab,5b,06),
};
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_729_get_desktopDirectory,"lime.system.System","get_desktopDirectory",0x483b2773,"lime.system.System.get_desktopDirectory","lime/system/System.hx",729,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_739_get_documentsDirectory,"lime.system.System","get_documentsDirectory",0x4a6a8557,"lime.system.System.get_documentsDirectory","lime/system/System.hx",739,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_749_get_endianness,"lime.system.System","get_endianness",0x4df50bb4,"lime.system.System.get_endianness","lime/system/System.hx",749,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_770_get_fontsDirectory,"lime.system.System","get_fontsDirectory",0x8242b40b,"lime.system.System.get_fontsDirectory","lime/system/System.hx",770,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_782_get_numDisplays,"lime.system.System","get_numDisplays",0x5056f915,"lime.system.System.get_numDisplays","lime/system/System.hx",782,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_789_get_platformLabel,"lime.system.System","get_platformLabel",0xc2bb267f,"lime.system.System.get_platformLabel","lime/system/System.hx",789,0x6434b429)
static const ::String _hx_array_data_acbd8395_32[] = {
	HX_("-ds",fc,7c,22,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_813_get_platformName,"lime.system.System","get_platformName",0x82c4f420,"lime.system.System.get_platformName","lime/system/System.hx",813,0x6434b429)
static const ::String _hx_array_data_acbd8395_34[] = {
	HX_("-is",57,81,22,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_851_get_platformVersion,"lime.system.System","get_platformVersion",0xbd9d7863,"lime.system.System.get_platformVersion","lime/system/System.hx",851,0x6434b429)
static const ::String _hx_array_data_acbd8395_36[] = {
	HX_("-rs",2e,89,22,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_879_get_userDirectory,"lime.system.System","get_userDirectory",0x2b5522e0,"lime.system.System.get_userDirectory","lime/system/System.hx",879,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_118_boot,"lime.system.System","boot",0x171e93ab,"lime.system.System.boot","lime/system/System.hx",118,0x6434b429)
namespace lime{
namespace _hx_system{

void System_obj::__construct() { }

Dynamic System_obj::__CreateEmpty() { return new System_obj; }

void *System_obj::_hx_vtable = 0;

Dynamic System_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< System_obj > _hx_result = new System_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool System_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0470bdb7;
}

bool System_obj::disableCFFI;

::String System_obj::_hx___applicationDirectory;

 ::haxe::ds::StringMap System_obj::_hx___applicationEntryPoint;

::String System_obj::_hx___applicationStorageDirectory;

::String System_obj::_hx___desktopDirectory;

::String System_obj::_hx___deviceModel;

::String System_obj::_hx___deviceVendor;

 ::haxe::ds::IntMap System_obj::_hx___directories;

::String System_obj::_hx___documentsDirectory;

 ::lime::_hx_system::Endian System_obj::_hx___endianness;

::String System_obj::_hx___fontsDirectory;

::String System_obj::_hx___platformLabel;

::String System_obj::_hx___platformName;

::String System_obj::_hx___platformVersion;

::String System_obj::_hx___userDirectory;

void System_obj::exit(int code){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_197_exit)
HXLINE( 198)		 ::lime::app::Application currentApp = ::lime::app::Application_obj::current;
HXLINE( 200)		if (::hx::IsNotNull( currentApp )) {
HXLINE( 202)			currentApp->onExit->dispatch(code);
HXLINE( 204)			if (currentApp->onExit->canceled) {
HXLINE( 206)				return;
            			}
            		}
HXLINE( 212)		::Sys_obj::exit(code);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,exit,(void))

 ::lime::_hx_system::Display System_obj::getDisplay(int id){
            	HX_GC_STACKFRAME(&_hx_pos_f2b41f959dca9627_228_getDisplay)
HXLINE( 230)		 ::Dynamic displayInfo = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_system_get_display(id)) );
HXLINE( 232)		if (::hx::IsNotNull( displayInfo )) {
HXLINE( 234)			 ::lime::_hx_system::Display display =  ::lime::_hx_system::Display_obj::__alloc( HX_CTX );
HXLINE( 235)			display->id = id;
HXLINE( 239)			display->name = ( (::String)(displayInfo->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXLINE( 241)			display->bounds =  ::lime::math::Rectangle_obj::__alloc( HX_CTX , ::Dynamic(displayInfo->__Field(HX_("bounds",75,86,1d,66),::hx::paccDynamic))->__Field(HX_("x",78,00,00,00),::hx::paccDynamic), ::Dynamic(displayInfo->__Field(HX_("bounds",75,86,1d,66),::hx::paccDynamic))->__Field(HX_("y",79,00,00,00),::hx::paccDynamic), ::Dynamic(displayInfo->__Field(HX_("bounds",75,86,1d,66),::hx::paccDynamic))->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic), ::Dynamic(displayInfo->__Field(HX_("bounds",75,86,1d,66),::hx::paccDynamic))->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic));
HXLINE( 258)			display->dpi = ( (Float)(displayInfo->__Field(HX_("dpi",5d,43,4c,00),::hx::paccDynamic)) );
HXLINE( 261)			display->supportedModes = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 263)			 ::lime::_hx_system::DisplayMode displayMode;
HXLINE( 268)			::cpp::VirtualArray supportedModes = ( (::cpp::VirtualArray)(displayInfo->__Field(HX_("supportedModes",a2,a6,b8,b7),::hx::paccDynamic)) );
HXLINE( 270)			{
HXLINE( 270)				int _g = 0;
HXDLIN( 270)				while((_g < supportedModes->get_length())){
HXLINE( 270)					 ::Dynamic mode = supportedModes->__get(_g);
HXDLIN( 270)					_g = (_g + 1);
HXLINE( 272)					displayMode =  ::lime::_hx_system::DisplayMode_obj::__alloc( HX_CTX ,( (int)(mode->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ),( (int)(mode->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) ),( (int)(mode->__Field(HX_("refreshRate",5b,e2,3f,40),::hx::paccDynamic)) ),( (int)(mode->__Field(HX_("pixelFormat",5d,72,1b,6f),::hx::paccDynamic)) ));
HXLINE( 273)					display->supportedModes->push(displayMode);
            				}
            			}
HXLINE( 276)			 ::Dynamic mode = displayInfo->__Field(HX_("currentMode",3c,ac,f2,80),::hx::paccDynamic);
HXLINE( 277)			 ::lime::_hx_system::DisplayMode currentMode =  ::lime::_hx_system::DisplayMode_obj::__alloc( HX_CTX ,( (int)(mode->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ),( (int)(mode->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) ),( (int)(mode->__Field(HX_("refreshRate",5b,e2,3f,40),::hx::paccDynamic)) ),( (int)(mode->__Field(HX_("pixelFormat",5d,72,1b,6f),::hx::paccDynamic)) ));
HXLINE( 279)			{
HXLINE( 279)				int _g1 = 0;
HXDLIN( 279)				::Array< ::Dynamic> _g2 = display->supportedModes;
HXDLIN( 279)				while((_g1 < _g2->length)){
HXLINE( 279)					 ::lime::_hx_system::DisplayMode mode = _g2->__get(_g1).StaticCast<  ::lime::_hx_system::DisplayMode >();
HXDLIN( 279)					_g1 = (_g1 + 1);
HXLINE( 281)					bool _hx_tmp;
HXDLIN( 281)					bool _hx_tmp1;
HXDLIN( 281)					bool _hx_tmp2;
HXDLIN( 281)					if ((currentMode->pixelFormat == mode->pixelFormat)) {
HXLINE( 281)						_hx_tmp2 = (currentMode->width == mode->width);
            					}
            					else {
HXLINE( 281)						_hx_tmp2 = false;
            					}
HXDLIN( 281)					if (_hx_tmp2) {
HXLINE( 281)						_hx_tmp1 = (currentMode->height == mode->height);
            					}
            					else {
HXLINE( 281)						_hx_tmp1 = false;
            					}
HXDLIN( 281)					if (_hx_tmp1) {
HXLINE( 281)						_hx_tmp = (currentMode->refreshRate == mode->refreshRate);
            					}
            					else {
HXLINE( 281)						_hx_tmp = false;
            					}
HXDLIN( 281)					if (_hx_tmp) {
HXLINE( 286)						currentMode = mode;
HXLINE( 287)						goto _hx_goto_2;
            					}
            				}
            				_hx_goto_2:;
            			}
HXLINE( 291)			display->currentMode = currentMode;
HXLINE( 293)			return display;
            		}
HXLINE( 322)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,getDisplay,return )

int System_obj::getTimer(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_335_getTimer)
HXDLIN( 335)		return ( (int)(::lime::_internal::backend::native::NativeCFFI_obj::lime_system_get_timer()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,getTimer,return )

 ::Dynamic System_obj::load(::String library,::String method,::hx::Null< int >  __o_args,::hx::Null< bool >  __o_lazy){
            		int args = __o_args.Default(0);
            		bool lazy = __o_lazy.Default(false);
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_349_load)
HXDLIN( 349)		return ::lime::_hx_system::CFFI_obj::load(library,method,args,lazy);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(System_obj,load,return )

void System_obj::openFile(::String path){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_363_openFile)
HXDLIN( 363)		if (::hx::IsNotNull( path )) {
HXLINE( 370)			::Sys_obj::command(HX_("/usr/bin/xdg-open",2e,30,af,50),::Array_obj< ::String >::__new(1)->init(0,path));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,openFile,(void))

void System_obj::openURL(::String url,::String __o_target){
            		::String target = __o_target;
            		if (::hx::IsNull(__o_target)) target = HX_("_blank",95,26,d9,b0);
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_389_openURL)
HXDLIN( 389)		if (::hx::IsNotNull( url )) {
HXLINE( 392)			::lime::_hx_system::System_obj::openFile(url);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(System_obj,openURL,(void))

void System_obj::_hx___copyMissingFields( ::Dynamic target, ::Dynamic source){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_407___copyMissingFields)
HXLINE( 408)		bool _hx_tmp;
HXDLIN( 408)		if (::hx::IsNotNull( source )) {
HXLINE( 408)			_hx_tmp = ::hx::IsNull( target );
            		}
            		else {
HXLINE( 408)			_hx_tmp = true;
            		}
HXDLIN( 408)		if (_hx_tmp) {
HXLINE( 408)			return;
            		}
HXLINE( 410)		{
HXLINE( 410)			int _g = 0;
HXDLIN( 410)			::Array< ::String > _g1 = ::Reflect_obj::fields(source);
HXDLIN( 410)			while((_g < _g1->length)){
HXLINE( 410)				::String field = _g1->__get(_g);
HXDLIN( 410)				_g = (_g + 1);
HXLINE( 412)				if (!(::Reflect_obj::hasField(target,field))) {
HXLINE( 414)					::Reflect_obj::setField(target,field,::Reflect_obj::field(source,field));
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(System_obj,_hx___copyMissingFields,(void))

::String System_obj::_hx___getDirectory(int type){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_422___getDirectory)
HXDLIN( 422)		if (::lime::_hx_system::System_obj::_hx___directories->exists(type)) {
HXLINE( 424)			return ::lime::_hx_system::System_obj::_hx___directories->get_string(type);
            		}
            		else {
HXLINE( 428)			::String path;
HXLINE( 430)			if ((type == 1)) {
HXLINE( 432)				::String company = HX_("MyCompany",11,c3,2e,cc);
HXLINE( 433)				::String file = HX_("MyApplication",24,d3,d1,1c);
HXLINE( 435)				if (::hx::IsNotNull( ::lime::app::Application_obj::current )) {
HXLINE( 437)					if (::lime::app::Application_obj::current->meta->exists(HX_("company",3d,15,69,83))) {
HXLINE( 439)						company = ::lime::app::Application_obj::current->meta->get_string(HX_("company",3d,15,69,83));
            					}
HXLINE( 442)					if (::lime::app::Application_obj::current->meta->exists(HX_("file",7c,ce,bb,43))) {
HXLINE( 444)						file = ::lime::app::Application_obj::current->meta->get_string(HX_("file",7c,ce,bb,43));
            					}
            				}
HXLINE( 451)				path = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_system_get_directory(type,company,file)) );
            			}
            			else {
HXLINE( 459)				path = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_system_get_directory(type,null(),null())) );
            			}
HXLINE( 466)			::String seperator = HX_("/",2f,00,00,00);
HXLINE( 469)			bool _hx_tmp;
HXDLIN( 469)			bool _hx_tmp1;
HXDLIN( 469)			if (::hx::IsNotNull( path )) {
HXLINE( 469)				_hx_tmp1 = (path.length > 0);
            			}
            			else {
HXLINE( 469)				_hx_tmp1 = false;
            			}
HXDLIN( 469)			if (_hx_tmp1) {
HXLINE( 469)				_hx_tmp = !(::StringTools_obj::endsWith(path,seperator));
            			}
            			else {
HXLINE( 469)				_hx_tmp = false;
            			}
HXDLIN( 469)			if (_hx_tmp) {
HXLINE( 471)				path = (path + seperator);
            			}
HXLINE( 474)			::lime::_hx_system::System_obj::_hx___directories->set(type,path);
HXLINE( 475)			return path;
            		}
HXLINE( 422)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,_hx___getDirectory,return )

void System_obj::_hx___parseArguments( ::Dynamic attributes){
            	HX_GC_STACKFRAME(&_hx_pos_f2b41f959dca9627_498___parseArguments)
HXLINE( 501)		::Array< ::String > arguments = ::Sys_obj::args();
HXLINE( 502)		 ::EReg stripQuotes =  ::EReg_obj::__alloc( HX_CTX ,HX_("^['\"](.*)['\"]$",13,22,1b,37),HX_("",00,00,00,00));
HXLINE( 503)		int equals;
HXDLIN( 503)		::String argValue;
HXDLIN( 503)		 ::haxe::ds::StringMap parameters = null();
HXLINE( 504)		::String windowParamPrefix = HX_("--window-",dd,62,c2,0a);
HXLINE( 506)		if (::hx::IsNotNull( arguments )) {
HXLINE( 508)			int _g = 0;
HXDLIN( 508)			while((_g < arguments->length)){
HXLINE( 508)				::String argument = arguments->__get(_g);
HXDLIN( 508)				_g = (_g + 1);
HXLINE( 510)				equals = argument.indexOf(HX_("=",3d,00,00,00),null());
HXLINE( 512)				if ((equals > 0)) {
HXLINE( 514)					argValue = argument.substr((equals + 1),null());
HXLINE( 516)					if (stripQuotes->match(argValue)) {
HXLINE( 518)						argValue = stripQuotes->matched(1);
            					}
HXLINE( 521)					if (::hx::IsNull( parameters )) {
HXLINE( 521)						parameters =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            					}
HXLINE( 522)					parameters->set(argument.substr(0,equals),argValue);
            				}
            			}
            		}
HXLINE( 527)		if (::hx::IsNotNull( parameters )) {
HXLINE( 529)			if (::hx::IsNull( attributes->__Field(HX_("parameters",aa,be,7e,51),::hx::paccDynamic) )) {
HXLINE( 529)				attributes->__SetField(HX_("parameters",aa,be,7e,51), ::Dynamic(::hx::Anon_obj::Create(0)),::hx::paccDynamic);
            			}
HXLINE( 530)			if (::hx::IsNull( attributes->__Field(HX_("context",ef,95,77,19),::hx::paccDynamic) )) {
HXLINE( 530)				attributes->__SetField(HX_("context",ef,95,77,19), ::Dynamic(::hx::Anon_obj::Create(0)),::hx::paccDynamic);
            			}
HXLINE( 532)			{
HXLINE( 532)				 ::Dynamic parameter = parameters->keys();
HXDLIN( 532)				while(( (bool)(parameter->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 532)					::String parameter1 = ( (::String)(parameter->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 534)					argValue = parameters->get_string(parameter1);
HXLINE( 536)					if (::StringTools_obj::startsWith(parameter1,windowParamPrefix)) {
HXLINE( 538)						::String _hx_switch_0 = parameter1.substr(windowParamPrefix.length,null());
            						if (  (_hx_switch_0==HX_("allow-high-dpi",36,e5,66,be)) ){
HXLINE( 541)							attributes->__SetField(HX_("allowHighDPI",92,07,a2,b4),(argValue == HX_("true",4e,a7,03,4d)),::hx::paccDynamic);
HXDLIN( 541)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("always-on-top",25,b6,1e,79)) ){
HXLINE( 543)							attributes->__SetField(HX_("alwaysOnTop",67,4d,53,16),(argValue == HX_("true",4e,a7,03,4d)),::hx::paccDynamic);
HXDLIN( 543)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("antialiasing",f4,16,b3,48)) ){
HXLINE( 545)							 ::Dynamic(attributes->__Field(HX_("context",ef,95,77,19),::hx::paccDynamic))->__SetField(HX_("antialiasing",f4,16,b3,48),::Std_obj::parseInt(argValue),::hx::paccDynamic);
HXDLIN( 545)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("background",ee,93,1d,26)) ){
HXLINE( 547)							 ::Dynamic _hx_tmp;
HXDLIN( 547)							bool _hx_tmp1;
HXDLIN( 547)							if ((argValue != HX_("",00,00,00,00))) {
HXLINE( 547)								_hx_tmp1 = (argValue == HX_("null",87,9e,0e,49));
            							}
            							else {
HXLINE( 547)								_hx_tmp1 = true;
            							}
HXDLIN( 547)							if (_hx_tmp1) {
HXLINE( 547)								_hx_tmp = null();
            							}
            							else {
HXLINE( 547)								_hx_tmp = ::Std_obj::parseInt(argValue);
            							}
HXDLIN( 547)							 ::Dynamic(attributes->__Field(HX_("context",ef,95,77,19),::hx::paccDynamic))->__SetField(HX_("background",ee,93,1d,26),_hx_tmp,::hx::paccDynamic);
HXDLIN( 547)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("borderless",45,46,71,17)) ){
HXLINE( 549)							attributes->__SetField(HX_("borderless",45,46,71,17),(argValue == HX_("true",4e,a7,03,4d)),::hx::paccDynamic);
HXDLIN( 549)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("colorDepth",a0,08,96,fb)) ){
HXLINE( 551)							 ::Dynamic(attributes->__Field(HX_("context",ef,95,77,19),::hx::paccDynamic))->__SetField(HX_("colorDepth",a0,08,96,fb),::Std_obj::parseInt(argValue),::hx::paccDynamic);
HXDLIN( 551)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("depth",03,f1,29,d7)) ||  (_hx_switch_0==HX_("depth-buffer",4a,22,d8,98)) ){
HXLINE( 553)							 ::Dynamic(attributes->__Field(HX_("context",ef,95,77,19),::hx::paccDynamic))->__SetField(HX_("depth",03,f1,29,d7),(argValue == HX_("true",4e,a7,03,4d)),::hx::paccDynamic);
HXDLIN( 553)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("fullscreen",3b,3a,b4,f9)) ){
HXLINE( 556)							attributes->__SetField(HX_("fullscreen",3b,3a,b4,f9),(argValue == HX_("true",4e,a7,03,4d)),::hx::paccDynamic);
HXDLIN( 556)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("hardware",a8,e2,d3,75)) ){
HXLINE( 558)							 ::Dynamic(attributes->__Field(HX_("context",ef,95,77,19),::hx::paccDynamic))->__SetField(HX_("hardware",a8,e2,d3,75),(argValue == HX_("true",4e,a7,03,4d)),::hx::paccDynamic);
HXDLIN( 558)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("height",e7,07,4c,02)) ){
HXLINE( 560)							attributes->__SetField(HX_("height",e7,07,4c,02),::Std_obj::parseInt(argValue),::hx::paccDynamic);
HXDLIN( 560)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("hidden",6a,ff,95,4c)) ){
HXLINE( 562)							attributes->__SetField(HX_("hidden",6a,ff,95,4c),(argValue == HX_("true",4e,a7,03,4d)),::hx::paccDynamic);
HXDLIN( 562)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("maximized",18,0e,e1,fe)) ){
HXLINE( 564)							attributes->__SetField(HX_("maximized",18,0e,e1,fe),(argValue == HX_("true",4e,a7,03,4d)),::hx::paccDynamic);
HXDLIN( 564)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("minimized",86,fb,9d,28)) ){
HXLINE( 566)							attributes->__SetField(HX_("minimized",86,fb,9d,28),(argValue == HX_("true",4e,a7,03,4d)),::hx::paccDynamic);
HXDLIN( 566)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("render-type",51,ca,94,6e)) ||  (_hx_switch_0==HX_("renderer",43,c5,db,b2)) ){
HXLINE( 568)							 ::Dynamic(attributes->__Field(HX_("context",ef,95,77,19),::hx::paccDynamic))->__SetField(HX_("type",ba,f2,08,4d),argValue,::hx::paccDynamic);
HXDLIN( 568)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("render-version",e1,a7,f5,24)) ||  (_hx_switch_0==HX_("renderer-version",ce,36,a7,0b)) ){
HXLINE( 570)							 ::Dynamic(attributes->__Field(HX_("context",ef,95,77,19),::hx::paccDynamic))->__SetField(HX_("version",18,e7,f1,7c),argValue,::hx::paccDynamic);
HXDLIN( 570)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("resizable",6b,37,50,a9)) ){
HXLINE( 572)							attributes->__SetField(HX_("resizable",6b,37,50,a9),(argValue == HX_("true",4e,a7,03,4d)),::hx::paccDynamic);
HXDLIN( 572)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("stencil",fc,bd,03,80)) ||  (_hx_switch_0==HX_("stencil-buffer",71,d6,20,82)) ){
HXLINE( 574)							 ::Dynamic(attributes->__Field(HX_("context",ef,95,77,19),::hx::paccDynamic))->__SetField(HX_("stencil",fc,bd,03,80),(argValue == HX_("true",4e,a7,03,4d)),::hx::paccDynamic);
HXDLIN( 574)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("vsync",d1,2d,a8,3d)) ){
HXLINE( 577)							 ::Dynamic(attributes->__Field(HX_("context",ef,95,77,19),::hx::paccDynamic))->__SetField(HX_("vsync",d1,2d,a8,3d),(argValue == HX_("true",4e,a7,03,4d)),::hx::paccDynamic);
HXDLIN( 577)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("width",06,b6,62,ca)) ){
HXLINE( 579)							attributes->__SetField(HX_("width",06,b6,62,ca),::Std_obj::parseInt(argValue),::hx::paccDynamic);
HXDLIN( 579)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("x",78,00,00,00)) ){
HXLINE( 581)							attributes->__SetField(HX_("x",78,00,00,00),::Std_obj::parseInt(argValue),::hx::paccDynamic);
HXDLIN( 581)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("y",79,00,00,00)) ){
HXLINE( 583)							attributes->__SetField(HX_("y",79,00,00,00),::Std_obj::parseInt(argValue),::hx::paccDynamic);
HXDLIN( 583)							goto _hx_goto_13;
            						}
            						/* default */{
            						}
            						_hx_goto_13:;
            					}
            					else {
HXLINE( 587)						if (!(::Reflect_obj::hasField( ::Dynamic(attributes->__Field(HX_("parameters",aa,be,7e,51),::hx::paccDynamic)),parameter1))) {
HXLINE( 589)							::Reflect_obj::setField( ::Dynamic(attributes->__Field(HX_("parameters",aa,be,7e,51),::hx::paccDynamic)),parameter1,argValue);
            						}
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,_hx___parseArguments,(void))

bool System_obj::_hx___parseBool(::String value){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_598___parseBool)
HXDLIN( 598)		return (value == HX_("true",4e,a7,03,4d));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,_hx___parseBool,return )

void System_obj::_hx___registerEntryPoint(::String projectName, ::Dynamic entryPoint){
            	HX_GC_STACKFRAME(&_hx_pos_f2b41f959dca9627_602___registerEntryPoint)
HXLINE( 603)		if (::hx::IsNull( ::lime::_hx_system::System_obj::_hx___applicationEntryPoint )) {
HXLINE( 605)			::lime::_hx_system::System_obj::_hx___applicationEntryPoint =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE( 608)		::lime::_hx_system::System_obj::_hx___applicationEntryPoint->set(projectName,entryPoint);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(System_obj,_hx___registerEntryPoint,(void))

::String System_obj::_hx___runProcess(::String command,::Array< ::String > args){
            	HX_GC_STACKFRAME(&_hx_pos_f2b41f959dca9627_612___runProcess)
HXLINE( 614)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 616)			if (::hx::IsNull( args )) {
HXLINE( 616)				args = ::Array_obj< ::String >::__new(0);
            			}
HXLINE( 618)			 ::sys::io::Process process =  ::sys::io::Process_obj::__alloc( HX_CTX ,command,args,null());
HXLINE( 619)			::String value = ::StringTools_obj::trim(process->_hx_stdout->readLine().toString());
HXLINE( 620)			process->close();
HXLINE( 621)			return value;
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 623)				{
HXLINE( 623)					null();
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 625)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(System_obj,_hx___runProcess,return )

bool System_obj::get_allowScreenTimeout(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_632_get_allowScreenTimeout)
HXDLIN( 632)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_system_get_allow_screen_timeout();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_allowScreenTimeout,return )

bool System_obj::set_allowScreenTimeout(bool value){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_641_set_allowScreenTimeout)
HXDLIN( 641)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_system_set_allow_screen_timeout(value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,set_allowScreenTimeout,return )

::String System_obj::get_applicationDirectory(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_648_get_applicationDirectory)
HXLINE( 649)		if (::hx::IsNull( ::lime::_hx_system::System_obj::_hx___applicationDirectory )) {
HXLINE( 651)			::lime::_hx_system::System_obj::_hx___applicationDirectory = ::lime::_hx_system::System_obj::_hx___getDirectory(0);
            		}
HXLINE( 654)		return ::lime::_hx_system::System_obj::_hx___applicationDirectory;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_applicationDirectory,return )

::String System_obj::get_applicationStorageDirectory(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_658_get_applicationStorageDirectory)
HXLINE( 659)		if (::hx::IsNull( ::lime::_hx_system::System_obj::_hx___applicationStorageDirectory )) {
HXLINE( 661)			::lime::_hx_system::System_obj::_hx___applicationStorageDirectory = ::lime::_hx_system::System_obj::_hx___getDirectory(1);
            		}
HXLINE( 664)		return ::lime::_hx_system::System_obj::_hx___applicationStorageDirectory;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_applicationStorageDirectory,return )

::String System_obj::get_deviceModel(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_668_get_deviceModel)
HXLINE( 669)		if (::hx::IsNull( ::lime::_hx_system::System_obj::_hx___deviceModel )) {
HXLINE( 695)			::lime::_hx_system::System_obj::_hx___deviceModel = ::lime::_hx_system::System_obj::_hx___runProcess(HX_("cat",16,74,4b,00),::Array_obj< ::String >::fromData( _hx_array_data_acbd8395_23,1));
            		}
HXLINE( 699)		return ::lime::_hx_system::System_obj::_hx___deviceModel;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_deviceModel,return )

::String System_obj::get_deviceVendor(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_703_get_deviceVendor)
HXLINE( 704)		if (::hx::IsNull( ::lime::_hx_system::System_obj::_hx___deviceVendor )) {
HXLINE( 721)			::lime::_hx_system::System_obj::_hx___deviceVendor = ::lime::_hx_system::System_obj::_hx___runProcess(HX_("cat",16,74,4b,00),::Array_obj< ::String >::fromData( _hx_array_data_acbd8395_25,1));
            		}
HXLINE( 725)		return ::lime::_hx_system::System_obj::_hx___deviceVendor;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_deviceVendor,return )

::String System_obj::get_desktopDirectory(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_729_get_desktopDirectory)
HXLINE( 730)		if (::hx::IsNull( ::lime::_hx_system::System_obj::_hx___desktopDirectory )) {
HXLINE( 732)			::lime::_hx_system::System_obj::_hx___desktopDirectory = ::lime::_hx_system::System_obj::_hx___getDirectory(2);
            		}
HXLINE( 735)		return ::lime::_hx_system::System_obj::_hx___desktopDirectory;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_desktopDirectory,return )

::String System_obj::get_documentsDirectory(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_739_get_documentsDirectory)
HXLINE( 740)		if (::hx::IsNull( ::lime::_hx_system::System_obj::_hx___documentsDirectory )) {
HXLINE( 742)			::lime::_hx_system::System_obj::_hx___documentsDirectory = ::lime::_hx_system::System_obj::_hx___getDirectory(3);
            		}
HXLINE( 745)		return ::lime::_hx_system::System_obj::_hx___documentsDirectory;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_documentsDirectory,return )

 ::lime::_hx_system::Endian System_obj::get_endianness(){
            	HX_GC_STACKFRAME(&_hx_pos_f2b41f959dca9627_749_get_endianness)
HXLINE( 750)		if (::hx::IsNull( ::lime::_hx_system::System_obj::_hx___endianness )) {
HXLINE( 755)			 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(2);
HXDLIN( 755)			 ::haxe::io::Bytes arrayBuffer = this1;
HXLINE( 756)			 ::Dynamic elements = null();
HXDLIN( 756)			::cpp::VirtualArray array = null();
HXDLIN( 756)			 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 756)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 756)			 ::Dynamic len = null();
HXDLIN( 756)			 ::lime::utils::ArrayBufferView this2;
HXDLIN( 756)			if (::hx::IsNotNull( elements )) {
HXLINE( 756)				this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            			}
            			else {
HXLINE( 756)				if (::hx::IsNotNull( array )) {
HXLINE( 756)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 756)					_this->byteOffset = 0;
HXDLIN( 756)					_this->length = array->get_length();
HXDLIN( 756)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 756)					 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 756)					_this->buffer = this1;
HXDLIN( 756)					_this->copyFromArray(array,null());
HXDLIN( 756)					this2 = _this;
            				}
            				else {
HXLINE( 756)					if (::hx::IsNotNull( vector )) {
HXLINE( 756)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 756)						::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 756)						_this->byteOffset = 0;
HXDLIN( 756)						_this->length = array->get_length();
HXDLIN( 756)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 756)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 756)						_this->buffer = this1;
HXDLIN( 756)						_this->copyFromArray(array,null());
HXDLIN( 756)						this2 = _this;
            					}
            					else {
HXLINE( 756)						if (::hx::IsNotNull( view )) {
HXLINE( 756)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 756)							 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 756)							int srcLength = view->length;
HXDLIN( 756)							int srcByteOffset = view->byteOffset;
HXDLIN( 756)							int srcElementSize = view->bytesPerElement;
HXDLIN( 756)							int elementSize = _this->bytesPerElement;
HXDLIN( 756)							if ((view->type == _this->type)) {
HXLINE( 756)								int srcLength = srcData->length;
HXDLIN( 756)								int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 756)								 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 756)								_this->buffer = this1;
HXDLIN( 756)								_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            							}
            							else {
HXLINE( 756)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            							}
HXDLIN( 756)							_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 756)							_this->byteOffset = 0;
HXDLIN( 756)							_this->length = srcLength;
HXDLIN( 756)							this2 = _this;
            						}
            						else {
HXLINE( 756)							if (::hx::IsNotNull( arrayBuffer )) {
HXLINE( 756)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 756)								int in_byteOffset = 0;
HXDLIN( 756)								if ((in_byteOffset < 0)) {
HXLINE( 756)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 756)								if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 756)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 756)								int bufferByteLength = arrayBuffer->length;
HXDLIN( 756)								int elementSize = _this->bytesPerElement;
HXDLIN( 756)								int newByteLength = bufferByteLength;
HXDLIN( 756)								if (::hx::IsNull( len )) {
HXLINE( 756)									newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 756)									if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 756)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 756)									if ((newByteLength < 0)) {
HXLINE( 756)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
            								else {
HXLINE( 756)									newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 756)									int newRange = (in_byteOffset + newByteLength);
HXDLIN( 756)									if ((newRange > bufferByteLength)) {
HXLINE( 756)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
HXDLIN( 756)								_this->buffer = arrayBuffer;
HXDLIN( 756)								_this->byteOffset = in_byteOffset;
HXDLIN( 756)								_this->byteLength = newByteLength;
HXDLIN( 756)								_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 756)								this2 = _this;
            							}
            							else {
HXLINE( 756)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            							}
            						}
            					}
            				}
            			}
HXDLIN( 756)			 ::lime::utils::ArrayBufferView uint8Array = this2;
HXLINE( 757)			 ::Dynamic elements1 = null();
HXDLIN( 757)			::cpp::VirtualArray array1 = null();
HXDLIN( 757)			 ::openfl::_Vector::IntVector vector1 = null();
HXDLIN( 757)			 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 757)			 ::Dynamic len1 = null();
HXDLIN( 757)			 ::lime::utils::ArrayBufferView this3;
HXDLIN( 757)			if (::hx::IsNotNull( elements1 )) {
HXLINE( 757)				this3 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements1,6);
            			}
            			else {
HXLINE( 757)				if (::hx::IsNotNull( array1 )) {
HXLINE( 757)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 757)					_this->byteOffset = 0;
HXDLIN( 757)					_this->length = array1->get_length();
HXDLIN( 757)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 757)					 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 757)					_this->buffer = this1;
HXDLIN( 757)					_this->copyFromArray(array1,null());
HXDLIN( 757)					this3 = _this;
            				}
            				else {
HXLINE( 757)					if (::hx::IsNotNull( vector1 )) {
HXLINE( 757)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 757)						::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector1->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 757)						_this->byteOffset = 0;
HXDLIN( 757)						_this->length = array->get_length();
HXDLIN( 757)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 757)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 757)						_this->buffer = this1;
HXDLIN( 757)						_this->copyFromArray(array,null());
HXDLIN( 757)						this3 = _this;
            					}
            					else {
HXLINE( 757)						if (::hx::IsNotNull( view1 )) {
HXLINE( 757)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 757)							 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 757)							int srcLength = view1->length;
HXDLIN( 757)							int srcByteOffset = view1->byteOffset;
HXDLIN( 757)							int srcElementSize = view1->bytesPerElement;
HXDLIN( 757)							int elementSize = _this->bytesPerElement;
HXDLIN( 757)							if ((view1->type == _this->type)) {
HXLINE( 757)								int srcLength = srcData->length;
HXDLIN( 757)								int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 757)								 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 757)								_this->buffer = this1;
HXDLIN( 757)								_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            							}
            							else {
HXLINE( 757)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            							}
HXDLIN( 757)							_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 757)							_this->byteOffset = 0;
HXDLIN( 757)							_this->length = srcLength;
HXDLIN( 757)							this3 = _this;
            						}
            						else {
HXLINE( 757)							if (::hx::IsNotNull( arrayBuffer )) {
HXLINE( 757)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 757)								int in_byteOffset = 0;
HXDLIN( 757)								if ((in_byteOffset < 0)) {
HXLINE( 757)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 757)								if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 757)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 757)								int bufferByteLength = arrayBuffer->length;
HXDLIN( 757)								int elementSize = _this->bytesPerElement;
HXDLIN( 757)								int newByteLength = bufferByteLength;
HXDLIN( 757)								if (::hx::IsNull( len1 )) {
HXLINE( 757)									newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 757)									if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 757)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 757)									if ((newByteLength < 0)) {
HXLINE( 757)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
            								else {
HXLINE( 757)									newByteLength = (( (int)(len1) ) * _this->bytesPerElement);
HXDLIN( 757)									int newRange = (in_byteOffset + newByteLength);
HXDLIN( 757)									if ((newRange > bufferByteLength)) {
HXLINE( 757)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
HXDLIN( 757)								_this->buffer = arrayBuffer;
HXDLIN( 757)								_this->byteOffset = in_byteOffset;
HXDLIN( 757)								_this->byteLength = newByteLength;
HXDLIN( 757)								_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 757)								this3 = _this;
            							}
            							else {
HXLINE( 757)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5)));
            							}
            						}
            					}
            				}
            			}
HXDLIN( 757)			 ::lime::utils::ArrayBufferView uint16array = this3;
HXLINE( 758)			 ::__hxcpp_memory_set_byte(uint8Array->buffer->b,uint8Array->byteOffset,170);
HXLINE( 759)			 ::__hxcpp_memory_set_byte(uint8Array->buffer->b,(uint8Array->byteOffset + 1),187);
HXLINE( 760)			if ((( ::__hxcpp_memory_get_ui16(uint16array->buffer->b,uint16array->byteOffset) & 65535) == 43707)) {
HXLINE( 760)				::lime::_hx_system::System_obj::_hx___endianness = ::lime::_hx_system::Endian_obj::_hx_BIG_ENDIAN_dyn();
            			}
            			else {
HXLINE( 762)				::lime::_hx_system::System_obj::_hx___endianness = ::lime::_hx_system::Endian_obj::_hx_LITTLE_ENDIAN_dyn();
            			}
            		}
HXLINE( 766)		return ::lime::_hx_system::System_obj::_hx___endianness;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_endianness,return )

::String System_obj::get_fontsDirectory(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_770_get_fontsDirectory)
HXLINE( 771)		if (::hx::IsNull( ::lime::_hx_system::System_obj::_hx___fontsDirectory )) {
HXLINE( 773)			::lime::_hx_system::System_obj::_hx___fontsDirectory = ::lime::_hx_system::System_obj::_hx___getDirectory(4);
            		}
HXLINE( 776)		return ::lime::_hx_system::System_obj::_hx___fontsDirectory;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_fontsDirectory,return )

int System_obj::get_numDisplays(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_782_get_numDisplays)
HXDLIN( 782)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_system_get_num_displays();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_numDisplays,return )

::String System_obj::get_platformLabel(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_789_get_platformLabel)
HXLINE( 790)		if (::hx::IsNull( ::lime::_hx_system::System_obj::_hx___platformLabel )) {
HXLINE( 800)			::lime::_hx_system::System_obj::_hx___platformLabel = ::lime::_hx_system::System_obj::_hx___runProcess(HX_("lsb_release",43,2a,59,12),::Array_obj< ::String >::fromData( _hx_array_data_acbd8395_32,1));
            		}
HXLINE( 809)		return ::lime::_hx_system::System_obj::_hx___platformLabel;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_platformLabel,return )

::String System_obj::get_platformName(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_813_get_platformName)
HXLINE( 814)		if (::hx::IsNull( ::lime::_hx_system::System_obj::_hx___platformName )) {
HXLINE( 821)			::lime::_hx_system::System_obj::_hx___platformName = ::lime::_hx_system::System_obj::_hx___runProcess(HX_("lsb_release",43,2a,59,12),::Array_obj< ::String >::fromData( _hx_array_data_acbd8395_34,1));
            		}
HXLINE( 847)		return ::lime::_hx_system::System_obj::_hx___platformName;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_platformName,return )

::String System_obj::get_platformVersion(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_851_get_platformVersion)
HXLINE( 852)		if (::hx::IsNull( ::lime::_hx_system::System_obj::_hx___platformVersion )) {
HXLINE( 869)			::lime::_hx_system::System_obj::_hx___platformVersion = ::lime::_hx_system::System_obj::_hx___runProcess(HX_("lsb_release",43,2a,59,12),::Array_obj< ::String >::fromData( _hx_array_data_acbd8395_36,1));
            		}
HXLINE( 875)		return ::lime::_hx_system::System_obj::_hx___platformVersion;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_platformVersion,return )

::String System_obj::get_userDirectory(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_879_get_userDirectory)
HXLINE( 880)		if (::hx::IsNull( ::lime::_hx_system::System_obj::_hx___userDirectory )) {
HXLINE( 882)			::lime::_hx_system::System_obj::_hx___userDirectory = ::lime::_hx_system::System_obj::_hx___getDirectory(5);
            		}
HXLINE( 885)		return ::lime::_hx_system::System_obj::_hx___userDirectory;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_userDirectory,return )


System_obj::System_obj()
{
}

bool System_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exit") ) { outValue = exit_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"openURL") ) { outValue = openURL_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getTimer") ) { outValue = getTimer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"openFile") ) { outValue = openFile_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"endianness") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_endianness() ); return true; } }
		if (HX_FIELD_EQ(inName,"getDisplay") ) { outValue = getDisplay_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"deviceModel") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_deviceModel() ); return true; } }
		if (HX_FIELD_EQ(inName,"disableCFFI") ) { outValue = ( disableCFFI ); return true; }
		if (HX_FIELD_EQ(inName,"numDisplays") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_numDisplays() ); return true; } }
		if (HX_FIELD_EQ(inName,"__parseBool") ) { outValue = _hx___parseBool_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"deviceVendor") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_deviceVendor() ); return true; } }
		if (HX_FIELD_EQ(inName,"platformName") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_platformName() ); return true; } }
		if (HX_FIELD_EQ(inName,"__endianness") ) { outValue = ( _hx___endianness ); return true; }
		if (HX_FIELD_EQ(inName,"__runProcess") ) { outValue = _hx___runProcess_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"platformLabel") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_platformLabel() ); return true; } }
		if (HX_FIELD_EQ(inName,"userDirectory") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_userDirectory() ); return true; } }
		if (HX_FIELD_EQ(inName,"__deviceModel") ) { outValue = ( _hx___deviceModel ); return true; }
		if (HX_FIELD_EQ(inName,"__directories") ) { outValue = ( _hx___directories ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fontsDirectory") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_fontsDirectory() ); return true; } }
		if (HX_FIELD_EQ(inName,"__deviceVendor") ) { outValue = ( _hx___deviceVendor ); return true; }
		if (HX_FIELD_EQ(inName,"__platformName") ) { outValue = ( _hx___platformName ); return true; }
		if (HX_FIELD_EQ(inName,"__getDirectory") ) { outValue = _hx___getDirectory_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_endianness") ) { outValue = get_endianness_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"platformVersion") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_platformVersion() ); return true; } }
		if (HX_FIELD_EQ(inName,"__platformLabel") ) { outValue = ( _hx___platformLabel ); return true; }
		if (HX_FIELD_EQ(inName,"__userDirectory") ) { outValue = ( _hx___userDirectory ); return true; }
		if (HX_FIELD_EQ(inName,"get_deviceModel") ) { outValue = get_deviceModel_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_numDisplays") ) { outValue = get_numDisplays_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"desktopDirectory") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_desktopDirectory() ); return true; } }
		if (HX_FIELD_EQ(inName,"__fontsDirectory") ) { outValue = ( _hx___fontsDirectory ); return true; }
		if (HX_FIELD_EQ(inName,"__parseArguments") ) { outValue = _hx___parseArguments_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_deviceVendor") ) { outValue = get_deviceVendor_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_platformName") ) { outValue = get_platformName_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__platformVersion") ) { outValue = ( _hx___platformVersion ); return true; }
		if (HX_FIELD_EQ(inName,"get_platformLabel") ) { outValue = get_platformLabel_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_userDirectory") ) { outValue = get_userDirectory_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"allowScreenTimeout") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_allowScreenTimeout() ); return true; } }
		if (HX_FIELD_EQ(inName,"documentsDirectory") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_documentsDirectory() ); return true; } }
		if (HX_FIELD_EQ(inName,"__desktopDirectory") ) { outValue = ( _hx___desktopDirectory ); return true; }
		if (HX_FIELD_EQ(inName,"get_fontsDirectory") ) { outValue = get_fontsDirectory_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__copyMissingFields") ) { outValue = _hx___copyMissingFields_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_platformVersion") ) { outValue = get_platformVersion_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationDirectory") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_applicationDirectory() ); return true; } }
		if (HX_FIELD_EQ(inName,"__documentsDirectory") ) { outValue = ( _hx___documentsDirectory ); return true; }
		if (HX_FIELD_EQ(inName,"__registerEntryPoint") ) { outValue = _hx___registerEntryPoint_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_desktopDirectory") ) { outValue = get_desktopDirectory_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__applicationDirectory") ) { outValue = ( _hx___applicationDirectory ); return true; }
		if (HX_FIELD_EQ(inName,"get_allowScreenTimeout") ) { outValue = get_allowScreenTimeout_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_allowScreenTimeout") ) { outValue = set_allowScreenTimeout_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_documentsDirectory") ) { outValue = get_documentsDirectory_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__applicationEntryPoint") ) { outValue = ( _hx___applicationEntryPoint ); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_applicationDirectory") ) { outValue = get_applicationDirectory_dyn(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"applicationStorageDirectory") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_applicationStorageDirectory() ); return true; } }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"__applicationStorageDirectory") ) { outValue = ( _hx___applicationStorageDirectory ); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"get_applicationStorageDirectory") ) { outValue = get_applicationStorageDirectory_dyn(); return true; }
	}
	return false;
}

bool System_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"disableCFFI") ) { disableCFFI=ioValue.Cast< bool >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__endianness") ) { _hx___endianness=ioValue.Cast<  ::lime::_hx_system::Endian >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__deviceModel") ) { _hx___deviceModel=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"__directories") ) { _hx___directories=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__deviceVendor") ) { _hx___deviceVendor=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"__platformName") ) { _hx___platformName=ioValue.Cast< ::String >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__platformLabel") ) { _hx___platformLabel=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"__userDirectory") ) { _hx___userDirectory=ioValue.Cast< ::String >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__fontsDirectory") ) { _hx___fontsDirectory=ioValue.Cast< ::String >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__platformVersion") ) { _hx___platformVersion=ioValue.Cast< ::String >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"allowScreenTimeout") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_allowScreenTimeout(ioValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"__desktopDirectory") ) { _hx___desktopDirectory=ioValue.Cast< ::String >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__documentsDirectory") ) { _hx___documentsDirectory=ioValue.Cast< ::String >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__applicationDirectory") ) { _hx___applicationDirectory=ioValue.Cast< ::String >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__applicationEntryPoint") ) { _hx___applicationEntryPoint=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"__applicationStorageDirectory") ) { _hx___applicationStorageDirectory=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *System_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo System_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &System_obj::disableCFFI,HX_("disableCFFI",8e,24,b6,11)},
	{::hx::fsString,(void *) &System_obj::_hx___applicationDirectory,HX_("__applicationDirectory",1d,e0,19,ed)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &System_obj::_hx___applicationEntryPoint,HX_("__applicationEntryPoint",ce,da,ed,08)},
	{::hx::fsString,(void *) &System_obj::_hx___applicationStorageDirectory,HX_("__applicationStorageDirectory",02,dc,05,f4)},
	{::hx::fsString,(void *) &System_obj::_hx___desktopDirectory,HX_("__desktopDirectory",11,04,d2,1a)},
	{::hx::fsString,(void *) &System_obj::_hx___deviceModel,HX_("__deviceModel",13,98,10,44)},
	{::hx::fsString,(void *) &System_obj::_hx___deviceVendor,HX_("__deviceVendor",de,4d,44,28)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(void *) &System_obj::_hx___directories,HX_("__directories",eb,9c,a4,a9)},
	{::hx::fsString,(void *) &System_obj::_hx___documentsDirectory,HX_("__documentsDirectory",75,45,e8,15)},
	{::hx::fsObject /*  ::lime::_hx_system::Endian */ ,(void *) &System_obj::_hx___endianness,HX_("__endianness",d2,7d,66,87)},
	{::hx::fsString,(void *) &System_obj::_hx___fontsDirectory,HX_("__fontsDirectory",29,8d,5a,bc)},
	{::hx::fsString,(void *) &System_obj::_hx___platformLabel,HX_("__platformLabel",21,5b,11,b4)},
	{::hx::fsString,(void *) &System_obj::_hx___platformName,HX_("__platformName",be,a9,0d,11)},
	{::hx::fsString,(void *) &System_obj::_hx___platformVersion,HX_("__platformVersion",85,99,63,58)},
	{::hx::fsString,(void *) &System_obj::_hx___userDirectory,HX_("__userDirectory",82,57,ab,1c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void System_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(System_obj::disableCFFI,"disableCFFI");
	HX_MARK_MEMBER_NAME(System_obj::_hx___applicationDirectory,"__applicationDirectory");
	HX_MARK_MEMBER_NAME(System_obj::_hx___applicationEntryPoint,"__applicationEntryPoint");
	HX_MARK_MEMBER_NAME(System_obj::_hx___applicationStorageDirectory,"__applicationStorageDirectory");
	HX_MARK_MEMBER_NAME(System_obj::_hx___desktopDirectory,"__desktopDirectory");
	HX_MARK_MEMBER_NAME(System_obj::_hx___deviceModel,"__deviceModel");
	HX_MARK_MEMBER_NAME(System_obj::_hx___deviceVendor,"__deviceVendor");
	HX_MARK_MEMBER_NAME(System_obj::_hx___directories,"__directories");
	HX_MARK_MEMBER_NAME(System_obj::_hx___documentsDirectory,"__documentsDirectory");
	HX_MARK_MEMBER_NAME(System_obj::_hx___endianness,"__endianness");
	HX_MARK_MEMBER_NAME(System_obj::_hx___fontsDirectory,"__fontsDirectory");
	HX_MARK_MEMBER_NAME(System_obj::_hx___platformLabel,"__platformLabel");
	HX_MARK_MEMBER_NAME(System_obj::_hx___platformName,"__platformName");
	HX_MARK_MEMBER_NAME(System_obj::_hx___platformVersion,"__platformVersion");
	HX_MARK_MEMBER_NAME(System_obj::_hx___userDirectory,"__userDirectory");
};

#ifdef HXCPP_VISIT_ALLOCS
static void System_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(System_obj::disableCFFI,"disableCFFI");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___applicationDirectory,"__applicationDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___applicationEntryPoint,"__applicationEntryPoint");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___applicationStorageDirectory,"__applicationStorageDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___desktopDirectory,"__desktopDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___deviceModel,"__deviceModel");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___deviceVendor,"__deviceVendor");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___directories,"__directories");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___documentsDirectory,"__documentsDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___endianness,"__endianness");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___fontsDirectory,"__fontsDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___platformLabel,"__platformLabel");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___platformName,"__platformName");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___platformVersion,"__platformVersion");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___userDirectory,"__userDirectory");
};

#endif

::hx::Class System_obj::__mClass;

static ::String System_obj_sStaticFields[] = {
	HX_("disableCFFI",8e,24,b6,11),
	HX_("__applicationDirectory",1d,e0,19,ed),
	HX_("__applicationEntryPoint",ce,da,ed,08),
	HX_("__applicationStorageDirectory",02,dc,05,f4),
	HX_("__desktopDirectory",11,04,d2,1a),
	HX_("__deviceModel",13,98,10,44),
	HX_("__deviceVendor",de,4d,44,28),
	HX_("__directories",eb,9c,a4,a9),
	HX_("__documentsDirectory",75,45,e8,15),
	HX_("__endianness",d2,7d,66,87),
	HX_("__fontsDirectory",29,8d,5a,bc),
	HX_("__platformLabel",21,5b,11,b4),
	HX_("__platformName",be,a9,0d,11),
	HX_("__platformVersion",85,99,63,58),
	HX_("__userDirectory",82,57,ab,1c),
	HX_("exit",1e,f7,1d,43),
	HX_("getDisplay",4c,b0,ab,0a),
	HX_("getTimer",4f,cf,0c,70),
	HX_("load",26,9a,b7,47),
	HX_("openFile",66,ab,f7,e4),
	HX_("openURL",c5,bd,35,40),
	HX_("__copyMissingFields",6a,22,dd,a7),
	HX_("__getDirectory",17,12,5c,40),
	HX_("__parseArguments",c3,fb,f7,66),
	HX_("__parseBool",dd,1e,ee,f6),
	HX_("__registerEntryPoint",e1,0d,46,fe),
	HX_("__runProcess",84,ad,5a,94),
	HX_("get_allowScreenTimeout",95,cf,5c,6e),
	HX_("set_allowScreenTimeout",09,4c,08,a2),
	HX_("get_applicationDirectory",86,5a,0d,68),
	HX_("get_applicationStorageDirectory",b9,70,86,8d),
	HX_("get_deviceModel",ca,0e,7a,bc),
	HX_("get_deviceVendor",47,b7,22,0c),
	HX_("get_desktopDirectory",fa,d5,ab,cd),
	HX_("get_documentsDirectory",9e,23,49,90),
	HX_("get_endianness",fb,8a,c8,c4),
	HX_("get_fontsDirectory",d2,e2,b4,23),
	HX_("get_numDisplays",ee,d7,92,d2),
	HX_("get_platformLabel",98,2d,cf,32),
	HX_("get_platformName",27,13,ec,f4),
	HX_("get_platformVersion",bc,37,14,60),
	HX_("get_userDirectory",f9,29,69,9b),
	::String(null())
};

void System_obj::__register()
{
	System_obj _hx_dummy;
	System_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.system.System",95,83,bd,ac);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &System_obj::__GetStatic;
	__mClass->mSetStaticField = &System_obj::__SetStatic;
	__mClass->mMarkFunc = System_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(System_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< System_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = System_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = System_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = System_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void System_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_f2b41f959dca9627_118_boot)
HXDLIN( 118)		_hx___directories =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace lime
} // end namespace system
