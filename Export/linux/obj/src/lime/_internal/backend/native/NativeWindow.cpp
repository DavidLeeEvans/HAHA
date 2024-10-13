#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeApplication
#include <lime/_internal/backend/native/NativeApplication.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
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
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics__WebGL2RenderContext_WebGL2RenderContext_Impl_
#include <lime/graphics/_WebGL2RenderContext/WebGL2RenderContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics__WebGLRenderContext_WebGLRenderContext_Impl_
#include <lime/graphics/_WebGLRenderContext/WebGLRenderContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_system_Display
#include <lime/system/Display.h>
#endif
#ifndef INCLUDED_lime_system_DisplayMode
#include <lime/system/DisplayMode.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_BytePointerData
#include <lime/utils/BytePointerData.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_lime_utils__BytePointer_BytePointer_Impl_
#include <lime/utils/_BytePointer/BytePointer_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b81205d558ca9a41_57_new,"lime._internal.backend.native.NativeWindow","new",0x09d80f6b,"lime._internal.backend.native.NativeWindow.new","lime/_internal/backend/native/NativeWindow.hx",57,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_183_alert,"lime._internal.backend.native.NativeWindow","alert",0xc3e8af27,"lime._internal.backend.native.NativeWindow.alert","lime/_internal/backend/native/NativeWindow.hx",183,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_193_close,"lime._internal.backend.native.NativeWindow","close",0xeabd6f83,"lime._internal.backend.native.NativeWindow.close","lime/_internal/backend/native/NativeWindow.hx",193,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_216_contextFlip,"lime._internal.backend.native.NativeWindow","contextFlip",0xc77cba47,"lime._internal.backend.native.NativeWindow.contextFlip","lime/_internal/backend/native/NativeWindow.hx",216,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_235_focus,"lime._internal.backend.native.NativeWindow","focus",0xa6e3b7a3,"lime._internal.backend.native.NativeWindow.focus","lime/_internal/backend/native/NativeWindow.hx",235,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_245_getCursor,"lime._internal.backend.native.NativeWindow","getCursor",0x5168b157,"lime._internal.backend.native.NativeWindow.getCursor","lime/_internal/backend/native/NativeWindow.hx",245,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_249_getDisplay,"lime._internal.backend.native.NativeWindow","getDisplay",0xd8e838a1,"lime._internal.backend.native.NativeWindow.getDisplay","lime/_internal/backend/native/NativeWindow.hx",249,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_266_getDisplayMode,"lime._internal.backend.native.NativeWindow","getDisplayMode",0xc4219ca4,"lime._internal.backend.native.NativeWindow.getDisplayMode","lime/_internal/backend/native/NativeWindow.hx",266,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_287_getFrameRate,"lime._internal.backend.native.NativeWindow","getFrameRate",0x852ab5cc,"lime._internal.backend.native.NativeWindow.getFrameRate","lime/_internal/backend/native/NativeWindow.hx",287,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_291_getMouseLock,"lime._internal.backend.native.NativeWindow","getMouseLock",0x4011f8cf,"lime._internal.backend.native.NativeWindow.getMouseLock","lime/_internal/backend/native/NativeWindow.hx",291,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_303_getOpacity,"lime._internal.backend.native.NativeWindow","getOpacity",0x09036c2a,"lime._internal.backend.native.NativeWindow.getOpacity","lime/_internal/backend/native/NativeWindow.hx",303,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_315_getTextInputEnabled,"lime._internal.backend.native.NativeWindow","getTextInputEnabled",0x70d2f3a5,"lime._internal.backend.native.NativeWindow.getTextInputEnabled","lime/_internal/backend/native/NativeWindow.hx",315,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_328_move,"lime._internal.backend.native.NativeWindow","move",0x9293cda6,"lime._internal.backend.native.NativeWindow.move","lime/_internal/backend/native/NativeWindow.hx",328,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_337_readPixels,"lime._internal.backend.native.NativeWindow","readPixels",0x54625b78,"lime._internal.backend.native.NativeWindow.readPixels","lime/_internal/backend/native/NativeWindow.hx",337,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_420_render,"lime._internal.backend.native.NativeWindow","render",0x71dbe52b,"lime._internal.backend.native.NativeWindow.render","lime/_internal/backend/native/NativeWindow.hx",420,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_456_resize,"lime._internal.backend.native.NativeWindow","resize",0x752dd3c9,"lime._internal.backend.native.NativeWindow.resize","lime/_internal/backend/native/NativeWindow.hx",456,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_466_setMinSize,"lime._internal.backend.native.NativeWindow","setMinSize",0x5e78bc46,"lime._internal.backend.native.NativeWindow.setMinSize","lime/_internal/backend/native/NativeWindow.hx",466,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_476_setMaxSize,"lime._internal.backend.native.NativeWindow","setMaxSize",0xed9fa658,"lime._internal.backend.native.NativeWindow.setMaxSize","lime/_internal/backend/native/NativeWindow.hx",476,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_485_setBorderless,"lime._internal.backend.native.NativeWindow","setBorderless",0x95611f52,"lime._internal.backend.native.NativeWindow.setBorderless","lime/_internal/backend/native/NativeWindow.hx",485,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_497_setCursor,"lime._internal.backend.native.NativeWindow","setCursor",0x34b99d63,"lime._internal.backend.native.NativeWindow.setCursor","lime/_internal/backend/native/NativeWindow.hx",497,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_536_setDisplayMode,"lime._internal.backend.native.NativeWindow","setDisplayMode",0xe4418518,"lime._internal.backend.native.NativeWindow.setDisplayMode","lime/_internal/backend/native/NativeWindow.hx",536,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_556_setMouseLock,"lime._internal.backend.native.NativeWindow","setMouseLock",0x550b1c43,"lime._internal.backend.native.NativeWindow.setMouseLock","lime/_internal/backend/native/NativeWindow.hx",556,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_570_setTextInputEnabled,"lime._internal.backend.native.NativeWindow","setTextInputEnabled",0xad6fe6b1,"lime._internal.backend.native.NativeWindow.setTextInputEnabled","lime/_internal/backend/native/NativeWindow.hx",570,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_582_setTextInputRect,"lime._internal.backend.native.NativeWindow","setTextInputRect",0xe3ba2cf4,"lime._internal.backend.native.NativeWindow.setTextInputRect","lime/_internal/backend/native/NativeWindow.hx",582,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_594_setFrameRate,"lime._internal.backend.native.NativeWindow","setFrameRate",0x9a23d940,"lime._internal.backend.native.NativeWindow.setFrameRate","lime/_internal/backend/native/NativeWindow.hx",594,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_608_setFullscreen,"lime._internal.backend.native.NativeWindow","setFullscreen",0x77a41348,"lime._internal.backend.native.NativeWindow.setFullscreen","lime/_internal/backend/native/NativeWindow.hx",608,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_631_setIcon,"lime._internal.backend.native.NativeWindow","setIcon",0xbaaf48c6,"lime._internal.backend.native.NativeWindow.setIcon","lime/_internal/backend/native/NativeWindow.hx",631,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_640_setMaximized,"lime._internal.backend.native.NativeWindow","setMaximized",0x5fdfd5ab,"lime._internal.backend.native.NativeWindow.setMaximized","lime/_internal/backend/native/NativeWindow.hx",640,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_652_setMinimized,"lime._internal.backend.native.NativeWindow","setMinimized",0x899cc319,"lime._internal.backend.native.NativeWindow.setMinimized","lime/_internal/backend/native/NativeWindow.hx",652,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_665_setOpacity,"lime._internal.backend.native.NativeWindow","setOpacity",0x0c810a9e,"lime._internal.backend.native.NativeWindow.setOpacity","lime/_internal/backend/native/NativeWindow.hx",665,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_674_setResizable,"lime._internal.backend.native.NativeWindow","setResizable",0x0a4efefe,"lime._internal.backend.native.NativeWindow.setResizable","lime/_internal/backend/native/NativeWindow.hx",674,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_691_setTitle,"lime._internal.backend.native.NativeWindow","setTitle",0xf813d7ab,"lime._internal.backend.native.NativeWindow.setTitle","lime/_internal/backend/native/NativeWindow.hx",691,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_703_setVisible,"lime._internal.backend.native.NativeWindow","setVisible",0xc4402545,"lime._internal.backend.native.NativeWindow.setVisible","lime/_internal/backend/native/NativeWindow.hx",703,0x10f0f707)
HX_LOCAL_STACK_FRAME(_hx_pos_b81205d558ca9a41_717_warpMouse,"lime._internal.backend.native.NativeWindow","warpMouse",0x3c987808,"lime._internal.backend.native.NativeWindow.warpMouse","lime/_internal/backend/native/NativeWindow.hx",717,0x10f0f707)
namespace lime{
namespace _internal{
namespace backend{
namespace native{

void NativeWindow_obj::__construct( ::lime::ui::Window parent){
            	HX_GC_STACKFRAME(&_hx_pos_b81205d558ca9a41_57_new)
HXLINE(  58)		this->parent = parent;
HXLINE(  60)		this->cursor = ::lime::ui::MouseCursor_obj::DEFAULT_dyn();
HXLINE(  61)		this->displayMode =  ::lime::_hx_system::DisplayMode_obj::__alloc( HX_CTX ,0,0,0,0);
HXLINE(  63)		 ::Dynamic attributes = parent->_hx___attributes;
HXLINE(  64)		 ::Dynamic contextAttributes;
HXDLIN(  64)		if (::Reflect_obj::hasField(attributes,HX_("context",ef,95,77,19))) {
HXLINE(  64)			contextAttributes = attributes->__Field(HX_("context",ef,95,77,19),::hx::paccDynamic);
            		}
            		else {
HXLINE(  64)			contextAttributes =  ::Dynamic(::hx::Anon_obj::Create(0));
            		}
HXLINE(  65)		::String title;
HXDLIN(  65)		if (::Reflect_obj::hasField(attributes,HX_("title",98,15,3b,10))) {
HXLINE(  65)			title = ( (::String)(attributes->__Field(HX_("title",98,15,3b,10),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  65)			title = HX_("Lime Application",c5,b5,9d,ec);
            		}
HXLINE(  66)		int flags = 0;
HXLINE(  68)		if (!(::Reflect_obj::hasField(contextAttributes,HX_("antialiasing",f4,16,b3,48)))) {
HXLINE(  68)			contextAttributes->__SetField(HX_("antialiasing",f4,16,b3,48),0,::hx::paccDynamic);
            		}
HXLINE(  69)		if (!(::Reflect_obj::hasField(contextAttributes,HX_("background",ee,93,1d,26)))) {
HXLINE(  69)			contextAttributes->__SetField(HX_("background",ee,93,1d,26),0,::hx::paccDynamic);
            		}
HXLINE(  70)		if (!(::Reflect_obj::hasField(contextAttributes,HX_("colorDepth",a0,08,96,fb)))) {
HXLINE(  70)			contextAttributes->__SetField(HX_("colorDepth",a0,08,96,fb),24,::hx::paccDynamic);
            		}
HXLINE(  71)		if (!(::Reflect_obj::hasField(contextAttributes,HX_("depth",03,f1,29,d7)))) {
HXLINE(  71)			contextAttributes->__SetField(HX_("depth",03,f1,29,d7),true,::hx::paccDynamic);
            		}
HXLINE(  72)		if (!(::Reflect_obj::hasField(contextAttributes,HX_("hardware",a8,e2,d3,75)))) {
HXLINE(  72)			contextAttributes->__SetField(HX_("hardware",a8,e2,d3,75),true,::hx::paccDynamic);
            		}
HXLINE(  73)		if (!(::Reflect_obj::hasField(contextAttributes,HX_("stencil",fc,bd,03,80)))) {
HXLINE(  73)			contextAttributes->__SetField(HX_("stencil",fc,bd,03,80),true,::hx::paccDynamic);
            		}
HXLINE(  74)		if (!(::Reflect_obj::hasField(contextAttributes,HX_("vsync",d1,2d,a8,3d)))) {
HXLINE(  74)			contextAttributes->__SetField(HX_("vsync",d1,2d,a8,3d),false,::hx::paccDynamic);
            		}
HXLINE(  79)		bool _hx_tmp;
HXDLIN(  79)		if (::Reflect_obj::hasField(contextAttributes,HX_("type",ba,f2,08,4d))) {
HXLINE(  79)			_hx_tmp = ::hx::IsEq( contextAttributes->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic),HX_("cairo",88,30,19,41) );
            		}
            		else {
HXLINE(  79)			_hx_tmp = false;
            		}
HXDLIN(  79)		if (_hx_tmp) {
HXLINE(  79)			contextAttributes->__SetField(HX_("hardware",a8,e2,d3,75),false,::hx::paccDynamic);
            		}
HXLINE(  81)		bool _hx_tmp1;
HXDLIN(  81)		if (::Reflect_obj::hasField(attributes,HX_("allowHighDPI",92,07,a2,b4))) {
HXLINE(  81)			_hx_tmp1 = ( (bool)(attributes->__Field(HX_("allowHighDPI",92,07,a2,b4),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  81)			_hx_tmp1 = false;
            		}
HXDLIN(  81)		if (_hx_tmp1) {
HXLINE(  81)			flags = (flags | 2048);
            		}
HXLINE(  82)		bool _hx_tmp2;
HXDLIN(  82)		if (::Reflect_obj::hasField(attributes,HX_("alwaysOnTop",67,4d,53,16))) {
HXLINE(  82)			_hx_tmp2 = ( (bool)(attributes->__Field(HX_("alwaysOnTop",67,4d,53,16),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  82)			_hx_tmp2 = false;
            		}
HXDLIN(  82)		if (_hx_tmp2) {
HXLINE(  82)			flags = (flags | 32768);
            		}
HXLINE(  83)		bool _hx_tmp3;
HXDLIN(  83)		if (::Reflect_obj::hasField(attributes,HX_("borderless",45,46,71,17))) {
HXLINE(  83)			_hx_tmp3 = ( (bool)(attributes->__Field(HX_("borderless",45,46,71,17),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  83)			_hx_tmp3 = false;
            		}
HXDLIN(  83)		if (_hx_tmp3) {
HXLINE(  83)			flags = (flags | 2);
            		}
HXLINE(  84)		bool _hx_tmp4;
HXDLIN(  84)		if (::Reflect_obj::hasField(attributes,HX_("fullscreen",3b,3a,b4,f9))) {
HXLINE(  84)			_hx_tmp4 = ( (bool)(attributes->__Field(HX_("fullscreen",3b,3a,b4,f9),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  84)			_hx_tmp4 = false;
            		}
HXDLIN(  84)		if (_hx_tmp4) {
HXLINE(  84)			flags = (flags | 1);
            		}
HXLINE(  85)		bool _hx_tmp5;
HXDLIN(  85)		if (::Reflect_obj::hasField(attributes,HX_("hidden",6a,ff,95,4c))) {
HXLINE(  85)			_hx_tmp5 = ( (bool)(attributes->__Field(HX_("hidden",6a,ff,95,4c),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  85)			_hx_tmp5 = false;
            		}
HXDLIN(  85)		if (_hx_tmp5) {
HXLINE(  85)			flags = (flags | 4096);
            		}
HXLINE(  86)		bool _hx_tmp6;
HXDLIN(  86)		if (::Reflect_obj::hasField(attributes,HX_("maximized",18,0e,e1,fe))) {
HXLINE(  86)			_hx_tmp6 = ( (bool)(attributes->__Field(HX_("maximized",18,0e,e1,fe),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  86)			_hx_tmp6 = false;
            		}
HXDLIN(  86)		if (_hx_tmp6) {
HXLINE(  86)			flags = (flags | 16384);
            		}
HXLINE(  87)		bool _hx_tmp7;
HXDLIN(  87)		if (::Reflect_obj::hasField(attributes,HX_("minimized",86,fb,9d,28))) {
HXLINE(  87)			_hx_tmp7 = ( (bool)(attributes->__Field(HX_("minimized",86,fb,9d,28),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  87)			_hx_tmp7 = false;
            		}
HXDLIN(  87)		if (_hx_tmp7) {
HXLINE(  87)			flags = (flags | 8192);
            		}
HXLINE(  88)		bool _hx_tmp8;
HXDLIN(  88)		if (::Reflect_obj::hasField(attributes,HX_("resizable",6b,37,50,a9))) {
HXLINE(  88)			_hx_tmp8 = ( (bool)(attributes->__Field(HX_("resizable",6b,37,50,a9),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  88)			_hx_tmp8 = false;
            		}
HXDLIN(  88)		if (_hx_tmp8) {
HXLINE(  88)			flags = (flags | 4);
            		}
HXLINE(  90)		if (::hx::IsGreaterEq( contextAttributes->__Field(HX_("antialiasing",f4,16,b3,48),::hx::paccDynamic),4 )) {
HXLINE(  92)			flags = (flags | 96);
            		}
            		else {
HXLINE(  94)			if (::hx::IsGreaterEq( contextAttributes->__Field(HX_("antialiasing",f4,16,b3,48),::hx::paccDynamic),2 )) {
HXLINE(  96)				flags = (flags | 32);
            			}
            		}
HXLINE(  99)		if (::hx::IsEq( contextAttributes->__Field(HX_("colorDepth",a0,08,96,fb),::hx::paccDynamic),32 )) {
HXLINE(  99)			flags = (flags | 65536);
            		}
HXLINE( 100)		if (( (bool)(contextAttributes->__Field(HX_("depth",03,f1,29,d7),::hx::paccDynamic)) )) {
HXLINE( 100)			flags = (flags | 512);
            		}
HXLINE( 101)		if (( (bool)(contextAttributes->__Field(HX_("hardware",a8,e2,d3,75),::hx::paccDynamic)) )) {
HXLINE( 101)			flags = (flags | 8);
            		}
HXLINE( 102)		if (( (bool)(contextAttributes->__Field(HX_("stencil",fc,bd,03,80),::hx::paccDynamic)) )) {
HXLINE( 102)			flags = (flags | 1024);
            		}
HXLINE( 103)		if (( (bool)(contextAttributes->__Field(HX_("vsync",d1,2d,a8,3d),::hx::paccDynamic)) )) {
HXLINE( 103)			flags = (flags | 16);
            		}
HXLINE( 105)		 ::Dynamic width;
HXDLIN( 105)		if (::Reflect_obj::hasField(attributes,HX_("width",06,b6,62,ca))) {
HXLINE( 105)			width = attributes->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic);
            		}
            		else {
HXLINE( 105)			width = 800;
            		}
HXLINE( 106)		 ::Dynamic height;
HXDLIN( 106)		if (::Reflect_obj::hasField(attributes,HX_("height",e7,07,4c,02))) {
HXLINE( 106)			height = attributes->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic);
            		}
            		else {
HXLINE( 106)			height = 600;
            		}
HXLINE( 109)		this->handle = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_window_create(::hx::DynamicPtr(parent->application->_hx___backend->handle),( (int)(width) ),( (int)(height) ),flags,title)) );
HXLINE( 111)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 113)			parent->_hx___width = ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_width(::hx::DynamicPtr(this->handle));
HXLINE( 114)			parent->_hx___height = ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_height(::hx::DynamicPtr(this->handle));
HXLINE( 115)			parent->_hx___x = ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_x(::hx::DynamicPtr(this->handle));
HXLINE( 116)			parent->_hx___y = ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_y(::hx::DynamicPtr(this->handle));
HXLINE( 117)			bool _hx_tmp;
HXDLIN( 117)			if (::Reflect_obj::hasField(attributes,HX_("hidden",6a,ff,95,4c))) {
HXLINE( 117)				_hx_tmp = ( (bool)(attributes->__Field(HX_("hidden",6a,ff,95,4c),::hx::paccDynamic)) );
            			}
            			else {
HXLINE( 117)				_hx_tmp = false;
            			}
HXDLIN( 117)			parent->_hx___hidden = _hx_tmp;
HXLINE( 118)			parent->id = ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_id(::hx::DynamicPtr(this->handle));
            		}
HXLINE( 121)		parent->_hx___scale = ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_scale(::hx::DynamicPtr(this->handle));
HXLINE( 123)		 ::lime::graphics::RenderContext context =  ::lime::graphics::RenderContext_obj::__alloc( HX_CTX );
HXLINE( 124)		context->window = parent;
HXLINE( 129)		::String contextType = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_context_type(::hx::DynamicPtr(this->handle))) );
HXLINE( 132)		if ((contextType == HX_("opengl",6f,64,94,21))) {
HXLINE( 135)			 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl =  ::lime::_internal::backend::native::NativeOpenGLRenderContext_obj::__alloc( HX_CTX );
HXLINE( 137)			this->useHardware = true;
HXLINE( 140)			context->gl = gl;
HXLINE( 143)			context->gles2 = gl;
HXLINE( 144)			context->webgl = ::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::fromWebGL2RenderContext(gl);
HXLINE( 145)			context->type = gl->type;
HXLINE( 146)			context->version = ::Std_obj::string(gl->version);
HXLINE( 148)			bool _hx_tmp;
HXDLIN( 148)			if ((gl->type == HX_("opengles",9d,f6,c9,fa))) {
HXLINE( 148)				_hx_tmp = (gl->version >= 3);
            			}
            			else {
HXLINE( 148)				_hx_tmp = false;
            			}
HXDLIN( 148)			if (_hx_tmp) {
HXLINE( 150)				context->gles3 = gl;
HXLINE( 151)				context->webgl2 = gl;
            			}
HXLINE( 154)			if (::hx::IsNull( ::lime::graphics::opengl::GL_obj::context )) {
HXLINE( 156)				::lime::graphics::opengl::GL_obj::context = gl;
            			}
            		}
            		else {
HXLINE( 160)			this->useHardware = false;
HXLINE( 163)			context->cairo = this->cairo;
HXLINE( 164)			context->type = HX_("cairo",88,30,19,41);
HXLINE( 165)			context->version = HX_("",00,00,00,00);
HXLINE( 167)			parent->context = context;
HXLINE( 168)			this->render();
HXLINE( 170)			context->type = HX_("cairo",88,30,19,41);
            		}
HXLINE( 173)		contextAttributes->__SetField(HX_("type",ba,f2,08,4d),context->type,::hx::paccDynamic);
HXLINE( 174)		context->attributes = contextAttributes;
HXLINE( 175)		parent->context = context;
HXLINE( 177)		Float _hx_tmp9;
HXDLIN( 177)		if (::Reflect_obj::hasField(attributes,HX_("frameRate",ad,11,25,39))) {
HXLINE( 177)			_hx_tmp9 = ( (Float)(attributes->__Field(HX_("frameRate",ad,11,25,39),::hx::paccDynamic)) );
            		}
            		else {
HXLINE( 177)			_hx_tmp9 = ( (Float)(60) );
            		}
HXDLIN( 177)		this->setFrameRate(_hx_tmp9);
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
	return inClassId==(int)0x00000001 || inClassId==(int)0x01d779fb;
}

void NativeWindow_obj::alert(::String message,::String title){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_183_alert)
HXDLIN( 183)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 186)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_alert(::hx::DynamicPtr(this->handle),message,title);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,alert,(void))

void NativeWindow_obj::close(){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_193_close)
HXDLIN( 193)		if (!(this->closing)) {
HXLINE( 195)			this->closing = true;
HXLINE( 196)			this->parent->onClose->dispatch();
HXLINE( 198)			if (!(this->parent->onClose->canceled)) {
HXLINE( 200)				if (::hx::IsNotNull( this->handle )) {
HXLINE( 203)					::lime::_internal::backend::native::NativeCFFI_obj::lime_window_close(::hx::DynamicPtr(this->handle));
HXLINE( 205)					this->handle = null();
            				}
            			}
            			else {
HXLINE( 210)				this->closing = false;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,close,(void))

void NativeWindow_obj::contextFlip(){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_216_contextFlip)
HXLINE( 218)		if (!(this->useHardware)) {
HXLINE( 221)			if (::hx::IsNotNull( this->cairo )) {
HXLINE( 223)				::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::flush(this->primarySurface);
            			}
HXLINE( 226)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_context_unlock(::hx::DynamicPtr(this->handle));
            		}
HXLINE( 229)		::lime::_internal::backend::native::NativeCFFI_obj::lime_window_context_flip(::hx::DynamicPtr(this->handle));
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,contextFlip,(void))

void NativeWindow_obj::focus(){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_235_focus)
HXDLIN( 235)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 238)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_focus(::hx::DynamicPtr(this->handle));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,focus,(void))

 ::lime::ui::MouseCursor NativeWindow_obj::getCursor(){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_245_getCursor)
HXDLIN( 245)		return this->cursor;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,getCursor,return )

 ::lime::_hx_system::Display NativeWindow_obj::getDisplay(){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_249_getDisplay)
HXLINE( 250)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 253)			int index = ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_display(::hx::DynamicPtr(this->handle));
HXLINE( 255)			if ((index > -1)) {
HXLINE( 257)				return ::lime::_hx_system::System_obj::getDisplay(index);
            			}
            		}
HXLINE( 262)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,getDisplay,return )

 ::lime::_hx_system::DisplayMode NativeWindow_obj::getDisplayMode(){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_266_getDisplayMode)
HXLINE( 267)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 273)			 ::Dynamic data = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_display_mode(::hx::DynamicPtr(this->handle))) );
HXLINE( 274)			this->displayMode->width = ( (int)(data->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) );
HXLINE( 275)			this->displayMode->height = ( (int)(data->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) );
HXLINE( 276)			this->displayMode->pixelFormat = ( (int)(data->__Field(HX_("pixelFormat",5d,72,1b,6f),::hx::paccDynamic)) );
HXLINE( 277)			this->displayMode->refreshRate = ( (int)(data->__Field(HX_("refreshRate",5b,e2,3f,40),::hx::paccDynamic)) );
            		}
HXLINE( 282)		return this->displayMode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,getDisplayMode,return )

