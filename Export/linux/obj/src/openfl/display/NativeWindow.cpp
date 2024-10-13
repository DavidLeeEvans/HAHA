#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeWindow
#include <lime/_internal/backend/native/NativeWindow.h>
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
#ifndef INCLUDED_lime_app__Event_Float_Float_Void
#include <lime/app/_Event_Float_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Int_Void
#include <lime/app/_Event_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_desktop_NativeApplication
#include <openfl/desktop/NativeApplication.h>
#endif
#ifndef INCLUDED_openfl_display_Application
#include <openfl/display/Application.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_NativeWindow
#include <openfl/display/NativeWindow.h>
#endif
#ifndef INCLUDED_openfl_display_NativeWindowInitOptions
#include <openfl/display/NativeWindowInitOptions.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Window
#include <openfl/display/Window.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_NativeWindowBoundsEvent
#include <openfl/events/NativeWindowBoundsEvent.h>
#endif
#ifndef INCLUDED_openfl_events_NativeWindowDisplayStateEvent
#include <openfl/events/NativeWindowDisplayStateEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_921333b237e2be0e_71_new,"openfl.display.NativeWindow","new",0xb7b925c3,"openfl.display.NativeWindow.new","openfl/display/NativeWindow.hx",71,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_242_get_stage,"openfl.display.NativeWindow","get_stage",0x4e14c8b8,"openfl.display.NativeWindow.get_stage","openfl/display/NativeWindow.hx",242,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_275_get_x,"openfl.display.NativeWindow","get_x",0xecd05972,"openfl.display.NativeWindow.get_x","openfl/display/NativeWindow.hx",275,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_284_set_x,"openfl.display.NativeWindow","set_x",0xd59f4f7e,"openfl.display.NativeWindow.set_x","openfl/display/NativeWindow.hx",284,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_317_get_y,"openfl.display.NativeWindow","get_y",0xecd05973,"openfl.display.NativeWindow.get_y","openfl/display/NativeWindow.hx",317,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_326_set_y,"openfl.display.NativeWindow","set_y",0xd59f4f7f,"openfl.display.NativeWindow.set_y","openfl/display/NativeWindow.hx",326,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_364_get_width,"openfl.display.NativeWindow","get_width",0x946c1400,"openfl.display.NativeWindow.get_width","openfl/display/NativeWindow.hx",364,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_379_set_width,"openfl.display.NativeWindow","set_width",0x77bd000c,"openfl.display.NativeWindow.set_width","openfl/display/NativeWindow.hx",379,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_425_get_height,"openfl.display.NativeWindow","get_height",0x0074e4ad,"openfl.display.NativeWindow.get_height","openfl/display/NativeWindow.hx",425,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_440_set_height,"openfl.display.NativeWindow","set_height",0x03f28321,"openfl.display.NativeWindow.set_height","openfl/display/NativeWindow.hx",440,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_501_get_bounds,"openfl.display.NativeWindow","get_bounds",0x6446633b,"openfl.display.NativeWindow.get_bounds","openfl/display/NativeWindow.hx",501,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_510_set_bounds,"openfl.display.NativeWindow","set_bounds",0x67c401af,"openfl.display.NativeWindow.set_bounds","openfl/display/NativeWindow.hx",510,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_529_get_title,"openfl.display.NativeWindow","get_title",0xda447392,"openfl.display.NativeWindow.get_title","openfl/display/NativeWindow.hx",529,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_538_set_title,"openfl.display.NativeWindow","set_title",0xbd955f9e,"openfl.display.NativeWindow.set_title","openfl/display/NativeWindow.hx",538,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_568_get_visible,"openfl.display.NativeWindow","get_visible",0x08bcc8ec,"openfl.display.NativeWindow.get_visible","openfl/display/NativeWindow.hx",568,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_581_set_visible,"openfl.display.NativeWindow","set_visible",0x1329cff8,"openfl.display.NativeWindow.set_visible","openfl/display/NativeWindow.hx",581,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_616_get_systemChrome,"openfl.display.NativeWindow","get_systemChrome",0x4d95170f,"openfl.display.NativeWindow.get_systemChrome","openfl/display/NativeWindow.hx",616,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_630_get_displayState,"openfl.display.NativeWindow","get_displayState",0x383401b5,"openfl.display.NativeWindow.get_displayState","openfl/display/NativeWindow.hx",630,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_654_get_active,"openfl.display.NativeWindow","get_active",0x146f1e8c,"openfl.display.NativeWindow.get_active","openfl/display/NativeWindow.hx",654,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_687_get_closed,"openfl.display.NativeWindow","get_closed",0x0c7a8672,"openfl.display.NativeWindow.get_closed","openfl/display/NativeWindow.hx",687,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_701_get_maximizable,"openfl.display.NativeWindow","get_maximizable",0xa00fd90d,"openfl.display.NativeWindow.get_maximizable","openfl/display/NativeWindow.hx",701,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_720_get_minimizable,"openfl.display.NativeWindow","get_minimizable",0x64f57dfb,"openfl.display.NativeWindow.get_minimizable","openfl/display/NativeWindow.hx",720,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_742_get_owner,"openfl.display.NativeWindow","get_owner",0x027ff62d,"openfl.display.NativeWindow.get_owner","openfl/display/NativeWindow.hx",742,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_761_get_renderMode,"openfl.display.NativeWindow","get_renderMode",0x4088859f,"openfl.display.NativeWindow.get_renderMode","openfl/display/NativeWindow.hx",761,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_777_get_resizable,"openfl.display.NativeWindow","get_resizable",0xe1f91a65,"openfl.display.NativeWindow.get_resizable","openfl/display/NativeWindow.hx",777,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_807_get_transparent,"openfl.display.NativeWindow","get_transparent",0x819d40cc,"openfl.display.NativeWindow.get_transparent","openfl/display/NativeWindow.hx",807,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_839_get_minSize,"openfl.display.NativeWindow","get_minSize",0xa2f55fed,"openfl.display.NativeWindow.get_minSize","openfl/display/NativeWindow.hx",839,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_848_set_minSize,"openfl.display.NativeWindow","set_minSize",0xad6266f9,"openfl.display.NativeWindow.set_minSize","openfl/display/NativeWindow.hx",848,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_895_get_maxSize,"openfl.display.NativeWindow","get_maxSize",0x321c49ff,"openfl.display.NativeWindow.get_maxSize","openfl/display/NativeWindow.hx",895,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_904_set_maxSize,"openfl.display.NativeWindow","set_maxSize",0x3c89510b,"openfl.display.NativeWindow.set_maxSize","openfl/display/NativeWindow.hx",904,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_928_activate,"openfl.display.NativeWindow","activate",0x2b275f70,"openfl.display.NativeWindow.activate","openfl/display/NativeWindow.hx",928,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_966_close,"openfl.display.NativeWindow","close",0xa3d2cbdb,"openfl.display.NativeWindow.close","openfl/display/NativeWindow.hx",966,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_1001_minimize,"openfl.display.NativeWindow","minimize",0x66f482db,"openfl.display.NativeWindow.minimize","openfl/display/NativeWindow.hx",1001,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_1039_maximize,"openfl.display.NativeWindow","maximize",0x19da6889,"openfl.display.NativeWindow.maximize","openfl/display/NativeWindow.hx",1039,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_1063_restore,"openfl.display.NativeWindow","restore",0x488faa31,"openfl.display.NativeWindow.restore","openfl/display/NativeWindow.hx",1063,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_1087_listOwnedWindows,"openfl.display.NativeWindow","listOwnedWindows",0xedfb3319,"openfl.display.NativeWindow.listOwnedWindows","openfl/display/NativeWindow.hx",1087,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_1097_window_onFocusIn,"openfl.display.NativeWindow","window_onFocusIn",0x19a822ec,"openfl.display.NativeWindow.window_onFocusIn","openfl/display/NativeWindow.hx",1097,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_1107_window_onFocusOut,"openfl.display.NativeWindow","window_onFocusOut",0x597affa7,"openfl.display.NativeWindow.window_onFocusOut","openfl/display/NativeWindow.hx",1107,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_1120_window_onMove,"openfl.display.NativeWindow","window_onMove",0xbe6dd6a2,"openfl.display.NativeWindow.window_onMove","openfl/display/NativeWindow.hx",1120,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_1129_window_onResize,"openfl.display.NativeWindow","window_onResize",0xd25913c5,"openfl.display.NativeWindow.window_onResize","openfl/display/NativeWindow.hx",1129,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_1138_window_onMinimize,"openfl.display.NativeWindow","window_onMinimize",0x6995cf2f,"openfl.display.NativeWindow.window_onMinimize","openfl/display/NativeWindow.hx",1138,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_1147_window_onMaximize,"openfl.display.NativeWindow","window_onMaximize",0x1c7bb4dd,"openfl.display.NativeWindow.window_onMaximize","openfl/display/NativeWindow.hx",1147,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_1156_window_onRestore,"openfl.display.NativeWindow","window_onRestore",0x42d5445d,"openfl.display.NativeWindow.window_onRestore","openfl/display/NativeWindow.hx",1156,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_1165_window_onClose,"openfl.display.NativeWindow","window_onClose",0x1dab4307,"openfl.display.NativeWindow.window_onClose","openfl/display/NativeWindow.hx",1165,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_85_get_isSupported,"openfl.display.NativeWindow","get_isSupported",0x526d925e,"openfl.display.NativeWindow.get_isSupported","openfl/display/NativeWindow.hx",85,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_110_get_supportsMenu,"openfl.display.NativeWindow","get_supportsMenu",0x9dc2ba89,"openfl.display.NativeWindow.get_supportsMenu","openfl/display/NativeWindow.hx",110,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_134_get_supportsTransparency,"openfl.display.NativeWindow","get_supportsTransparency",0xdad31d02,"openfl.display.NativeWindow.get_supportsTransparency","openfl/display/NativeWindow.hx",134,0xb7fb0c4b)
HX_LOCAL_STACK_FRAME(_hx_pos_921333b237e2be0e_73_boot,"openfl.display.NativeWindow","boot",0x0260e56f,"openfl.display.NativeWindow.boot","openfl/display/NativeWindow.hx",73,0xb7fb0c4b)
namespace openfl{
namespace display{

void NativeWindow_obj::__construct( ::openfl::display::NativeWindowInitOptions initOptions){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_71_new)
HXLINE( 151)		int length = null();
HXDLIN( 151)		bool fixed = null();
HXDLIN( 151)		::Array< ::Dynamic> array = null();
HXDLIN( 151)		this->_hx___ownedWindows =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE( 150)		this->_hx___active = false;
HXLINE( 144)		this->_hx___closed = false;
HXLINE( 172)		super::__construct(null());
HXLINE( 173)		this->_hx___initOptions = initOptions;
HXLINE( 174)		if (::hx::IsNotNull( this->_hx___initOptions->_hx___window )) {
HXLINE( 176)			this->_hx___window = this->_hx___initOptions->_hx___window;
HXLINE( 182)			::openfl::desktop::NativeApplication_obj::get_nativeApplication()->_hx___activeWindow = ::hx::ObjectPtr<OBJ_>(this);
            		}
            		else {
HXLINE( 186)			 ::openfl::display::Application app = ::openfl::Lib_obj::get_application();
HXLINE( 188)			 ::Dynamic app1 = app->_hx___window->_hx___attributes->__Field(HX_("allowHighDPI",92,07,a2,b4),::hx::paccDynamic);
HXLINE( 191)			 ::Dynamic _hx_tmp = this->_hx___initOptions->resizable;
HXLINE( 187)			this->_hx___window = Dynamic( app->createWindow( ::Dynamic(::hx::Anon_obj::Create(12)
            				->setFixed(0,HX_("resizable",6b,37,50,a9),_hx_tmp)
            				->setFixed(1,HX_("allowHighDPI",92,07,a2,b4),app1)
            				->setFixed(2,HX_("width",06,b6,62,ca),400)
            				->setFixed(3,HX_("fullscreen",3b,3a,b4,f9),false)
            				->setFixed(4,HX_("maximized",18,0e,e1,fe),false)
            				->setFixed(5,HX_("height",e7,07,4c,02),228)
            				->setFixed(6,HX_("title",98,15,3b,10),HX_("",00,00,00,00))
            				->setFixed(7,HX_("alwaysOnTop",67,4d,53,16),false)
            				->setFixed(8,HX_("borderless",45,46,71,17),::hx::IsEq( this->_hx___initOptions->systemChrome,1 ))
            				->setFixed(9,HX_("minimized",86,fb,9d,28),false)
            				->setFixed(10,HX_("frameRate",ad,11,25,39),app->_hx___window->stage->get_frameRate())
            				->setFixed(11,HX_("hidden",6a,ff,95,4c),true)))).StaticCast<  ::openfl::display::Window >();
HXLINE( 201)			if (::hx::IsNotNull( this->_hx___initOptions->owner )) {
HXLINE( 203)				this->_hx___initOptions->owner->_hx___ownedWindows->push(::hx::ObjectPtr<OBJ_>(this));
            			}
            		}
HXLINE( 206)		this->_hx___previousX = this->_hx___window->_hx___x;
HXLINE( 207)		this->_hx___previousY = this->_hx___window->_hx___y;
HXLINE( 212)		this->_hx___previousWidth = this->_hx___window->_hx___width;
HXLINE( 213)		this->_hx___previousHeight = this->_hx___window->_hx___height;
HXLINE( 215)		this->_hx___previousDisplayState = 0;
HXLINE( 216)		this->_hx___window->stage->nativeWindow = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 217)		::openfl::desktop::NativeApplication_obj::get_nativeApplication()->_hx___openedWindows->push(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 218)		this->_hx___window->onFocusIn->add(this->window_onFocusIn_dyn(),null(),null());
HXLINE( 219)		this->_hx___window->onFocusOut->add(this->window_onFocusOut_dyn(),null(),null());
HXLINE( 220)		this->_hx___window->onMove->add(this->window_onMove_dyn(),null(),null());
HXLINE( 221)		this->_hx___window->onResize->add(this->window_onResize_dyn(),null(),null());
HXLINE( 222)		this->_hx___window->onMinimize->add(this->window_onMinimize_dyn(),null(),null());
HXLINE( 223)		this->_hx___window->onMaximize->add(this->window_onMaximize_dyn(),null(),null());
HXLINE( 224)		this->_hx___window->onRestore->add(this->window_onRestore_dyn(),null(),null());
HXLINE( 225)		this->_hx___window->onClose->add(this->window_onClose_dyn(),null(),null());
            	}

