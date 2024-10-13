#include <hxcpp.h>

#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_CairoRenderer
#include <openfl/display/CairoRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoTextField
#include <openfl/display/_internal/CairoTextField.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DBitmap
#include <openfl/display/_internal/Context3DBitmap.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DDisplayObject
#include <openfl/display/_internal/Context3DDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DShape
#include <openfl/display/_internal/Context3DShape.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DTextField
#include <openfl/display/_internal/Context3DTextField.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_fad01968ffdb63cd_19_render,"openfl.display._internal.Context3DTextField","render",0x02b1a2db,"openfl.display._internal.Context3DTextField.render","openfl/display/_internal/Context3DTextField.hx",19,0xdb755bb2)
HX_LOCAL_STACK_FRAME(_hx_pos_fad01968ffdb63cd_31_renderDrawable,"openfl.display._internal.Context3DTextField","renderDrawable",0x18531d99,"openfl.display._internal.Context3DTextField.renderDrawable","openfl/display/_internal/Context3DTextField.hx",31,0xdb755bb2)
HX_LOCAL_STACK_FRAME(_hx_pos_fad01968ffdb63cd_48_renderDrawableMask,"openfl.display._internal.Context3DTextField","renderDrawableMask",0x2823cb25,"openfl.display._internal.Context3DTextField.renderDrawableMask","openfl/display/_internal/Context3DTextField.hx",48,0xdb755bb2)
HX_LOCAL_STACK_FRAME(_hx_pos_fad01968ffdb63cd_54_renderMask,"openfl.display._internal.Context3DTextField","renderMask",0xe51b1967,"openfl.display._internal.Context3DTextField.renderMask","openfl/display/_internal/Context3DTextField.hx",54,0xdb755bb2)
HX_LOCAL_STACK_FRAME(_hx_pos_fad01968ffdb63cd_16_boot,"openfl.display._internal.Context3DTextField","boot",0x76806077,"openfl.display._internal.Context3DTextField.boot","openfl/display/_internal/Context3DTextField.hx",16,0xdb755bb2)
namespace openfl{
namespace display{
namespace _internal{

void Context3DTextField_obj::__construct() { }

Dynamic Context3DTextField_obj::__CreateEmpty() { return new Context3DTextField_obj; }

void *Context3DTextField_obj::_hx_vtable = 0;

Dynamic Context3DTextField_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Context3DTextField_obj > _hx_result = new Context3DTextField_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DTextField_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x03f4fff3;
}

void Context3DTextField_obj::render( ::openfl::text::TextField textField, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_fad01968ffdb63cd_19_render)
HXLINE(  20)		renderer->_hx___softwareRenderer->_hx___pixelRatio = renderer->_hx___pixelRatio;
HXLINE(  25)		::openfl::display::_internal::CairoTextField_obj::render(textField,( ( ::openfl::display::CairoRenderer)(renderer->_hx___softwareRenderer) ),textField->_hx___worldTransform);
HXLINE(  27)		textField->_hx___graphics->_hx___hardwareDirty = false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DTextField_obj,render,(void))

void Context3DTextField_obj::renderDrawable( ::openfl::text::TextField textField, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_fad01968ffdb63cd_31_renderDrawable)
HXLINE(  32)		renderer->_hx___updateCacheBitmap(textField,false);
HXLINE(  34)		bool _hx_tmp;
HXDLIN(  34)		if (::hx::IsNotNull( textField->_hx___cacheBitmap )) {
HXLINE(  34)			_hx_tmp = !(textField->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE(  34)			_hx_tmp = false;
            		}
HXDLIN(  34)		if (_hx_tmp) {
HXLINE(  36)			::openfl::display::_internal::Context3DBitmap_obj::render(textField->_hx___cacheBitmap,renderer);
            		}
            		else {
HXLINE(  40)			::openfl::display::_internal::Context3DTextField_obj::render(textField,renderer);
HXLINE(  41)			bool _hx_tmp;
HXDLIN(  41)			if (::hx::IsNull( textField->opaqueBackground )) {
HXLINE(  41)				_hx_tmp = ::hx::IsNull( textField->_hx___graphics );
            			}
            			else {
HXLINE(  41)				_hx_tmp = false;
            			}
HXDLIN(  41)			if (!(_hx_tmp)) {
HXLINE(  41)				bool _hx_tmp;
HXDLIN(  41)				if (textField->_hx___renderable) {
HXLINE(  41)					_hx_tmp = (textField->_hx___worldAlpha <= 0);
            				}
            				else {
HXLINE(  41)					_hx_tmp = true;
            				}
HXDLIN(  41)				if (!(_hx_tmp)) {
HXLINE(  41)					bool _hx_tmp;
HXDLIN(  41)					bool _hx_tmp1;
HXDLIN(  41)					bool _hx_tmp2;
HXDLIN(  41)					if (::hx::IsNotNull( textField->opaqueBackground )) {
HXLINE(  41)						_hx_tmp2 = !(textField->_hx___isCacheBitmapRender);
            					}
            					else {
HXLINE(  41)						_hx_tmp2 = false;
            					}
HXDLIN(  41)					if (_hx_tmp2) {
HXLINE(  41)						_hx_tmp1 = (textField->get_width() > 0);
            					}
            					else {
HXLINE(  41)						_hx_tmp1 = false;
            					}
HXDLIN(  41)					if (_hx_tmp1) {
HXLINE(  41)						_hx_tmp = (textField->get_height() > 0);
            					}
            					else {
HXLINE(  41)						_hx_tmp = false;
            					}
HXDLIN(  41)					if (_hx_tmp) {
HXLINE(  41)						renderer->_hx___setBlendMode(textField->_hx___worldBlendMode);
HXDLIN(  41)						renderer->_hx___pushMaskObject(textField,null());
HXDLIN(  41)						 ::openfl::display3D::Context3D context = renderer->_hx___context3D;
HXDLIN(  41)						 ::openfl::geom::Rectangle rect = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXDLIN(  41)						Float _hx_tmp = textField->get_width();
HXDLIN(  41)						rect->setTo(( (Float)(0) ),( (Float)(0) ),_hx_tmp,textField->get_height());
HXDLIN(  41)						renderer->_hx___pushMaskRect(rect,textField->_hx___renderTransform);
HXDLIN(  41)						int color = ( (int)(textField->opaqueBackground) );
HXDLIN(  41)						context->clear((( (Float)((::hx::UShr(color,16) & 255)) ) / ( (Float)(255) )),(( (Float)((::hx::UShr(color,8) & 255)) ) / ( (Float)(255) )),(( (Float)((color & 255)) ) / ( (Float)(255) )),1,0,0,1);
HXDLIN(  41)						renderer->_hx___popMaskRect();
HXDLIN(  41)						renderer->_hx___popMaskObject(textField,null());
HXDLIN(  41)						::openfl::geom::Rectangle_obj::_hx___pool->release(rect);
            					}
HXDLIN(  41)					if (::hx::IsNotNull( textField->_hx___graphics )) {
HXLINE(  41)						::openfl::display::_internal::Context3DShape_obj::render(textField,renderer);
            					}
            				}
            			}
            		}
HXLINE(  44)		renderer->_hx___renderEvent(textField);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DTextField_obj,renderDrawable,(void))

void Context3DTextField_obj::renderDrawableMask( ::openfl::text::TextField textField, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_fad01968ffdb63cd_48_renderDrawableMask)
HXLINE(  49)		::openfl::display::_internal::Context3DTextField_obj::renderMask(textField,renderer);
HXLINE(  50)		::openfl::display::_internal::Context3DDisplayObject_obj::renderDrawableMask(textField,renderer);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DTextField_obj,renderDrawableMask,(void))