Float NativeWindow_obj::getFrameRate(){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_287_getFrameRate)
HXDLIN( 287)		return this->frameRate;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,getFrameRate,return )

bool NativeWindow_obj::getMouseLock(){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_291_getMouseLock)
HXLINE( 292)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 295)			this->mouseLock = ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_mouse_lock(::hx::DynamicPtr(this->handle));
            		}
HXLINE( 299)		return this->mouseLock;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,getMouseLock,return )

Float NativeWindow_obj::getOpacity(){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_303_getOpacity)
HXLINE( 304)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 307)			return ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_opacity(::hx::DynamicPtr(this->handle));
            		}
HXLINE( 311)		return ((Float)1.0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,getOpacity,return )

bool NativeWindow_obj::getTextInputEnabled(){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_315_getTextInputEnabled)
HXLINE( 316)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 319)			return ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_text_input_enabled(::hx::DynamicPtr(this->handle));
            		}
HXLINE( 323)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,getTextInputEnabled,return )

void NativeWindow_obj::move(int x,int y){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_328_move)
HXDLIN( 328)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 331)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_move(::hx::DynamicPtr(this->handle),x,y);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,move,(void))

 ::lime::graphics::Image NativeWindow_obj::readPixels( ::lime::math::Rectangle rect){
            	HX_GC_STACKFRAME(&_hx_pos_b81205d558ca9a41_337_readPixels)
HXLINE( 338)		 ::lime::graphics::ImageBuffer imageBuffer = null();
HXLINE( 340)		::String _hx_switch_0 = this->parent->context->type;
            		if (  (_hx_switch_0==HX_("opengl",6f,64,94,21)) ||  (_hx_switch_0==HX_("opengles",9d,f6,c9,fa)) ||  (_hx_switch_0==HX_("webgl",b9,4b,bc,c7)) ){
HXLINE( 343)			 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->parent->context->webgl;
HXLINE( 344)			int windowWidth = ::Std_obj::_hx_int((( (Float)(this->parent->_hx___width) ) * this->parent->_hx___scale));
HXLINE( 345)			int windowHeight = ::Std_obj::_hx_int((( (Float)(this->parent->_hx___height) ) * this->parent->_hx___scale));
HXLINE( 347)			int x;
HXDLIN( 347)			int y;
HXDLIN( 347)			int width;
HXDLIN( 347)			int height;
HXLINE( 349)			if (::hx::IsNotNull( rect )) {
HXLINE( 351)				x = ::Std_obj::_hx_int(rect->x);
HXLINE( 352)				y = ::Std_obj::_hx_int(((( (Float)(windowHeight) ) - rect->y) - rect->height));
HXLINE( 353)				width = ::Std_obj::_hx_int(rect->width);
HXLINE( 354)				height = ::Std_obj::_hx_int(rect->height);
            			}
            			else {
HXLINE( 358)				x = 0;
HXLINE( 359)				y = 0;
HXLINE( 360)				width = windowWidth;
HXLINE( 361)				height = windowHeight;
            			}
HXLINE( 364)			 ::Dynamic elements = ((width * height) * 4);
HXDLIN( 364)			 ::haxe::io::Bytes buffer = null();
HXDLIN( 364)			::cpp::VirtualArray array = null();
HXDLIN( 364)			 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 364)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 364)			 ::Dynamic len = null();
HXDLIN( 364)			 ::lime::utils::ArrayBufferView this1;
HXDLIN( 364)			if (::hx::IsNotNull( elements )) {
HXLINE( 364)				this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            			}
            			else {
HXLINE( 364)				if (::hx::IsNotNull( array )) {
HXLINE( 364)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 364)					_this->byteOffset = 0;
HXDLIN( 364)					_this->length = array->get_length();
HXDLIN( 364)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 364)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 364)					_this->buffer = this2;
HXDLIN( 364)					_this->copyFromArray(array,null());
HXDLIN( 364)					this1 = _this;
            				}
            				else {
HXLINE( 364)					if (::hx::IsNotNull( vector )) {
HXLINE( 364)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 364)						::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 364)						_this->byteOffset = 0;
HXDLIN( 364)						_this->length = array->get_length();
HXDLIN( 364)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 364)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 364)						_this->buffer = this2;
HXDLIN( 364)						_this->copyFromArray(array,null());
HXDLIN( 364)						this1 = _this;
            					}
            					else {
HXLINE( 364)						if (::hx::IsNotNull( view )) {
HXLINE( 364)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 364)							 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 364)							int srcLength = view->length;
HXDLIN( 364)							int srcByteOffset = view->byteOffset;
HXDLIN( 364)							int srcElementSize = view->bytesPerElement;
HXDLIN( 364)							int elementSize = _this->bytesPerElement;
HXDLIN( 364)							if ((view->type == _this->type)) {
HXLINE( 364)								int srcLength = srcData->length;
HXDLIN( 364)								int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 364)								 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 364)								_this->buffer = this1;
HXDLIN( 364)								_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            							}
            							else {
HXLINE( 364)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            							}
HXDLIN( 364)							_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 364)							_this->byteOffset = 0;
HXDLIN( 364)							_this->length = srcLength;
HXDLIN( 364)							this1 = _this;
            						}
            						else {
HXLINE( 364)							if (::hx::IsNotNull( buffer )) {
HXLINE( 364)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 364)								int in_byteOffset = 0;
HXDLIN( 364)								if ((in_byteOffset < 0)) {
HXLINE( 364)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 364)								if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 364)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 364)								int bufferByteLength = buffer->length;
HXDLIN( 364)								int elementSize = _this->bytesPerElement;
HXDLIN( 364)								int newByteLength = bufferByteLength;
HXDLIN( 364)								if (::hx::IsNull( len )) {
HXLINE( 364)									newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 364)									if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 364)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 364)									if ((newByteLength < 0)) {
HXLINE( 364)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
            								else {
HXLINE( 364)									newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 364)									int newRange = (in_byteOffset + newByteLength);
HXDLIN( 364)									if ((newRange > bufferByteLength)) {
HXLINE( 364)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
HXDLIN( 364)								_this->buffer = buffer;
HXDLIN( 364)								_this->byteOffset = in_byteOffset;
HXDLIN( 364)								_this->byteLength = newByteLength;
HXDLIN( 364)								_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 364)								this1 = _this;
            							}
            							else {
HXLINE( 364)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            							}
            						}
            					}
            				}
            			}