Dynamic NativeWindow_obj::__CreateEmpty() { return new NativeWindow_obj; }

void *NativeWindow_obj::_hx_vtable = 0;

Dynamic NativeWindow_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NativeWindow_obj > _hx_result = new NativeWindow_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool NativeWindow_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x7ed78f1d;
	}
}

 ::openfl::display::Stage NativeWindow_obj::get_stage(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_242_get_stage)
HXLINE( 243)		if (this->_hx___closed) {
HXLINE( 245)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE( 247)		return this->_hx___window->stage;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,get_stage,return )

Float NativeWindow_obj::get_x(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_275_get_x)
HXLINE( 276)		if (this->_hx___closed) {
HXLINE( 278)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE( 280)		return ( (Float)(this->_hx___window->_hx___x) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,get_x,return )

Float NativeWindow_obj::set_x(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_284_set_x)
HXLINE( 285)		if (this->_hx___closed) {
HXLINE( 287)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE( 289)		 ::openfl::display::Window _hx_tmp = this->_hx___window;
HXDLIN( 289)		return ( (Float)(_hx_tmp->set_x(::Std_obj::_hx_int(value))) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,set_x,return )

Float NativeWindow_obj::get_y(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_317_get_y)
HXLINE( 318)		if (this->_hx___closed) {
HXLINE( 320)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE( 322)		return ( (Float)(this->_hx___window->_hx___y) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,get_y,return )

Float NativeWindow_obj::set_y(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_326_set_y)
HXLINE( 327)		if (this->_hx___closed) {
HXLINE( 329)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE( 331)		 ::openfl::display::Window _hx_tmp = this->_hx___window;
HXDLIN( 331)		return ( (Float)(_hx_tmp->set_y(::Std_obj::_hx_int(value))) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,set_y,return )

Float NativeWindow_obj::get_width(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_364_get_width)
HXLINE( 365)		if (this->_hx___closed) {
HXLINE( 367)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE( 375)		return ( (Float)(this->_hx___window->_hx___width) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,get_width,return )

Float NativeWindow_obj::set_width(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_379_set_width)
HXLINE( 380)		if (this->_hx___closed) {
HXLINE( 382)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE( 390)		 ::openfl::display::Window _hx_tmp = this->_hx___window;
HXDLIN( 390)		return ( (Float)(_hx_tmp->set_width(::Std_obj::_hx_int(value))) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,set_width,return )

Float NativeWindow_obj::get_height(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_425_get_height)
HXLINE( 426)		if (this->_hx___closed) {
HXLINE( 428)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE( 436)		return ( (Float)(this->_hx___window->_hx___height) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,get_height,return )

Float NativeWindow_obj::set_height(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_440_set_height)
HXLINE( 441)		if (this->_hx___closed) {
HXLINE( 443)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE( 451)		 ::openfl::display::Window _hx_tmp = this->_hx___window;
HXDLIN( 451)		return ( (Float)(_hx_tmp->set_height(::Std_obj::_hx_int(value))) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,set_height,return )

 ::openfl::geom::Rectangle NativeWindow_obj::get_bounds(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_501_get_bounds)
HXLINE( 502)		if (this->_hx___closed) {
HXLINE( 504)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE( 506)		return  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,this->_hx___window->_hx___x,this->_hx___window->_hx___y,this->_hx___window->_hx___width,this->_hx___window->_hx___height);
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,get_bounds,return )

 ::openfl::geom::Rectangle NativeWindow_obj::set_bounds( ::openfl::geom::Rectangle value){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_510_set_bounds)
HXLINE( 511)		if (this->_hx___closed) {
HXLINE( 513)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE( 515)		 ::openfl::display::Window _hx_tmp = this->_hx___window;
HXDLIN( 515)		int _hx_tmp1 = ::Std_obj::_hx_int(value->x);
HXDLIN( 515)		_hx_tmp->move(_hx_tmp1,::Std_obj::_hx_int(value->y));
HXLINE( 516)		 ::openfl::display::Window _hx_tmp2 = this->_hx___window;
HXDLIN( 516)		int _hx_tmp3 = ::Std_obj::_hx_int(value->width);
HXDLIN( 516)		_hx_tmp2->resize(_hx_tmp3,::Std_obj::_hx_int(value->height));
HXLINE( 517)		return  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,this->_hx___window->_hx___x,this->_hx___window->_hx___y,this->_hx___window->_hx___width,this->_hx___window->_hx___height);
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,set_bounds,return )

::String NativeWindow_obj::get_title(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_529_get_title)
HXLINE( 530)		if (this->_hx___closed) {
HXLINE( 532)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE( 534)		return this->_hx___window->_hx___title;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,get_title,return )

::String NativeWindow_obj::set_title(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_538_set_title)
HXLINE( 539)		if (this->_hx___closed) {
HXLINE( 541)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE( 543)		return this->_hx___window->set_title(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,set_title,return )

bool NativeWindow_obj::get_visible(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_568_get_visible)
HXLINE( 569)		if (this->_hx___closed) {
HXLINE( 571)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE( 576)		return this->_hx___window->_hx___visible;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,get_visible,return )

bool NativeWindow_obj::set_visible(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_581_set_visible)
HXLINE( 582)		if (this->_hx___closed) {
HXLINE( 584)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE( 601)		return this->_hx___window->set_visible(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,set_visible,return )

 ::Dynamic NativeWindow_obj::get_systemChrome(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_616_get_systemChrome)
HXLINE( 617)		if (this->_hx___closed) {
HXLINE( 619)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE( 621)		return this->_hx___initOptions->systemChrome;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,get_systemChrome,return )

 ::Dynamic NativeWindow_obj::get_displayState(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_630_get_displayState)
HXLINE( 631)		if (this->_hx___closed) {
HXLINE( 633)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE( 635)		if (this->_hx___window->_hx___minimized) {
HXLINE( 637)			return 2;
            		}
            		else {
HXLINE( 639)			if (this->_hx___window->_hx___maximized) {
HXLINE( 641)				return 1;
            			}
            		}
HXLINE( 643)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,get_displayState,return )

bool NativeWindow_obj::get_active(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_654_get_active)
HXLINE( 655)		if (this->_hx___closed) {
HXLINE( 657)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE( 659)		return this->_hx___active;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,get_active,return )

bool NativeWindow_obj::get_closed(){
            	HX_STACKFRAME(&_hx_pos_921333b237e2be0e_687_get_closed)
HXDLIN( 687)		return this->_hx___closed;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,get_closed,return )

bool NativeWindow_obj::get_maximizable(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_701_get_maximizable)
HXLINE( 702)		if (this->_hx___closed) {
HXLINE( 704)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE( 706)		return this->_hx___initOptions->maximizable;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,get_maximizable,return )

bool NativeWindow_obj::get_minimizable(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_720_get_minimizable)
HXLINE( 721)		if (this->_hx___closed) {
HXLINE( 723)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE( 725)		return this->_hx___initOptions->minimizable;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,get_minimizable,return )

 ::openfl::display::NativeWindow NativeWindow_obj::get_owner(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_742_get_owner)
HXLINE( 743)		if (this->_hx___closed) {
HXLINE( 745)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE( 747)		return this->_hx___initOptions->owner;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,get_owner,return )

::String NativeWindow_obj::get_renderMode(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_761_get_renderMode)
HXLINE( 762)		if (this->_hx___closed) {
HXLINE( 764)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE( 766)		return this->_hx___initOptions->renderMode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,get_renderMode,return )

bool NativeWindow_obj::get_resizable(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_777_get_resizable)
HXLINE( 778)		if (this->_hx___closed) {
HXLINE( 780)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE( 782)		return this->_hx___initOptions->resizable;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,get_resizable,return )

bool NativeWindow_obj::get_transparent(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_807_get_transparent)
HXLINE( 808)		if (this->_hx___closed) {
HXLINE( 810)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE( 812)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,get_transparent,return )

 ::openfl::geom::Point NativeWindow_obj::get_minSize(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_839_get_minSize)
HXLINE( 840)		if (this->_hx___closed) {
HXLINE( 842)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE( 844)		return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,this->_hx___window->_hx___minWidth,this->_hx___window->_hx___minHeight);
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,get_minSize,return )

 ::openfl::geom::Point NativeWindow_obj::set_minSize( ::openfl::geom::Point value){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_848_set_minSize)
HXLINE( 849)		if (this->_hx___closed) {
HXLINE( 851)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE( 853)		 ::openfl::display::Window _hx_tmp = this->_hx___window;
HXDLIN( 853)		int _hx_tmp1 = ::Std_obj::_hx_int(value->x);
HXDLIN( 853)		_hx_tmp->setMinSize(_hx_tmp1,::Std_obj::_hx_int(value->y));
HXLINE( 854)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,set_minSize,return )

 ::openfl::geom::Point NativeWindow_obj::get_maxSize(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_895_get_maxSize)
HXLINE( 896)		if (this->_hx___closed) {
HXLINE( 898)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE( 900)		return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,this->_hx___window->_hx___maxWidth,this->_hx___window->_hx___maxHeight);
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,get_maxSize,return )

 ::openfl::geom::Point NativeWindow_obj::set_maxSize( ::openfl::geom::Point value){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_904_set_maxSize)
HXLINE( 905)		if (this->_hx___closed) {
HXLINE( 907)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE( 909)		 ::openfl::display::Window _hx_tmp = this->_hx___window;
HXDLIN( 909)		int _hx_tmp1 = ::Std_obj::_hx_int(value->x);
HXDLIN( 909)		_hx_tmp->setMaxSize(_hx_tmp1,::Std_obj::_hx_int(value->y));
HXLINE( 910)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,set_maxSize,return )

void NativeWindow_obj::activate(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_928_activate)
HXLINE( 929)		if (this->_hx___closed) {
HXLINE( 931)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE( 933)		this->set_visible(true);
HXLINE( 934)		this->_hx___window->focus();
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,activate,(void))

void NativeWindow_obj::close(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_966_close)
HXLINE( 967)		if (this->_hx___closed) {
HXLINE( 969)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE( 971)		this->_hx___window->close();
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,close,(void))

void NativeWindow_obj::minimize(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_1001_minimize)
HXLINE(1002)		if (this->_hx___closed) {
HXLINE(1004)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE(1006)		this->_hx___window->set_minimized(true);
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,minimize,(void))

void NativeWindow_obj::maximize(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_1039_maximize)
HXLINE(1040)		if (this->_hx___closed) {
HXLINE(1042)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE(1044)		{
HXLINE(1044)			 ::openfl::display::Window _this = this->_hx___window;
HXDLIN(1044)			_this->_hx___minimized = false;
HXDLIN(1044)			_this->_hx___maximized = _this->_hx___backend->setMaximized(true);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,maximize,(void))

void NativeWindow_obj::restore(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_1063_restore)
HXLINE(1064)		if (this->_hx___closed) {
HXLINE(1066)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE(1068)		if (this->_hx___window->_hx___maximized) {
HXLINE(1070)			 ::openfl::display::Window _this = this->_hx___window;
HXDLIN(1070)			_this->_hx___minimized = false;
HXDLIN(1070)			_this->_hx___maximized = _this->_hx___backend->setMaximized(false);
            		}
HXLINE(1072)		if (this->_hx___window->_hx___minimized) {
HXLINE(1074)			this->_hx___window->set_minimized(false);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,restore,(void))

 ::openfl::_Vector::ObjectVector NativeWindow_obj::listOwnedWindows(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_1087_listOwnedWindows)
HXLINE(1088)		if (this->_hx___closed) {
HXLINE(1090)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,::openfl::display::NativeWindow_obj::ERROR_CLOSED,3200));
            		}
HXLINE(1093)		return ( ( ::openfl::_Vector::ObjectVector)(this->_hx___ownedWindows->copy()) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,listOwnedWindows,return )

void NativeWindow_obj::window_onFocusIn(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_1097_window_onFocusIn)
HXLINE(1098)		this->_hx___active = true;
HXLINE(1099)		::openfl::desktop::NativeApplication_obj::get_nativeApplication()->_hx___activeWindow = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1100)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("activate",b3,1b,ac,e5),false,false));
HXLINE(1103)		 ::openfl::desktop::NativeApplication _hx_tmp = ::openfl::desktop::NativeApplication_obj::get_nativeApplication();
HXDLIN(1103)		_hx_tmp->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("activate",b3,1b,ac,e5),false,false));
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,window_onFocusIn,(void))