void Context3DTextField_obj::renderMask( ::openfl::text::TextField textField, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_fad01968ffdb63cd_54_renderMask)
HXLINE(  58)		::openfl::display::_internal::CairoTextField_obj::render(textField,( ( ::openfl::display::CairoRenderer)(renderer->_hx___softwareRenderer) ),textField->_hx___worldTransform);
HXLINE(  60)		textField->_hx___graphics->_hx___hardwareDirty = false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DTextField_obj,renderMask,(void))


Context3DTextField_obj::Context3DTextField_obj()
{
}

bool Context3DTextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"renderDrawableMask") ) { outValue = renderDrawableMask_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Context3DTextField_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Context3DTextField_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Context3DTextField_obj::__mClass;

static ::String Context3DTextField_obj_sStaticFields[] = {
	HX_("render",56,6b,29,05),
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableMask",20,e0,a3,66),
	HX_("renderMask",62,3b,60,e5),
	::String(null())
};

void Context3DTextField_obj::__register()
{
	Context3DTextField_obj _hx_dummy;
	Context3DTextField_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.Context3DTextField",49,ea,c6,8b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DTextField_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Context3DTextField_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Context3DTextField_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DTextField_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DTextField_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DTextField_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_fad01968ffdb63cd_16_boot)
HXDLIN(  16)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