HXDLIN( 364)			 ::lime::utils::ArrayBufferView data = this1;
HXLINE( 366)			{
HXLINE( 366)				int format = gl->RGBA;
HXDLIN( 366)				int type = gl->UNSIGNED_BYTE;
HXDLIN( 366)				{
HXLINE( 366)					::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer,null(),data,null(),0);
HXDLIN( 366)					gl->readPixels(x,y,width,height,format,type,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer));
            				}
            			}
HXLINE( 370)			int rowLength = (width * 4);
HXLINE( 371)			int srcPosition = ((height - 1) * rowLength);
HXLINE( 372)			int destPosition = 0;
HXLINE( 374)			 ::haxe::io::Bytes temp = ::haxe::io::Bytes_obj::alloc(rowLength);
HXLINE( 375)			 ::haxe::io::Bytes buffer1 = data->buffer;
HXLINE( 376)			int rows = ::Std_obj::_hx_int((( (Float)(height) ) / ( (Float)(2) )));
HXLINE( 378)			while(true){
HXLINE( 378)				rows = (rows - 1);
HXDLIN( 378)				if (!(((rows + 1) > 0))) {
HXLINE( 378)					goto _hx_goto_14;
            				}
HXLINE( 380)				temp->blit(0,buffer1,destPosition,rowLength);
HXLINE( 381)				buffer1->blit(destPosition,buffer1,srcPosition,rowLength);
HXLINE( 382)				buffer1->blit(srcPosition,temp,0,rowLength);
HXLINE( 384)				destPosition = (destPosition + rowLength);
HXLINE( 385)				srcPosition = (srcPosition - rowLength);
            			}
            			_hx_goto_14:;