void NativeWindow_obj::window_onFocusOut(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_1107_window_onFocusOut)
HXLINE(1108)		this->_hx___active = false;
HXLINE(1109)		if (::hx::IsInstanceEq( ::openfl::desktop::NativeApplication_obj::get_nativeApplication()->_hx___activeWindow,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE(1111)			::openfl::desktop::NativeApplication_obj::get_nativeApplication()->_hx___activeWindow = null();
HXLINE(1114)			 ::openfl::desktop::NativeApplication _hx_tmp = ::openfl::desktop::NativeApplication_obj::get_nativeApplication();
HXDLIN(1114)			_hx_tmp->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("deactivate",34,5c,01,3c),false,false));
            		}
HXLINE(1116)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("deactivate",34,5c,01,3c),false,false));
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,window_onFocusOut,(void))

void NativeWindow_obj::window_onMove(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_1120_window_onMove)
HXLINE(1121)		 ::openfl::geom::Rectangle beforeBounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,this->_hx___previousX,this->_hx___previousY,this->_hx___window->_hx___width,this->_hx___window->_hx___height);
HXLINE(1122)		 ::openfl::geom::Rectangle afterBounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,this->_hx___window->_hx___x,this->_hx___window->_hx___y,this->_hx___window->_hx___width,this->_hx___window->_hx___height);
HXLINE(1123)		this->_hx___previousX = this->_hx___window->_hx___x;
HXLINE(1124)		this->_hx___previousY = this->_hx___window->_hx___y;
HXLINE(1125)		this->dispatchEvent( ::openfl::events::NativeWindowBoundsEvent_obj::__alloc( HX_CTX ,HX_("move",11,e3,60,48),false,false,beforeBounds,afterBounds));
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,window_onMove,(void))