HXLINE( 389)			imageBuffer =  ::lime::graphics::ImageBuffer_obj::__alloc( HX_CTX ,data,width,height,32,0);
HXLINE( 342)			goto _hx_goto_13;
            		}
            		/* default */{
HXLINE( 394)			::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *, ::hx::Object *) > imageBuffer1 = ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_read_pixels;
HXDLIN( 394)			 ::Dynamic imageBuffer2 = this->handle;
HXDLIN( 394)			 ::Dynamic elements = null();
HXDLIN( 394)			 ::haxe::io::Bytes buffer = ::haxe::io::Bytes_obj::alloc(0);
HXDLIN( 394)			::cpp::VirtualArray array = null();
HXDLIN( 394)			 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 394)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 394)			 ::Dynamic len = null();
HXDLIN( 394)			 ::lime::utils::ArrayBufferView this1;
HXDLIN( 394)			if (::hx::IsNotNull( elements )) {
HXLINE( 394)				this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            			}
            			else {
HXLINE( 394)				if (::hx::IsNotNull( array )) {
HXLINE( 394)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 394)					_this->byteOffset = 0;
HXDLIN( 394)					_this->length = array->get_length();
HXDLIN( 394)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 394)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 394)					_this->buffer = this2;
HXDLIN( 394)					_this->copyFromArray(array,null());
HXDLIN( 394)					this1 = _this;
            				}
            				else {
HXLINE( 394)					if (::hx::IsNotNull( vector )) {
HXLINE( 394)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 394)						::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 394)						_this->byteOffset = 0;
HXDLIN( 394)						_this->length = array->get_length();
HXDLIN( 394)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 394)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 394)						_this->buffer = this2;
HXDLIN( 394)						_this->copyFromArray(array,null());
HXDLIN( 394)						this1 = _this;
            					}
            					else {
HXLINE( 394)						if (::hx::IsNotNull( view )) {
HXLINE( 394)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 394)							 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 394)							int srcLength = view->length;
HXDLIN( 394)							int srcByteOffset = view->byteOffset;
HXDLIN( 394)							int srcElementSize = view->bytesPerElement;
HXDLIN( 394)							int elementSize = _this->bytesPerElement;
HXDLIN( 394)							if ((view->type == _this->type)) {
HXLINE( 394)								int srcLength = srcData->length;
HXDLIN( 394)								int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 394)								 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 394)								_this->buffer = this1;
HXDLIN( 394)								_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            							}
            							else {
HXLINE( 394)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            							}
HXDLIN( 394)							_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 394)							_this->byteOffset = 0;
HXDLIN( 394)							_this->length = srcLength;
HXDLIN( 394)							this1 = _this;
            						}
            						else {
HXLINE( 394)							if (::hx::IsNotNull( buffer )) {
HXLINE( 394)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 394)								int in_byteOffset = 0;
HXDLIN( 394)								if ((in_byteOffset < 0)) {
HXLINE( 394)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 394)								if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 394)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 394)								int bufferByteLength = buffer->length;
HXDLIN( 394)								int elementSize = _this->bytesPerElement;
HXDLIN( 394)								int newByteLength = bufferByteLength;
HXDLIN( 394)								if (::hx::IsNull( len )) {
HXLINE( 394)									newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 394)									if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 394)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 394)									if ((newByteLength < 0)) {
HXLINE( 394)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
            								else {
HXLINE( 394)									newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 394)									int newRange = (in_byteOffset + newByteLength);
HXDLIN( 394)									if ((newRange > bufferByteLength)) {
HXLINE( 394)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
HXDLIN( 394)								_this->buffer = buffer;
HXDLIN( 394)								_this->byteOffset = in_byteOffset;
HXDLIN( 394)								_this->byteLength = newByteLength;
HXDLIN( 394)								_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 394)								this1 = _this;
            							}
            							else {
HXLINE( 394)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            							}
            						}
            					}
            				}
            			}
HXDLIN( 394)			imageBuffer = ( ( ::Dynamic)(imageBuffer1(::hx::DynamicPtr(imageBuffer2),::hx::DynamicPtr(rect),::hx::DynamicPtr( ::lime::graphics::ImageBuffer_obj::__alloc( HX_CTX ,this1,null(),null(),null(),null())))) );
HXLINE( 405)			if (::hx::IsNotNull( imageBuffer )) {
HXLINE( 407)				imageBuffer->format = 0;
            			}
            		}
            		_hx_goto_13:;
HXLINE( 411)		if (::hx::IsNotNull( imageBuffer )) {
HXLINE( 413)			return  ::lime::graphics::Image_obj::__alloc( HX_CTX ,imageBuffer,null(),null(),null(),null(),null(),null());
            		}
HXLINE( 416)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,readPixels,return )

void NativeWindow_obj::render(){
            	HX_GC_STACKFRAME(&_hx_pos_b81205d558ca9a41_420_render)
HXLINE( 422)		::lime::_internal::backend::native::NativeCFFI_obj::lime_window_context_make_current(::hx::DynamicPtr(this->handle));
HXLINE( 424)		if (!(this->useHardware)) {
HXLINE( 427)			 ::Dynamic lock = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_window_context_lock(::hx::DynamicPtr(this->handle))) );
HXLINE( 429)			bool _hx_tmp;
HXDLIN( 429)			if (::hx::IsNotNull( lock )) {
HXLINE( 430)				bool _hx_tmp1;
HXDLIN( 430)				bool _hx_tmp2;
HXDLIN( 430)				if (::hx::IsNotNull( this->cacheLock )) {
HXLINE( 430)					_hx_tmp2 = ::hx::IsNotEq( this->cacheLock->__Field(HX_("pixels",2d,ef,a9,8c),::hx::paccDynamic),lock->__Field(HX_("pixels",2d,ef,a9,8c),::hx::paccDynamic) );
            				}
            				else {
HXLINE( 430)					_hx_tmp2 = true;
            				}
HXDLIN( 430)				if (!(_hx_tmp2)) {
HXLINE( 430)					_hx_tmp1 = ::hx::IsNotEq( this->cacheLock->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic),lock->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic) );
            				}
            				else {
HXLINE( 430)					_hx_tmp1 = true;
            				}