void NativeWindow_obj::window_onResize(Float width,Float height){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_1129_window_onResize)
HXLINE(1130)		 ::openfl::geom::Rectangle beforeBounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,this->_hx___window->_hx___x,this->_hx___window->_hx___y,this->_hx___previousWidth,this->_hx___previousHeight);
HXLINE(1131)		 ::openfl::geom::Rectangle afterBounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,this->_hx___window->_hx___x,this->_hx___window->_hx___y,this->_hx___window->_hx___width,this->_hx___window->_hx___height);
HXLINE(1132)		this->_hx___previousWidth = this->_hx___window->_hx___width;
HXLINE(1133)		this->_hx___previousHeight = this->_hx___window->_hx___height;
HXLINE(1134)		this->dispatchEvent( ::openfl::events::NativeWindowBoundsEvent_obj::__alloc( HX_CTX ,HX_("resize",f4,59,7b,08),false,false,beforeBounds,afterBounds));
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,window_onResize,(void))

void NativeWindow_obj::window_onMinimize(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_1138_window_onMinimize)
HXLINE(1139)		 ::Dynamic beforeDisplayState = this->_hx___previousDisplayState;
HXLINE(1140)		 ::Dynamic afterDisplayState = 2;
HXLINE(1141)		this->_hx___previousDisplayState = afterDisplayState;
HXLINE(1142)		this->dispatchEvent( ::openfl::events::NativeWindowDisplayStateEvent_obj::__alloc( HX_CTX ,HX_("displayStateChange",3f,cf,7a,46),false,false,beforeDisplayState,afterDisplayState));
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,window_onMinimize,(void))