HXDLIN( 430)				if (!(_hx_tmp1)) {
HXLINE( 429)					_hx_tmp = ::hx::IsNotEq( this->cacheLock->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic),lock->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic) );
            				}
            				else {
HXLINE( 429)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 429)				_hx_tmp = false;
            			}
HXDLIN( 429)			if (_hx_tmp) {
HXLINE( 432)				this->primarySurface = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::create(( (Float)(lock->__Field(HX_("pixels",2d,ef,a9,8c),::hx::paccDynamic)) ),0,( (int)(lock->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ),( (int)(lock->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) ),( (int)(lock->__Field(HX_("pitch",c0,bb,a0,c2),::hx::paccDynamic)) ));
HXLINE( 434)				if (::hx::IsNotNull( this->cairo )) {
HXLINE( 436)					this->cairo->recreate(this->primarySurface);
            				}
            				else {
HXLINE( 440)					this->cairo =  ::lime::graphics::cairo::Cairo_obj::__alloc( HX_CTX ,this->primarySurface);
            				}
HXLINE( 443)				this->parent->context->cairo = this->cairo;
            			}
HXLINE( 446)			this->cacheLock = lock;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,render,(void))

void NativeWindow_obj::resize(int width,int height){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_456_resize)
HXDLIN( 456)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 459)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_resize(::hx::DynamicPtr(this->handle),width,height);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,resize,(void))

void NativeWindow_obj::setMinSize(int width,int height){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_466_setMinSize)
HXDLIN( 466)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 469)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_minimum_size(::hx::DynamicPtr(this->handle),width,height);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,setMinSize,(void))

void NativeWindow_obj::setMaxSize(int width,int height){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_476_setMaxSize)
HXDLIN( 476)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 479)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_maximum_size(::hx::DynamicPtr(this->handle),width,height);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,setMaxSize,(void))

bool NativeWindow_obj::setBorderless(bool value){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_485_setBorderless)
HXLINE( 486)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 489)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_borderless(::hx::DynamicPtr(this->handle),value);
            		}
HXLINE( 493)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setBorderless,return )

 ::lime::ui::MouseCursor NativeWindow_obj::setCursor( ::lime::ui::MouseCursor value){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_497_setCursor)
HXLINE( 498)		if (::hx::IsPointerNotEq( this->cursor,value )) {
HXLINE( 500)			if (::hx::IsNull( value )) {
HXLINE( 503)				::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_cursor(::hx::DynamicPtr(this->handle),0);
            			}
            			else {
HXLINE( 508)				int type;
HXDLIN( 508)				switch((int)(value->_hx_getIndex())){
            					case (int)0: {
HXLINE( 508)						type = 1;
            					}
            					break;
            					case (int)1: {
HXLINE( 508)						type = 2;
            					}
            					break;
            					case (int)3: {
HXLINE( 508)						type = 4;
            					}
            					break;
            					case (int)4: {
HXLINE( 508)						type = 5;
            					}
            					break;
            					case (int)5: {
HXLINE( 508)						type = 6;
            					}
            					break;
            					case (int)6: {
HXLINE( 508)						type = 7;
            					}
            					break;
            					case (int)7: {
HXLINE( 508)						type = 8;
            					}
            					break;
            					case (int)8: {
HXLINE( 508)						type = 9;
            					}
            					break;
            					case (int)9: {
HXLINE( 508)						type = 10;
            					}
            					break;
            					case (int)10: {
HXLINE( 508)						type = 11;
            					}
            					break;
            					case (int)11: {
HXLINE( 508)						type = 12;
            					}
            					break;
            					default:{
HXLINE( 508)						type = 3;
            					}
            				}
HXLINE( 525)				::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_cursor(::hx::DynamicPtr(this->handle),type);
            			}
HXLINE( 529)			this->cursor = value;
            		}
HXLINE( 532)		return this->cursor;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setCursor,return )

 ::lime::_hx_system::DisplayMode NativeWindow_obj::setDisplayMode( ::lime::_hx_system::DisplayMode value){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_536_setDisplayMode)
HXLINE( 537)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 543)			 ::Dynamic data = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_display_mode(::hx::DynamicPtr(this->handle),::hx::DynamicPtr(value))) );
HXLINE( 544)			this->displayMode->width = ( (int)(data->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) );
HXLINE( 545)			this->displayMode->height = ( (int)(data->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) );
HXLINE( 546)			this->displayMode->pixelFormat = ( (int)(data->__Field(HX_("pixelFormat",5d,72,1b,6f),::hx::paccDynamic)) );
HXLINE( 547)			this->displayMode->refreshRate = ( (int)(data->__Field(HX_("refreshRate",5b,e2,3f,40),::hx::paccDynamic)) );
            		}
HXLINE( 552)		return this->displayMode;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setDisplayMode,return )

bool NativeWindow_obj::setMouseLock(bool value){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_556_setMouseLock)
HXLINE( 557)		if ((this->mouseLock != value)) {
HXLINE( 560)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_mouse_lock(::hx::DynamicPtr(this->handle),value);
HXLINE( 563)			this->mouseLock = value;
            		}
HXLINE( 566)		return this->mouseLock;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setMouseLock,return )

bool NativeWindow_obj::setTextInputEnabled(bool value){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_570_setTextInputEnabled)
HXLINE( 571)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 574)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_text_input_enabled(::hx::DynamicPtr(this->handle),value);
            		}
HXLINE( 578)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setTextInputEnabled,return )

 ::lime::math::Rectangle NativeWindow_obj::setTextInputRect( ::lime::math::Rectangle value){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_582_setTextInputRect)
HXLINE( 583)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 586)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_text_input_rect(::hx::DynamicPtr(this->handle),::hx::DynamicPtr(value));
            		}
HXLINE( 590)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setTextInputRect,return )

Float NativeWindow_obj::setFrameRate(Float value){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_594_setFrameRate)
HXLINE( 597)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 600)			::lime::_internal::backend::native::NativeCFFI_obj::lime_application_set_frame_rate(::hx::DynamicPtr(this->parent->application->_hx___backend->handle),value);
            		}
HXLINE( 604)		return (this->frameRate = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setFrameRate,return )

bool NativeWindow_obj::setFullscreen(bool value){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_608_setFullscreen)
HXLINE( 609)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 612)			value = ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_fullscreen(::hx::DynamicPtr(this->handle),value);
HXLINE( 614)			this->parent->_hx___width = ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_width(::hx::DynamicPtr(this->handle));
HXLINE( 615)			this->parent->_hx___height = ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_height(::hx::DynamicPtr(this->handle));
HXLINE( 616)			this->parent->_hx___x = ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_x(::hx::DynamicPtr(this->handle));
HXLINE( 617)			this->parent->_hx___y = ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_get_y(::hx::DynamicPtr(this->handle));
HXLINE( 620)			if (value) {
HXLINE( 622)				this->parent->onFullscreen->dispatch();
            			}
            		}
HXLINE( 626)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setFullscreen,return )

void NativeWindow_obj::setIcon( ::lime::graphics::Image image){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_631_setIcon)
HXDLIN( 631)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 634)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_icon(::hx::DynamicPtr(this->handle),::hx::DynamicPtr(image->buffer));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setIcon,(void))

bool NativeWindow_obj::setMaximized(bool value){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_640_setMaximized)
HXLINE( 641)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 644)			return ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_maximized(::hx::DynamicPtr(this->handle),value);
            		}
HXLINE( 648)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setMaximized,return )

bool NativeWindow_obj::setMinimized(bool value){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_652_setMinimized)
HXLINE( 653)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 656)			return ::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_minimized(::hx::DynamicPtr(this->handle),value);
            		}
HXLINE( 660)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setMinimized,return )

void NativeWindow_obj::setOpacity(Float value){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_665_setOpacity)
HXDLIN( 665)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 668)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_opacity(::hx::DynamicPtr(this->handle),value);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setOpacity,(void))

bool NativeWindow_obj::setResizable(bool value){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_674_setResizable)
HXLINE( 675)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 678)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_resizable(::hx::DynamicPtr(this->handle),value);
HXLINE( 682)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_borderless(::hx::DynamicPtr(this->handle),!(this->parent->_hx___borderless));
HXLINE( 683)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_borderless(::hx::DynamicPtr(this->handle),this->parent->_hx___borderless);
            		}
HXLINE( 687)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setResizable,return )

::String NativeWindow_obj::setTitle(::String value){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_691_setTitle)
HXLINE( 692)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 695)			return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_title(::hx::DynamicPtr(this->handle),value)) );
            		}
HXLINE( 699)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setTitle,return )

bool NativeWindow_obj::setVisible(bool value){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_703_setVisible)
HXLINE( 704)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 707)			::lime::_internal::backend::native::NativeCFFI_obj::lime_window_set_visible(::hx::DynamicPtr(this->handle),value);
            		}
HXLINE( 711)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setVisible,return )

void NativeWindow_obj::warpMouse(int x,int y){
            	HX_STACKFRAME(&_hx_pos_b81205d558ca9a41_717_warpMouse)
HXDLIN( 717)		::lime::_internal::backend::native::NativeCFFI_obj::lime_window_warp_mouse(::hx::DynamicPtr(this->handle),x,y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,warpMouse,(void))


::hx::ObjectPtr< NativeWindow_obj > NativeWindow_obj::__new( ::lime::ui::Window parent) {
	::hx::ObjectPtr< NativeWindow_obj > __this = new NativeWindow_obj();
	__this->__construct(parent);
	return __this;
}

::hx::ObjectPtr< NativeWindow_obj > NativeWindow_obj::__alloc(::hx::Ctx *_hx_ctx, ::lime::ui::Window parent) {
	NativeWindow_obj *__this = (NativeWindow_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NativeWindow_obj), true, "lime._internal.backend.native.NativeWindow"));
	*(void **)__this = NativeWindow_obj::_hx_vtable;
	__this->__construct(parent);
	return __this;
}

NativeWindow_obj::NativeWindow_obj()
{
}

void NativeWindow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeWindow);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(closing,"closing");
	HX_MARK_MEMBER_NAME(cursor,"cursor");
	HX_MARK_MEMBER_NAME(displayMode,"displayMode");
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(mouseLock,"mouseLock");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(useHardware,"useHardware");
	HX_MARK_MEMBER_NAME(cacheLock,"cacheLock");
	HX_MARK_MEMBER_NAME(cairo,"cairo");
	HX_MARK_MEMBER_NAME(primarySurface,"primarySurface");
	HX_MARK_END_CLASS();
}

void NativeWindow_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(closing,"closing");
	HX_VISIT_MEMBER_NAME(cursor,"cursor");
	HX_VISIT_MEMBER_NAME(displayMode,"displayMode");
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(mouseLock,"mouseLock");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(useHardware,"useHardware");
	HX_VISIT_MEMBER_NAME(cacheLock,"cacheLock");
	HX_VISIT_MEMBER_NAME(cairo,"cairo");
	HX_VISIT_MEMBER_NAME(primarySurface,"primarySurface");
}