void NativeWindow_obj::window_onMaximize(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_1147_window_onMaximize)
HXLINE(1148)		 ::Dynamic beforeDisplayState = this->_hx___previousDisplayState;
HXLINE(1149)		 ::Dynamic afterDisplayState = 1;
HXLINE(1150)		this->_hx___previousDisplayState = afterDisplayState;
HXLINE(1151)		this->dispatchEvent( ::openfl::events::NativeWindowDisplayStateEvent_obj::__alloc( HX_CTX ,HX_("displayStateChange",3f,cf,7a,46),false,false,beforeDisplayState,afterDisplayState));
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,window_onMaximize,(void))

void NativeWindow_obj::window_onRestore(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_1156_window_onRestore)
HXLINE(1157)		 ::Dynamic beforeDisplayState = this->_hx___previousDisplayState;
HXLINE(1158)		 ::Dynamic afterDisplayState = 0;
HXLINE(1159)		this->_hx___previousDisplayState = afterDisplayState;
HXLINE(1160)		this->dispatchEvent( ::openfl::events::NativeWindowDisplayStateEvent_obj::__alloc( HX_CTX ,HX_("displayStateChange",3f,cf,7a,46),false,false,beforeDisplayState,afterDisplayState));
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,window_onRestore,(void))

void NativeWindow_obj::window_onClose(){
            	HX_GC_STACKFRAME(&_hx_pos_921333b237e2be0e_1165_window_onClose)
HXLINE(1167)		while((this->_hx___ownedWindows->get_length() > 0)){
HXLINE(1169)			 ::openfl::display::NativeWindow childWindow = this->_hx___ownedWindows->pop().StaticCast<  ::openfl::display::NativeWindow >();
HXLINE(1170)			childWindow->close();
            		}
HXLINE(1172)		this->_hx___closed = true;
HXLINE(1173)		this->_hx___window->onFocusIn->remove(this->window_onFocusIn_dyn());
HXLINE(1174)		this->_hx___window->onFocusOut->remove(this->window_onFocusOut_dyn());
HXLINE(1175)		this->_hx___window->onResize->remove(this->window_onResize_dyn());
HXLINE(1176)		if (::hx::IsNotNull( this->_hx___initOptions->owner )) {
HXLINE(1178)			int index = this->_hx___initOptions->owner->_hx___ownedWindows->indexOf(::hx::ObjectPtr<OBJ_>(this),0);
HXLINE(1179)			if ((index != -1)) {
HXLINE(1181)				this->_hx___initOptions->owner->_hx___ownedWindows->removeAt(index).StaticCast<  ::openfl::display::NativeWindow >();
            			}
            		}
HXLINE(1184)		int index = ::openfl::desktop::NativeApplication_obj::get_nativeApplication()->_hx___openedWindows->indexOf(::hx::ObjectPtr<OBJ_>(this),null());
HXLINE(1185)		if ((index != -1)) {
HXLINE(1187)			::openfl::desktop::NativeApplication_obj::get_nativeApplication()->_hx___openedWindows->removeRange(index,1);
            		}
HXLINE(1189)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("close",b8,17,63,48),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,window_onClose,(void))

::String NativeWindow_obj::ERROR_CLOSED;

bool NativeWindow_obj::get_isSupported(){
            	HX_STACKFRAME(&_hx_pos_921333b237e2be0e_85_get_isSupported)
HXDLIN(  85)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,get_isSupported,return )

bool NativeWindow_obj::get_supportsMenu(){
            	HX_STACKFRAME(&_hx_pos_921333b237e2be0e_110_get_supportsMenu)
HXDLIN( 110)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,get_supportsMenu,return )

bool NativeWindow_obj::get_supportsTransparency(){
            	HX_STACKFRAME(&_hx_pos_921333b237e2be0e_134_get_supportsTransparency)
HXDLIN( 134)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,get_supportsTransparency,return )


::hx::ObjectPtr< NativeWindow_obj > NativeWindow_obj::__new( ::openfl::display::NativeWindowInitOptions initOptions) {
	::hx::ObjectPtr< NativeWindow_obj > __this = new NativeWindow_obj();
	__this->__construct(initOptions);
	return __this;
}

::hx::ObjectPtr< NativeWindow_obj > NativeWindow_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::NativeWindowInitOptions initOptions) {
	NativeWindow_obj *__this = (NativeWindow_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NativeWindow_obj), true, "openfl.display.NativeWindow"));
	*(void **)__this = NativeWindow_obj::_hx_vtable;
	__this->__construct(initOptions);
	return __this;
}

NativeWindow_obj::NativeWindow_obj()
{
}