::hx::Val NativeWindow_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return ::hx::Val( move_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { return ::hx::Val( cairo ); }
		if (HX_FIELD_EQ(inName,"alert") ) { return ::hx::Val( alert_dyn() ); }
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		if (HX_FIELD_EQ(inName,"focus") ) { return ::hx::Val( focus_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return ::hx::Val( handle ); }
		if (HX_FIELD_EQ(inName,"cursor") ) { return ::hx::Val( cursor ); }
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"closing") ) { return ::hx::Val( closing ); }
		if (HX_FIELD_EQ(inName,"setIcon") ) { return ::hx::Val( setIcon_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setTitle") ) { return ::hx::Val( setTitle_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return ::hx::Val( frameRate ); }
		if (HX_FIELD_EQ(inName,"mouseLock") ) { return ::hx::Val( mouseLock ); }
		if (HX_FIELD_EQ(inName,"cacheLock") ) { return ::hx::Val( cacheLock ); }
		if (HX_FIELD_EQ(inName,"getCursor") ) { return ::hx::Val( getCursor_dyn() ); }
		if (HX_FIELD_EQ(inName,"setCursor") ) { return ::hx::Val( setCursor_dyn() ); }
		if (HX_FIELD_EQ(inName,"warpMouse") ) { return ::hx::Val( warpMouse_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getDisplay") ) { return ::hx::Val( getDisplay_dyn() ); }
		if (HX_FIELD_EQ(inName,"getOpacity") ) { return ::hx::Val( getOpacity_dyn() ); }
		if (HX_FIELD_EQ(inName,"readPixels") ) { return ::hx::Val( readPixels_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMinSize") ) { return ::hx::Val( setMinSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMaxSize") ) { return ::hx::Val( setMaxSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"setOpacity") ) { return ::hx::Val( setOpacity_dyn() ); }
		if (HX_FIELD_EQ(inName,"setVisible") ) { return ::hx::Val( setVisible_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"displayMode") ) { return ::hx::Val( displayMode ); }
		if (HX_FIELD_EQ(inName,"useHardware") ) { return ::hx::Val( useHardware ); }
		if (HX_FIELD_EQ(inName,"contextFlip") ) { return ::hx::Val( contextFlip_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getFrameRate") ) { return ::hx::Val( getFrameRate_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMouseLock") ) { return ::hx::Val( getMouseLock_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMouseLock") ) { return ::hx::Val( setMouseLock_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFrameRate") ) { return ::hx::Val( setFrameRate_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMaximized") ) { return ::hx::Val( setMaximized_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMinimized") ) { return ::hx::Val( setMinimized_dyn() ); }
		if (HX_FIELD_EQ(inName,"setResizable") ) { return ::hx::Val( setResizable_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setBorderless") ) { return ::hx::Val( setBorderless_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFullscreen") ) { return ::hx::Val( setFullscreen_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primarySurface") ) { return ::hx::Val( primarySurface ); }
		if (HX_FIELD_EQ(inName,"getDisplayMode") ) { return ::hx::Val( getDisplayMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"setDisplayMode") ) { return ::hx::Val( setDisplayMode_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setTextInputRect") ) { return ::hx::Val( setTextInputRect_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getTextInputEnabled") ) { return ::hx::Val( getTextInputEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTextInputEnabled") ) { return ::hx::Val( setTextInputEnabled_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NativeWindow_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { cairo=inValue.Cast<  ::lime::graphics::cairo::Cairo >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cursor") ) { cursor=inValue.Cast<  ::lime::ui::MouseCursor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::lime::ui::Window >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"closing") ) { closing=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseLock") ) { mouseLock=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cacheLock") ) { cacheLock=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"displayMode") ) { displayMode=inValue.Cast<  ::lime::_hx_system::DisplayMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useHardware") ) { useHardware=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primarySurface") ) { primarySurface=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NativeWindow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("handle",a8,83,fd,b7));
	outFields->push(HX_("closing",f5,de,25,79));
	outFields->push(HX_("cursor",d6,8e,e8,3e));
	outFields->push(HX_("displayMode",c5,72,53,30));
	outFields->push(HX_("frameRate",ad,11,25,39));
	outFields->push(HX_("mouseLock",b0,54,0c,f4));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("useHardware",0f,ea,de,cf));
	outFields->push(HX_("cacheLock",4d,ab,6c,43));
	outFields->push(HX_("cairo",88,30,19,41));
	outFields->push(HX_("primarySurface",8b,aa,ee,10));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NativeWindow_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NativeWindow_obj,handle),HX_("handle",a8,83,fd,b7)},
	{::hx::fsBool,(int)offsetof(NativeWindow_obj,closing),HX_("closing",f5,de,25,79)},
	{::hx::fsObject /*  ::lime::ui::MouseCursor */ ,(int)offsetof(NativeWindow_obj,cursor),HX_("cursor",d6,8e,e8,3e)},
	{::hx::fsObject /*  ::lime::_hx_system::DisplayMode */ ,(int)offsetof(NativeWindow_obj,displayMode),HX_("displayMode",c5,72,53,30)},
	{::hx::fsFloat,(int)offsetof(NativeWindow_obj,frameRate),HX_("frameRate",ad,11,25,39)},
	{::hx::fsBool,(int)offsetof(NativeWindow_obj,mouseLock),HX_("mouseLock",b0,54,0c,f4)},
	{::hx::fsObject /*  ::lime::ui::Window */ ,(int)offsetof(NativeWindow_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsBool,(int)offsetof(NativeWindow_obj,useHardware),HX_("useHardware",0f,ea,de,cf)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NativeWindow_obj,cacheLock),HX_("cacheLock",4d,ab,6c,43)},
	{::hx::fsObject /*  ::lime::graphics::cairo::Cairo */ ,(int)offsetof(NativeWindow_obj,cairo),HX_("cairo",88,30,19,41)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NativeWindow_obj,primarySurface),HX_("primarySurface",8b,aa,ee,10)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *NativeWindow_obj_sStaticStorageInfo = 0;
#endif

static ::String NativeWindow_obj_sMemberFields[] = {
	HX_("handle",a8,83,fd,b7),
	HX_("closing",f5,de,25,79),
	HX_("cursor",d6,8e,e8,3e),
	HX_("displayMode",c5,72,53,30),
	HX_("frameRate",ad,11,25,39),
	HX_("mouseLock",b0,54,0c,f4),
	HX_("parent",2a,05,7e,ed),
	HX_("useHardware",0f,ea,de,cf),
	HX_("cacheLock",4d,ab,6c,43),
	HX_("cairo",88,30,19,41),
	HX_("primarySurface",8b,aa,ee,10),
	HX_("alert",5c,57,8e,21),
	HX_("close",b8,17,63,48),
	HX_("contextFlip",3c,f8,c1,20),
	HX_("focus",d8,5f,89,04),
	HX_("getCursor",0c,18,3f,bb),
	HX_("getDisplay",4c,b0,ab,0a),
	HX_("getDisplayMode",cf,c5,f1,b7),
	HX_("getFrameRate",37,ae,7b,48),
	HX_("getMouseLock",3a,f1,62,03),
	HX_("getOpacity",d5,e3,c6,3a),
	HX_("getTextInputEnabled",9a,ae,26,7e),
	HX_("move",11,e3,60,48),
	HX_("readPixels",23,d3,25,86),
	HX_("render",56,6b,29,05),
	HX_("resize",f4,59,7b,08),
	HX_("setMinSize",f1,33,3c,90),
	HX_("setMaxSize",03,1e,63,1f),
	HX_("setBorderless",87,84,e9,b8),
	HX_("setCursor",18,04,90,9e),
	HX_("setDisplayMode",43,ae,11,d8),
	HX_("setMouseLock",ae,14,5c,18),
	HX_("setTextInputEnabled",a6,a1,c3,ba),
	HX_("setTextInputRect",df,36,c7,8a),
	HX_("setFrameRate",ab,d1,74,5d),
	HX_("setFullscreen",7d,78,2c,9b),
	HX_("setIcon",3b,28,37,0b),
	HX_("setMaximized",16,ce,30,23),
	HX_("setMinimized",84,bb,ed,4c),
	HX_("setOpacity",49,82,44,3e),
	HX_("setResizable",69,f7,9f,cd),
	HX_("setTitle",96,7e,6f,1e),
	HX_("setVisible",f0,9c,03,f6),
	HX_("warpMouse",bd,de,6e,a6),
	::String(null()) };

::hx::Class NativeWindow_obj::__mClass;

void NativeWindow_obj::__register()
{
	NativeWindow_obj _hx_dummy;
	NativeWindow_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime._internal.backend.native.NativeWindow",f9,7d,53,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NativeWindow_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NativeWindow_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NativeWindow_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NativeWindow_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native