void NativeWindow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeWindow);
	HX_MARK_MEMBER_NAME(_hx___initOptions,"__initOptions");
	HX_MARK_MEMBER_NAME(_hx___window,"__window");
	HX_MARK_MEMBER_NAME(_hx___closed,"__closed");
	HX_MARK_MEMBER_NAME(_hx___previousX,"__previousX");
	HX_MARK_MEMBER_NAME(_hx___previousY,"__previousY");
	HX_MARK_MEMBER_NAME(_hx___previousWidth,"__previousWidth");
	HX_MARK_MEMBER_NAME(_hx___previousHeight,"__previousHeight");
	HX_MARK_MEMBER_NAME(_hx___previousDisplayState,"__previousDisplayState");
	HX_MARK_MEMBER_NAME(_hx___active,"__active");
	HX_MARK_MEMBER_NAME(_hx___ownedWindows,"__ownedWindows");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NativeWindow_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___initOptions,"__initOptions");
	HX_VISIT_MEMBER_NAME(_hx___window,"__window");
	HX_VISIT_MEMBER_NAME(_hx___closed,"__closed");
	HX_VISIT_MEMBER_NAME(_hx___previousX,"__previousX");
	HX_VISIT_MEMBER_NAME(_hx___previousY,"__previousY");
	HX_VISIT_MEMBER_NAME(_hx___previousWidth,"__previousWidth");
	HX_VISIT_MEMBER_NAME(_hx___previousHeight,"__previousHeight");
	HX_VISIT_MEMBER_NAME(_hx___previousDisplayState,"__previousDisplayState");
	HX_VISIT_MEMBER_NAME(_hx___active,"__active");
	HX_VISIT_MEMBER_NAME(_hx___ownedWindows,"__ownedWindows");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val NativeWindow_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_x() ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_y() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stage") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_stage() ); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return ::hx::Val( get_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return ::hx::Val( get_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_width() ); }
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_title() ); }
		if (HX_FIELD_EQ(inName,"owner") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_owner() ); }
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_height() ); }
		if (HX_FIELD_EQ(inName,"bounds") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bounds() ); }
		if (HX_FIELD_EQ(inName,"active") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_active() ); }
		if (HX_FIELD_EQ(inName,"closed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_closed() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_visible() ); }
		if (HX_FIELD_EQ(inName,"minSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_minSize() ); }
		if (HX_FIELD_EQ(inName,"maxSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxSize() ); }
		if (HX_FIELD_EQ(inName,"restore") ) { return ::hx::Val( restore_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__window") ) { return ::hx::Val( _hx___window ); }
		if (HX_FIELD_EQ(inName,"__closed") ) { return ::hx::Val( _hx___closed ); }
		if (HX_FIELD_EQ(inName,"__active") ) { return ::hx::Val( _hx___active ); }
		if (HX_FIELD_EQ(inName,"activate") ) { return ::hx::Val( activate_dyn() ); }
		if (HX_FIELD_EQ(inName,"minimize") ) { return ::hx::Val( minimize_dyn() ); }
		if (HX_FIELD_EQ(inName,"maximize") ) { return ::hx::Val( maximize_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_stage") ) { return ::hx::Val( get_stage_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_title") ) { return ::hx::Val( get_title_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_title") ) { return ::hx::Val( set_title_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_owner") ) { return ::hx::Val( get_owner_dyn() ); }
		if (HX_FIELD_EQ(inName,"resizable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_resizable() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_bounds") ) { return ::hx::Val( get_bounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bounds") ) { return ::hx::Val( set_bounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_active") ) { return ::hx::Val( get_active_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_closed") ) { return ::hx::Val( get_closed_dyn() ); }
		if (HX_FIELD_EQ(inName,"renderMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_renderMode() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__previousX") ) { return ::hx::Val( _hx___previousX ); }
		if (HX_FIELD_EQ(inName,"__previousY") ) { return ::hx::Val( _hx___previousY ); }
		if (HX_FIELD_EQ(inName,"get_visible") ) { return ::hx::Val( get_visible_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return ::hx::Val( set_visible_dyn() ); }
		if (HX_FIELD_EQ(inName,"maximizable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maximizable() ); }
		if (HX_FIELD_EQ(inName,"minimizable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_minimizable() ); }
		if (HX_FIELD_EQ(inName,"transparent") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_transparent() ); }
		if (HX_FIELD_EQ(inName,"get_minSize") ) { return ::hx::Val( get_minSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_minSize") ) { return ::hx::Val( set_minSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxSize") ) { return ::hx::Val( get_maxSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxSize") ) { return ::hx::Val( set_maxSize_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"systemChrome") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_systemChrome() ); }
		if (HX_FIELD_EQ(inName,"displayState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_displayState() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__initOptions") ) { return ::hx::Val( _hx___initOptions ); }
		if (HX_FIELD_EQ(inName,"get_resizable") ) { return ::hx::Val( get_resizable_dyn() ); }
		if (HX_FIELD_EQ(inName,"window_onMove") ) { return ::hx::Val( window_onMove_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__ownedWindows") ) { return ::hx::Val( _hx___ownedWindows ); }
		if (HX_FIELD_EQ(inName,"get_renderMode") ) { return ::hx::Val( get_renderMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"window_onClose") ) { return ::hx::Val( window_onClose_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__previousWidth") ) { return ::hx::Val( _hx___previousWidth ); }
		if (HX_FIELD_EQ(inName,"get_maximizable") ) { return ::hx::Val( get_maximizable_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_minimizable") ) { return ::hx::Val( get_minimizable_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_transparent") ) { return ::hx::Val( get_transparent_dyn() ); }
		if (HX_FIELD_EQ(inName,"window_onResize") ) { return ::hx::Val( window_onResize_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__previousHeight") ) { return ::hx::Val( _hx___previousHeight ); }
		if (HX_FIELD_EQ(inName,"get_systemChrome") ) { return ::hx::Val( get_systemChrome_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_displayState") ) { return ::hx::Val( get_displayState_dyn() ); }
		if (HX_FIELD_EQ(inName,"listOwnedWindows") ) { return ::hx::Val( listOwnedWindows_dyn() ); }
		if (HX_FIELD_EQ(inName,"window_onFocusIn") ) { return ::hx::Val( window_onFocusIn_dyn() ); }
		if (HX_FIELD_EQ(inName,"window_onRestore") ) { return ::hx::Val( window_onRestore_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"window_onFocusOut") ) { return ::hx::Val( window_onFocusOut_dyn() ); }
		if (HX_FIELD_EQ(inName,"window_onMinimize") ) { return ::hx::Val( window_onMinimize_dyn() ); }
		if (HX_FIELD_EQ(inName,"window_onMaximize") ) { return ::hx::Val( window_onMaximize_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__previousDisplayState") ) { return ::hx::Val( _hx___previousDisplayState ); }
	}
	return super::__Field(inName,inCallProp);
}

bool NativeWindow_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_isSupported() ); return true; } }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ERROR_CLOSED") ) { outValue = ( ERROR_CLOSED ); return true; }
		if (HX_FIELD_EQ(inName,"supportsMenu") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_supportsMenu() ); return true; } }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isSupported") ) { outValue = get_isSupported_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_supportsMenu") ) { outValue = get_supportsMenu_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"supportsTransparency") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_supportsTransparency() ); return true; } }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_supportsTransparency") ) { outValue = get_supportsTransparency_dyn(); return true; }
	}
	return false;
}

::hx::Val NativeWindow_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_x(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_y(inValue.Cast< Float >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_width(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_title(inValue.Cast< ::String >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_height(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"bounds") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bounds(inValue.Cast<  ::openfl::geom::Rectangle >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_visible(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"minSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_minSize(inValue.Cast<  ::openfl::geom::Point >()) ); }
		if (HX_FIELD_EQ(inName,"maxSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maxSize(inValue.Cast<  ::openfl::geom::Point >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__window") ) { _hx___window=inValue.Cast<  ::openfl::display::Window >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__closed") ) { _hx___closed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__active") ) { _hx___active=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__previousX") ) { _hx___previousX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__previousY") ) { _hx___previousY=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__initOptions") ) { _hx___initOptions=inValue.Cast<  ::openfl::display::NativeWindowInitOptions >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__ownedWindows") ) { _hx___ownedWindows=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__previousWidth") ) { _hx___previousWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__previousHeight") ) { _hx___previousHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__previousDisplayState") ) { _hx___previousDisplayState=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NativeWindow_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"ERROR_CLOSED") ) { ERROR_CLOSED=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void NativeWindow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__initOptions",0e,e3,e0,e0));
	outFields->push(HX_("__window",10,ff,bb,fa));
	outFields->push(HX_("__closed",cc,14,81,b6));
	outFields->push(HX_("__previousX",21,3d,20,45));
	outFields->push(HX_("__previousY",22,3d,20,45));
	outFields->push(HX_("__previousWidth",2f,fb,08,79));
	outFields->push(HX_("__previousHeight",9e,46,22,25));
	outFields->push(HX_("__previousDisplayState",66,ee,54,64));
	outFields->push(HX_("__active",e6,ac,75,be));
	outFields->push(HX_("__ownedWindows",fe,6f,dd,70));
	outFields->push(HX_("stage",be,6a,0b,84));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("bounds",75,86,1d,66));
	outFields->push(HX_("title",98,15,3b,10));
	outFields->push(HX_("visible",72,78,24,a3));
	outFields->push(HX_("systemChrome",c9,61,c5,a5));
	outFields->push(HX_("displayState",6f,4c,64,90));
	outFields->push(HX_("active",c6,41,46,16));
	outFields->push(HX_("closed",ac,a9,51,0e));
	outFields->push(HX_("maximizable",93,c3,2c,41));
	outFields->push(HX_("minimizable",81,68,12,06));
	outFields->push(HX_("owner",33,98,76,38));
	outFields->push(HX_("renderMode",d9,cd,6a,e5));
	outFields->push(HX_("resizable",6b,37,50,a9));
	outFields->push(HX_("transparent",52,2b,ba,22));
	outFields->push(HX_("minSize",73,0f,5d,3d));
	outFields->push(HX_("maxSize",85,f9,83,cc));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NativeWindow_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::NativeWindowInitOptions */ ,(int)offsetof(NativeWindow_obj,_hx___initOptions),HX_("__initOptions",0e,e3,e0,e0)},
	{::hx::fsObject /*  ::openfl::display::Window */ ,(int)offsetof(NativeWindow_obj,_hx___window),HX_("__window",10,ff,bb,fa)},
	{::hx::fsBool,(int)offsetof(NativeWindow_obj,_hx___closed),HX_("__closed",cc,14,81,b6)},
	{::hx::fsInt,(int)offsetof(NativeWindow_obj,_hx___previousX),HX_("__previousX",21,3d,20,45)},
	{::hx::fsInt,(int)offsetof(NativeWindow_obj,_hx___previousY),HX_("__previousY",22,3d,20,45)},
	{::hx::fsInt,(int)offsetof(NativeWindow_obj,_hx___previousWidth),HX_("__previousWidth",2f,fb,08,79)},
	{::hx::fsInt,(int)offsetof(NativeWindow_obj,_hx___previousHeight),HX_("__previousHeight",9e,46,22,25)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NativeWindow_obj,_hx___previousDisplayState),HX_("__previousDisplayState",66,ee,54,64)},
	{::hx::fsBool,(int)offsetof(NativeWindow_obj,_hx___active),HX_("__active",e6,ac,75,be)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(NativeWindow_obj,_hx___ownedWindows),HX_("__ownedWindows",fe,6f,dd,70)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo NativeWindow_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &NativeWindow_obj::ERROR_CLOSED,HX_("ERROR_CLOSED",a3,a8,a4,31)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String NativeWindow_obj_sMemberFields[] = {
	HX_("__initOptions",0e,e3,e0,e0),
	HX_("__window",10,ff,bb,fa),
	HX_("__closed",cc,14,81,b6),
	HX_("__previousX",21,3d,20,45),
	HX_("__previousY",22,3d,20,45),
	HX_("__previousWidth",2f,fb,08,79),
	HX_("__previousHeight",9e,46,22,25),
	HX_("__previousDisplayState",66,ee,54,64),
	HX_("__active",e6,ac,75,be),
	HX_("__ownedWindows",fe,6f,dd,70),
	HX_("get_stage",15,c7,b4,c7),
	HX_("get_x",4f,a5,60,91),
	HX_("set_x",5b,9b,2f,7a),
	HX_("get_y",50,a5,60,91),
	HX_("set_y",5c,9b,2f,7a),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_width",69,fe,5c,f1),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_height",24,16,51,f6),
	HX_("get_bounds",3e,f6,a4,56),
	HX_("set_bounds",b2,94,22,5a),
	HX_("get_title",ef,71,e4,53),
	HX_("set_title",fb,5d,35,37),
	HX_("get_visible",89,d8,1e,29),
	HX_("set_visible",95,df,8b,33),
	HX_("get_systemChrome",52,4e,64,aa),
	HX_("get_displayState",f8,38,03,95),
	HX_("get_active",8f,b1,cd,06),
	HX_("get_closed",75,19,d9,fe),
	HX_("get_maximizable",2a,7b,0e,02),
	HX_("get_minimizable",18,20,f4,c6),
	HX_("get_owner",8a,f4,1f,7c),
	HX_("get_renderMode",22,56,60,5b),
	HX_("get_resizable",42,0b,b4,6a),
	HX_("get_transparent",e9,e2,9b,e3),
	HX_("get_minSize",8a,6f,57,c3),
	HX_("set_minSize",96,76,c4,cd),
	HX_("get_maxSize",9c,59,7e,52),
	HX_("set_maxSize",a8,60,eb,5c),
	HX_("activate",b3,1b,ac,e5),
	HX_("close",b8,17,63,48),
	HX_("minimize",1e,3f,79,21),
	HX_("maximize",cc,24,5f,d4),
	HX_("restore",4e,67,b0,6a),
	HX_("listOwnedWindows",5c,6a,ca,4a),
	HX_("window_onFocusIn",2f,5a,77,76),
	HX_("window_onFocusOut",04,23,fc,31),
	HX_("window_onMove",7f,c7,28,47),
	HX_("window_onResize",e2,b5,57,34),
	HX_("window_onMinimize",8c,f2,16,42),
	HX_("window_onMaximize",3a,d8,fc,f4),
	HX_("window_onRestore",a0,7b,a4,9f),
	HX_("window_onClose",8a,13,83,38),
	::String(null()) };

static void NativeWindow_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeWindow_obj::ERROR_CLOSED,"ERROR_CLOSED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NativeWindow_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::ERROR_CLOSED,"ERROR_CLOSED");
};

#endif

::hx::Class NativeWindow_obj::__mClass;

static ::String NativeWindow_obj_sStaticFields[] = {
	HX_("ERROR_CLOSED",a3,a8,a4,31),
	HX_("get_isSupported",7b,34,6c,b4),
	HX_("get_supportsMenu",cc,f1,91,fa),
	HX_("get_supportsTransparency",45,cf,5f,31),
	::String(null())
};

void NativeWindow_obj::__register()
{
	NativeWindow_obj _hx_dummy;
	NativeWindow_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.NativeWindow",51,88,a4,54);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NativeWindow_obj::__GetStatic;
	__mClass->mSetStaticField = &NativeWindow_obj::__SetStatic;
	__mClass->mMarkFunc = NativeWindow_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NativeWindow_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NativeWindow_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NativeWindow_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NativeWindow_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NativeWindow_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NativeWindow_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NativeWindow_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_921333b237e2be0e_73_boot)
HXDLIN(  73)		ERROR_CLOSED = HX_("Cannot perform operation on closed window.",f6,2b,62,c1);
            	}
}

} // end namespace openfl
} // end namespace display
