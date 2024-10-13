#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display__internal_CairoGraphics
#include <openfl/display/_internal/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandBuffer
#include <openfl/display/_internal/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandReader
#include <openfl/display/_internal/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandType
#include <openfl/display/_internal/DrawCommandType.h>
#endif
#ifndef INCLUDED_openfl_display__internal_ShaderBuffer
#include <openfl/display/_internal/ShaderBuffer.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_62_closePath,"openfl.display._internal.CairoGraphics","closePath",0x1c630b46,"openfl.display._internal.CairoGraphics.closePath","openfl/display/_internal/CairoGraphics.hx",62,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_86_createGradientPattern,"openfl.display._internal.CairoGraphics","createGradientPattern",0x2e8d9ded,"openfl.display._internal.CairoGraphics.createGradientPattern","openfl/display/_internal/CairoGraphics.hx",86,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_159_createImagePattern,"openfl.display._internal.CairoGraphics","createImagePattern",0xd4969668,"openfl.display._internal.CairoGraphics.createImagePattern","openfl/display/_internal/CairoGraphics.hx",159,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_174_drawRoundRect,"openfl.display._internal.CairoGraphics","drawRoundRect",0x0d2e8237,"openfl.display._internal.CairoGraphics.drawRoundRect","openfl/display/_internal/CairoGraphics.hx",174,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_206_endFill,"openfl.display._internal.CairoGraphics","endFill",0xd8fcf987,"openfl.display._internal.CairoGraphics.endFill","openfl/display/_internal/CairoGraphics.hx",206,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_213_endStroke,"openfl.display._internal.CairoGraphics","endStroke",0x5959a7bc,"openfl.display._internal.CairoGraphics.endStroke","openfl/display/_internal/CairoGraphics.hx",213,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_222_hitTest,"openfl.display._internal.CairoGraphics","hitTest",0x959bd1ce,"openfl.display._internal.CairoGraphics.hitTest","openfl/display/_internal/CairoGraphics.hx",222,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_437_isCCW,"openfl.display._internal.CairoGraphics","isCCW",0x84e15156,"openfl.display._internal.CairoGraphics.isCCW","openfl/display/_internal/CairoGraphics.hx",437,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_441_normalizeUVT,"openfl.display._internal.CairoGraphics","normalizeUVT",0xe93d673d,"openfl.display._internal.CairoGraphics.normalizeUVT","openfl/display/_internal/CairoGraphics.hx",441,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_482_playCommands,"openfl.display._internal.CairoGraphics","playCommands",0xebfd0cb3,"openfl.display._internal.CairoGraphics.playCommands","openfl/display/_internal/CairoGraphics.hx",482,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_1126_quadraticCurveTo,"openfl.display._internal.CairoGraphics","quadraticCurveTo",0x52eadd69,"openfl.display._internal.CairoGraphics.quadraticCurveTo","openfl/display/_internal/CairoGraphics.hx",1126,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_1149_render,"openfl.display._internal.CairoGraphics","render",0x66653ded,"openfl.display._internal.CairoGraphics.render","openfl/display/_internal/CairoGraphics.hx",1149,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_1457_renderMask,"openfl.display._internal.CairoGraphics","renderMask",0x176ea579,"openfl.display._internal.CairoGraphics.renderMask","openfl/display/_internal/CairoGraphics.hx",1457,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_37_boot,"openfl.display._internal.CairoGraphics","boot",0x008cb309,"openfl.display._internal.CairoGraphics.boot","openfl/display/_internal/CairoGraphics.hx",37,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_40_boot,"openfl.display._internal.CairoGraphics","boot",0x008cb309,"openfl.display._internal.CairoGraphics.boot","openfl/display/_internal/CairoGraphics.hx",40,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_41_boot,"openfl.display._internal.CairoGraphics","boot",0x008cb309,"openfl.display._internal.CairoGraphics.boot","openfl/display/_internal/CairoGraphics.hx",41,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_47_boot,"openfl.display._internal.CairoGraphics","boot",0x008cb309,"openfl.display._internal.CairoGraphics.boot","openfl/display/_internal/CairoGraphics.hx",47,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_56_boot,"openfl.display._internal.CairoGraphics","boot",0x008cb309,"openfl.display._internal.CairoGraphics.boot","openfl/display/_internal/CairoGraphics.hx",56,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_58_boot,"openfl.display._internal.CairoGraphics","boot",0x008cb309,"openfl.display._internal.CairoGraphics.boot","openfl/display/_internal/CairoGraphics.hx",58,0x56494baa)
namespace openfl{
namespace display{
namespace _internal{

void CairoGraphics_obj::__construct() { }

Dynamic CairoGraphics_obj::__CreateEmpty() { return new CairoGraphics_obj; }

void *CairoGraphics_obj::_hx_vtable = 0;

Dynamic CairoGraphics_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CairoGraphics_obj > _hx_result = new CairoGraphics_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoGraphics_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3a660be9;
}

Float CairoGraphics_obj::SIN45;

Float CairoGraphics_obj::TAN22;

bool CairoGraphics_obj::allowSmoothing;

 ::openfl::display::BitmapData CairoGraphics_obj::bitmapFill;

bool CairoGraphics_obj::bitmapRepeat;

 ::openfl::geom::Rectangle CairoGraphics_obj::bounds;

 ::lime::graphics::cairo::Cairo CairoGraphics_obj::cairo;

 ::openfl::display::_internal::DrawCommandBuffer CairoGraphics_obj::fillCommands;

 ::Dynamic CairoGraphics_obj::fillPattern;

 ::openfl::geom::Matrix CairoGraphics_obj::fillPatternMatrix;

 ::openfl::display::Graphics CairoGraphics_obj::graphics;

bool CairoGraphics_obj::hasFill;

bool CairoGraphics_obj::hasStroke;

bool CairoGraphics_obj::hitTesting;

 ::openfl::geom::Matrix CairoGraphics_obj::inversePendingMatrix;

 ::openfl::geom::Matrix CairoGraphics_obj::pendingMatrix;

 ::openfl::display::_internal::DrawCommandBuffer CairoGraphics_obj::strokeCommands;

 ::Dynamic CairoGraphics_obj::strokePattern;

 ::lime::math::Matrix3 CairoGraphics_obj::tempMatrix3;

Float CairoGraphics_obj::worldAlpha;

void CairoGraphics_obj::closePath(::hx::Null< bool >  __o_strokeBefore){
            		bool strokeBefore = __o_strokeBefore.Default(false);
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_62_closePath)
HXLINE(  63)		if (::hx::IsNull( ::openfl::display::_internal::CairoGraphics_obj::strokePattern )) {
HXLINE(  65)			return;
            		}
HXLINE(  68)		if (!(strokeBefore)) {
HXLINE(  70)			::openfl::display::_internal::CairoGraphics_obj::cairo->closePath();
            		}
HXLINE(  73)		::openfl::display::_internal::CairoGraphics_obj::cairo->set_source(::openfl::display::_internal::CairoGraphics_obj::strokePattern);
HXLINE(  74)		if (!(::openfl::display::_internal::CairoGraphics_obj::hitTesting)) {
HXLINE(  74)			::openfl::display::_internal::CairoGraphics_obj::cairo->strokePreserve();
            		}
HXLINE(  76)		if (strokeBefore) {
HXLINE(  78)			::openfl::display::_internal::CairoGraphics_obj::cairo->closePath();
            		}
HXLINE(  81)		::openfl::display::_internal::CairoGraphics_obj::cairo->newPath();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoGraphics_obj,closePath,(void))

 ::Dynamic CairoGraphics_obj::createGradientPattern( ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod,Float focalPointRatio){
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_86_createGradientPattern)
HXLINE(  87)		 ::Dynamic pattern = null();
HXDLIN(  87)		 ::openfl::geom::Point point = null();
HXDLIN(  87)		 ::openfl::geom::Point point2 = null();
HXDLIN(  87)		bool releaseMatrix = false;
HXLINE(  92)		if (::hx::IsNull( matrix )) {
HXLINE(  94)			matrix = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE(  95)			releaseMatrix = true;
            		}
HXLINE(  98)		 ::Dynamic _hx_switch_0 = type;
            		if (  (_hx_switch_0==0) ){
HXLINE( 111)			point = ::openfl::geom::Point_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Point >();
HXLINE( 112)			point->setTo(((Float)-819.2),( (Float)(0) ));
HXLINE( 113)			{
HXLINE( 113)				Float px = point->x;
HXDLIN( 113)				Float py = point->y;
HXDLIN( 113)				point->x = (((px * matrix->a) + (py * matrix->c)) + matrix->tx);
HXDLIN( 113)				point->y = (((px * matrix->b) + (py * matrix->d)) + matrix->ty);
            			}
HXLINE( 115)			point2 = ::openfl::geom::Point_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Point >();
HXLINE( 116)			point2->setTo(((Float)819.2),( (Float)(0) ));
HXLINE( 117)			{
HXLINE( 117)				Float px1 = point2->x;
HXDLIN( 117)				Float py1 = point2->y;
HXDLIN( 117)				point2->x = (((px1 * matrix->a) + (py1 * matrix->c)) + matrix->tx);
HXDLIN( 117)				point2->y = (((px1 * matrix->b) + (py1 * matrix->d)) + matrix->ty);
            			}
HXLINE( 119)			 ::openfl::geom::Point point1 = point;
HXDLIN( 119)			point1->x = (point1->x + ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___bounds->x);
HXLINE( 120)			 ::openfl::geom::Point point21 = point2;
HXDLIN( 120)			point21->x = (point21->x + ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___bounds->x);
HXLINE( 121)			 ::openfl::geom::Point point3 = point;
HXDLIN( 121)			point3->y = (point3->y + ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___bounds->y);
HXLINE( 122)			 ::openfl::geom::Point point22 = point2;
HXDLIN( 122)			point22->y = (point22->y + ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___bounds->y);
HXLINE( 124)			pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createLinear(point->x,point->y,point2->x,point2->y);
HXLINE( 110)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE( 101)			point = ::openfl::geom::Point_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Point >();
HXLINE( 102)			point->setTo(((Float)1638.4),( (Float)(0) ));
HXLINE( 103)			{
HXLINE( 103)				Float px = point->x;
HXDLIN( 103)				Float py = point->y;
HXDLIN( 103)				point->x = (((px * matrix->a) + (py * matrix->c)) + matrix->tx);
HXDLIN( 103)				point->y = (((px * matrix->b) + (py * matrix->d)) + matrix->ty);
            			}
HXLINE( 105)			Float x = (matrix->tx + ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___bounds->x);
HXLINE( 106)			Float y = (matrix->ty + ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___bounds->y);
HXLINE( 108)			pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRadial(x,y,( (Float)(0) ),x,y,::Math_obj::abs(((point->x - matrix->tx) / ( (Float)(2) ))));
HXLINE( 100)			goto _hx_goto_1;
            		}
            		_hx_goto_1:;
HXLINE( 127)		int rgb;
HXDLIN( 127)		Float alpha;
HXDLIN( 127)		Float r;
HXDLIN( 127)		Float g;
HXDLIN( 127)		Float b;
HXDLIN( 127)		Float ratio;
HXLINE( 129)		{
HXLINE( 129)			int _g = 0;
HXDLIN( 129)			int _g1 = colors->length;
HXDLIN( 129)			while((_g < _g1)){
HXLINE( 129)				_g = (_g + 1);
HXDLIN( 129)				int i = (_g - 1);
HXLINE( 131)				rgb = colors->__get(i);
HXLINE( 132)				alpha = alphas->__get(i);
HXLINE( 133)				r = (( (Float)(::hx::UShr((rgb & 16711680),16)) ) / ( (Float)(255) ));
HXLINE( 134)				g = (( (Float)(::hx::UShr((rgb & 65280),8)) ) / ( (Float)(255) ));
HXLINE( 135)				b = (( (Float)((rgb & 255)) ) / ( (Float)(255) ));
HXLINE( 137)				ratio = (( (Float)(ratios->__get(i)) ) / ( (Float)(255) ));
HXLINE( 138)				if ((ratio < 0)) {
HXLINE( 138)					ratio = ( (Float)(0) );
            				}
HXLINE( 139)				if ((ratio > 1)) {
HXLINE( 139)					ratio = ( (Float)(1) );
            				}
HXLINE( 141)				::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::addColorStopRGBA(pattern,ratio,r,g,b,alpha);
            			}
            		}
HXLINE( 144)		if (::hx::IsNotNull( point )) {
HXLINE( 144)			::openfl::geom::Point_obj::_hx___pool->release(point);
            		}
HXLINE( 145)		if (::hx::IsNotNull( point2 )) {
HXLINE( 145)			::openfl::geom::Point_obj::_hx___pool->release(point2);
            		}
HXLINE( 146)		if (releaseMatrix) {
HXLINE( 146)			::openfl::geom::Matrix_obj::_hx___pool->release(matrix);
            		}
HXLINE( 148)		 ::lime::math::Matrix3 mat = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::get_matrix(pattern);
HXLINE( 150)		mat->tx = ::openfl::display::_internal::CairoGraphics_obj::bounds->x;
HXLINE( 151)		mat->ty = ::openfl::display::_internal::CairoGraphics_obj::bounds->y;
HXLINE( 153)		::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(pattern,mat);
HXLINE( 155)		return pattern;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(CairoGraphics_obj,createGradientPattern,return )

 ::Dynamic CairoGraphics_obj::createImagePattern( ::openfl::display::BitmapData bitmapFill, ::openfl::geom::Matrix matrix,bool bitmapRepeat,bool smooth){
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_159_createImagePattern)
HXLINE( 160)		 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(bitmapFill->getSurface());
HXLINE( 161)		int _hx_tmp;
HXDLIN( 161)		bool _hx_tmp1;
HXDLIN( 161)		if (smooth) {
HXLINE( 161)			_hx_tmp1 = ::openfl::display::_internal::CairoGraphics_obj::allowSmoothing;
            		}
            		else {
HXLINE( 161)			_hx_tmp1 = false;
            		}
HXDLIN( 161)		if (_hx_tmp1) {
HXLINE( 161)			_hx_tmp = 1;
            		}
            		else {
HXLINE( 161)			_hx_tmp = 3;
            		}
HXDLIN( 161)		::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp);
HXLINE( 163)		if (bitmapRepeat) {
HXLINE( 165)			::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_extend(pattern,1);
            		}
HXLINE( 168)		::openfl::display::_internal::CairoGraphics_obj::fillPatternMatrix = matrix;
HXLINE( 170)		return pattern;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CairoGraphics_obj,createImagePattern,return )

void CairoGraphics_obj::drawRoundRect(Float x,Float y,Float width,Float height,Float ellipseWidth, ::Dynamic ellipseHeight){
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_174_drawRoundRect)
HXLINE( 175)		if (::hx::IsNull( ellipseHeight )) {
HXLINE( 175)			ellipseHeight = ellipseWidth;
            		}
HXLINE( 177)		ellipseWidth = (ellipseWidth * ((Float)0.5));
HXLINE( 178)		ellipseHeight = (ellipseHeight * ((Float)0.5));
HXLINE( 180)		if ((ellipseWidth > (width / ( (Float)(2) )))) {
HXLINE( 180)			ellipseWidth = (width / ( (Float)(2) ));
            		}
HXLINE( 181)		if (::hx::IsGreater( ellipseHeight,(height / ( (Float)(2) )) )) {
HXLINE( 181)			ellipseHeight = (height / ( (Float)(2) ));
            		}
HXLINE( 183)		Float xe = (x + width);
HXDLIN( 183)		Float ye = (y + height);
HXDLIN( 183)		Float cx1 = (-(ellipseWidth) + (ellipseWidth * ::openfl::display::_internal::CairoGraphics_obj::SIN45));
HXDLIN( 183)		Float cx2 = (-(ellipseWidth) + (ellipseWidth * ::openfl::display::_internal::CairoGraphics_obj::TAN22));
HXDLIN( 183)		Float cy1 = (-(ellipseHeight) + (( (Float)(ellipseHeight) ) * ::openfl::display::_internal::CairoGraphics_obj::SIN45));
HXDLIN( 183)		Float cy2 = (-(ellipseHeight) + (( (Float)(ellipseHeight) ) * ::openfl::display::_internal::CairoGraphics_obj::TAN22));
HXLINE( 190)		::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo(xe,(ye - ( (Float)(ellipseHeight) )));
HXLINE( 191)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo(xe,(ye + cy2),(xe + cx1),(ye + cy1));
HXLINE( 192)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo((xe + cx2),ye,(xe - ellipseWidth),ye);
HXLINE( 193)		::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo((x + ellipseWidth),ye);
HXLINE( 194)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo((x - cx2),ye,(x - cx1),(ye + cy1));
HXLINE( 195)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo(x,(ye + cy2),x,(ye - ( (Float)(ellipseHeight) )));
HXLINE( 196)		::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo(x,(y + ellipseHeight));
HXLINE( 197)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo(x,(y - cy2),(x - cx1),(y - cy1));
HXLINE( 198)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo((x - cx2),y,(x + ellipseWidth),y);
HXLINE( 199)		::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo((xe - ellipseWidth),y);
HXLINE( 200)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo((xe + cx2),y,(xe + cx1),(y - cy1));
HXLINE( 201)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo(xe,(y - cy2),xe,(y + ellipseHeight));
HXLINE( 202)		::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo(xe,(ye - ( (Float)(ellipseHeight) )));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoGraphics_obj,drawRoundRect,(void))

void CairoGraphics_obj::endFill(){
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_206_endFill)
HXLINE( 207)		::openfl::display::_internal::CairoGraphics_obj::cairo->newPath();
HXLINE( 208)		::openfl::display::_internal::CairoGraphics_obj::playCommands(::openfl::display::_internal::CairoGraphics_obj::fillCommands,false);
HXLINE( 209)		::openfl::display::_internal::CairoGraphics_obj::fillCommands->clear();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoGraphics_obj,endFill,(void))

void CairoGraphics_obj::endStroke(){
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_213_endStroke)
HXLINE( 214)		::openfl::display::_internal::CairoGraphics_obj::cairo->newPath();
HXLINE( 215)		::openfl::display::_internal::CairoGraphics_obj::playCommands(::openfl::display::_internal::CairoGraphics_obj::strokeCommands,true);
HXLINE( 216)		::openfl::display::_internal::CairoGraphics_obj::cairo->closePath();
HXLINE( 217)		::openfl::display::_internal::CairoGraphics_obj::strokeCommands->clear();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoGraphics_obj,endStroke,(void))

bool CairoGraphics_obj::hitTest( ::openfl::display::Graphics graphics,Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_222_hitTest)
HXLINE( 224)		::openfl::display::_internal::CairoGraphics_obj::graphics = graphics;
HXLINE( 225)		::openfl::display::_internal::CairoGraphics_obj::bounds = graphics->_hx___bounds;
HXLINE( 227)		bool _hx_tmp;
HXDLIN( 227)		bool _hx_tmp1;
HXDLIN( 227)		bool _hx_tmp2;
HXDLIN( 227)		bool _hx_tmp3;
HXDLIN( 227)		if ((graphics->_hx___commands->get_length() != 0)) {
HXLINE( 227)			_hx_tmp3 = ::hx::IsNull( ::openfl::display::_internal::CairoGraphics_obj::bounds );
            		}
            		else {
HXLINE( 227)			_hx_tmp3 = true;
            		}
HXDLIN( 227)		if (!(_hx_tmp3)) {
HXLINE( 227)			_hx_tmp2 = (::openfl::display::_internal::CairoGraphics_obj::bounds->width == 0);
            		}
            		else {
HXLINE( 227)			_hx_tmp2 = true;
            		}
HXDLIN( 227)		if (!(_hx_tmp2)) {
HXLINE( 227)			_hx_tmp1 = (::openfl::display::_internal::CairoGraphics_obj::bounds->height == 0);
            		}
            		else {
HXLINE( 227)			_hx_tmp1 = true;
            		}
HXDLIN( 227)		if (!(_hx_tmp1)) {
HXLINE( 227)			_hx_tmp = !(::openfl::display::_internal::CairoGraphics_obj::bounds->contains(x,y));
            		}
            		else {
HXLINE( 227)			_hx_tmp = true;
            		}
HXDLIN( 227)		if (_hx_tmp) {
HXLINE( 229)			::openfl::display::_internal::CairoGraphics_obj::graphics = null();
HXLINE( 230)			return false;
            		}
            		else {
HXLINE( 234)			::openfl::display::_internal::CairoGraphics_obj::hitTesting = true;
HXLINE( 236)			x = (x - ::openfl::display::_internal::CairoGraphics_obj::bounds->x);
HXLINE( 237)			y = (y - ::openfl::display::_internal::CairoGraphics_obj::bounds->y);
HXLINE( 239)			if (::hx::IsNull( graphics->_hx___cairo )) {
HXLINE( 241)				 ::openfl::display::BitmapData bitmap =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,::Math_obj::floor(::Math_obj::max(( (Float)(1) ),::openfl::display::_internal::CairoGraphics_obj::bounds->width)),::Math_obj::floor(::Math_obj::max(( (Float)(1) ),::openfl::display::_internal::CairoGraphics_obj::bounds->height)),true,0);
HXLINE( 242)				 ::Dynamic surface = bitmap->getSurface();
HXLINE( 243)				graphics->_hx___cairo =  ::lime::graphics::cairo::Cairo_obj::__alloc( HX_CTX ,surface);
            			}
HXLINE( 247)			::openfl::display::_internal::CairoGraphics_obj::cairo = graphics->_hx___cairo;
HXLINE( 249)			::openfl::display::_internal::CairoGraphics_obj::fillCommands->clear();
HXLINE( 250)			::openfl::display::_internal::CairoGraphics_obj::strokeCommands->clear();
HXLINE( 252)			::openfl::display::_internal::CairoGraphics_obj::hasFill = false;
HXLINE( 253)			::openfl::display::_internal::CairoGraphics_obj::hasStroke = false;
HXLINE( 255)			::openfl::display::_internal::CairoGraphics_obj::fillPattern = null();
HXLINE( 256)			::openfl::display::_internal::CairoGraphics_obj::strokePattern = null();
HXLINE( 258)			::openfl::display::_internal::CairoGraphics_obj::cairo->newPath();
HXLINE( 259)			::openfl::display::_internal::CairoGraphics_obj::cairo->set_fillRule(1);
HXLINE( 261)			 ::openfl::display::_internal::DrawCommandReader data =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,graphics->_hx___commands);
HXLINE( 263)			{
HXLINE( 263)				int _g = 0;
HXDLIN( 263)				::Array< ::Dynamic> _g1 = graphics->_hx___commands->types;
HXDLIN( 263)				while((_g < _g1->length)){
HXLINE( 263)					 ::openfl::display::_internal::DrawCommandType type = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN( 263)					_g = (_g + 1);
HXLINE( 265)					switch((int)(type->_hx_getIndex())){
            						case (int)0: case (int)1: case (int)2: case (int)3: {
HXLINE( 324)							::openfl::display::_internal::CairoGraphics_obj::endFill();
HXLINE( 326)							bool _hx_tmp;
HXDLIN( 326)							if (::openfl::display::_internal::CairoGraphics_obj::hasFill) {
HXLINE( 326)								_hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::cairo->inFill(x,y);
            							}
            							else {
HXLINE( 326)								_hx_tmp = false;
            							}
HXDLIN( 326)							if (_hx_tmp) {
HXLINE( 328)								data->destroy();
HXLINE( 329)								::openfl::display::_internal::CairoGraphics_obj::graphics = null();
HXLINE( 330)								return true;
            							}
HXLINE( 333)							::openfl::display::_internal::CairoGraphics_obj::endStroke();
HXLINE( 335)							bool _hx_tmp1;
HXDLIN( 335)							if (::openfl::display::_internal::CairoGraphics_obj::hasStroke) {
HXLINE( 335)								_hx_tmp1 = ::openfl::display::_internal::CairoGraphics_obj::cairo->inStroke(x,y);
            							}
            							else {
HXLINE( 335)								_hx_tmp1 = false;
            							}
HXDLIN( 335)							if (_hx_tmp1) {
HXLINE( 337)								data->destroy();
HXLINE( 338)								::openfl::display::_internal::CairoGraphics_obj::graphics = null();
HXLINE( 339)								return true;
            							}
HXLINE( 342)							if (::hx::IsPointerEq( type,::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn() )) {
HXLINE( 344)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 344)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)										data1->oPos = (data1->oPos + 2);
HXDLIN( 344)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 344)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 344)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)										data1->iPos = (data1->iPos + 1);
HXDLIN( 344)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 344)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 344)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)										data1->oPos = (data1->oPos + 4);
HXDLIN( 344)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 344)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 344)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 344)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 344)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 344)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 344)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 344)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 344)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 344)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 344)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 344)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 344)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 344)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)										data1->fPos = (data1->fPos + 5);
HXDLIN( 344)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 344)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 344)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 344)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)										data1->oPos = (data1->oPos + 2);
HXDLIN( 344)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 344)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 344)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)										data1->oPos = (data1->oPos + 4);
HXDLIN( 344)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 344)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 344)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 344)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 344)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 344)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 344)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)										data1->oPos = (data1->oPos + 4);
HXDLIN( 344)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 344)										data2->iPos = (data2->iPos + 1);
HXDLIN( 344)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 344)										data3->fPos = (data3->fPos + 2);
HXDLIN( 344)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 344)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 344)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 344)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 344)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 344)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 344)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 344)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn();
HXDLIN( 344)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 344)								 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 345)								::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginBitmapFill(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
HXLINE( 346)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginBitmapFill(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
            							}
            							else {
HXLINE( 348)								if (::hx::IsPointerEq( type,::openfl::display::_internal::DrawCommandType_obj::BEGIN_GRADIENT_FILL_dyn() )) {
HXLINE( 350)									switch((int)(data->prev->_hx_getIndex())){
            										case (int)0: {
HXLINE( 350)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 350)											data1->oPos = (data1->oPos + 2);
HXDLIN( 350)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 350)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)1: {
HXLINE( 350)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 350)											data1->iPos = (data1->iPos + 1);
HXDLIN( 350)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 350)											data2->fPos = (data2->fPos + 1);
            										}
            										break;
            										case (int)2: {
HXLINE( 350)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 350)											data1->oPos = (data1->oPos + 4);
HXDLIN( 350)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 350)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 350)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 350)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 350)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 350)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)3: {
HXLINE( 350)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 350)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)4: {
HXLINE( 350)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 350)											data1->fPos = (data1->fPos + 6);
            										}
            										break;
            										case (int)5: {
HXLINE( 350)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 350)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)6: {
HXLINE( 350)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 350)											data1->fPos = (data1->fPos + 3);
            										}
            										break;
            										case (int)7: {
HXLINE( 350)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 350)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)8: {
HXLINE( 350)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 350)											data1->oPos = (data1->oPos + 3);
            										}
            										break;
            										case (int)9: {
HXLINE( 350)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 350)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)10: {
HXLINE( 350)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 350)											data1->fPos = (data1->fPos + 5);
HXDLIN( 350)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 350)											data2->oPos = (data2->oPos + 1);
            										}
            										break;
            										case (int)12: {
HXLINE( 350)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 350)											data1->oPos = (data1->oPos + 4);
            										}
            										break;
            										case (int)13: {
            										}
            										break;
            										case (int)14: {
HXLINE( 350)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 350)											data1->oPos = (data1->oPos + 2);
HXDLIN( 350)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 350)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)15: {
HXLINE( 350)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 350)											data1->oPos = (data1->oPos + 4);
HXDLIN( 350)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 350)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 350)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 350)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 350)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 350)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)16: {
HXLINE( 350)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 350)											data1->oPos = (data1->oPos + 4);
HXDLIN( 350)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 350)											data2->iPos = (data2->iPos + 1);
HXDLIN( 350)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 350)											data3->fPos = (data3->fPos + 2);
HXDLIN( 350)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 350)											data4->bPos = (data4->bPos + 1);
            										}
            										break;
            										case (int)17: {
HXLINE( 350)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 350)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)18: {
HXLINE( 350)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 350)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)19: {
HXLINE( 350)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 350)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)20: {
HXLINE( 350)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 350)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)21: case (int)22: {
            										}
            										break;
            										default:{
            										}
            									}
HXLINE( 350)									data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_GRADIENT_FILL_dyn();
HXDLIN( 350)									 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 350)									 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 351)									::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginGradientFill(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
HXLINE( 353)									::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginGradientFill(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
            								}
            								else {
HXLINE( 356)									if (::hx::IsPointerEq( type,::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn() )) {
HXLINE( 358)										switch((int)(data->prev->_hx_getIndex())){
            											case (int)0: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->oPos = (data1->oPos + 2);
HXDLIN( 358)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 358)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)1: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->iPos = (data1->iPos + 1);
HXDLIN( 358)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 358)												data2->fPos = (data2->fPos + 1);
            											}
            											break;
            											case (int)2: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->oPos = (data1->oPos + 4);
HXDLIN( 358)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 358)												data2->iiPos = (data2->iiPos + 2);
HXDLIN( 358)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 358)												data3->ffPos = (data3->ffPos + 1);
HXDLIN( 358)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 358)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)3: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)4: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->fPos = (data1->fPos + 6);
            											}
            											break;
            											case (int)5: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)6: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->fPos = (data1->fPos + 3);
            											}
            											break;
            											case (int)7: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)8: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->oPos = (data1->oPos + 3);
            											}
            											break;
            											case (int)9: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)10: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->fPos = (data1->fPos + 5);
HXDLIN( 358)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 358)												data2->oPos = (data2->oPos + 1);
            											}
            											break;
            											case (int)12: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->oPos = (data1->oPos + 4);
            											}
            											break;
            											case (int)13: {
            											}
            											break;
            											case (int)14: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->oPos = (data1->oPos + 2);
HXDLIN( 358)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 358)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)15: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->oPos = (data1->oPos + 4);
HXDLIN( 358)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 358)												data2->iiPos = (data2->iiPos + 2);
HXDLIN( 358)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 358)												data3->ffPos = (data3->ffPos + 1);
HXDLIN( 358)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 358)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)16: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->oPos = (data1->oPos + 4);
HXDLIN( 358)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 358)												data2->iPos = (data2->iPos + 1);
HXDLIN( 358)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 358)												data3->fPos = (data3->fPos + 2);
HXDLIN( 358)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 358)												data4->bPos = (data4->bPos + 1);
            											}
            											break;
            											case (int)17: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)18: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)19: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)20: {
HXLINE( 358)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 358)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)21: case (int)22: {
            											}
            											break;
            											default:{
            											}
            										}
HXLINE( 358)										data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn();
HXDLIN( 358)										 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 358)										 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 359)										::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginShaderFill(( ( ::openfl::display::_internal::ShaderBuffer)(c->buffer->o->__get(c->oPos)) ));
HXLINE( 360)										::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginShaderFill(( ( ::openfl::display::_internal::ShaderBuffer)(c->buffer->o->__get(c->oPos)) ));
            									}
            									else {
HXLINE( 364)										switch((int)(data->prev->_hx_getIndex())){
            											case (int)0: {
HXLINE( 364)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)												data1->oPos = (data1->oPos + 2);
HXDLIN( 364)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 364)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)1: {
HXLINE( 364)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)												data1->iPos = (data1->iPos + 1);
HXDLIN( 364)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 364)												data2->fPos = (data2->fPos + 1);
            											}
            											break;
            											case (int)2: {
HXLINE( 364)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)												data1->oPos = (data1->oPos + 4);
HXDLIN( 364)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 364)												data2->iiPos = (data2->iiPos + 2);
HXDLIN( 364)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 364)												data3->ffPos = (data3->ffPos + 1);
HXDLIN( 364)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 364)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)3: {
HXLINE( 364)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)4: {
HXLINE( 364)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)												data1->fPos = (data1->fPos + 6);
            											}
            											break;
            											case (int)5: {
HXLINE( 364)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)6: {
HXLINE( 364)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)												data1->fPos = (data1->fPos + 3);
            											}
            											break;
            											case (int)7: {
HXLINE( 364)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)8: {
HXLINE( 364)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)												data1->oPos = (data1->oPos + 3);
            											}
            											break;
            											case (int)9: {
HXLINE( 364)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)10: {
HXLINE( 364)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)												data1->fPos = (data1->fPos + 5);
HXDLIN( 364)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 364)												data2->oPos = (data2->oPos + 1);
            											}
            											break;
            											case (int)12: {
HXLINE( 364)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)												data1->oPos = (data1->oPos + 4);
            											}
            											break;
            											case (int)13: {
            											}
            											break;
            											case (int)14: {
HXLINE( 364)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)												data1->oPos = (data1->oPos + 2);
HXDLIN( 364)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 364)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)15: {
HXLINE( 364)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)												data1->oPos = (data1->oPos + 4);
HXDLIN( 364)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 364)												data2->iiPos = (data2->iiPos + 2);
HXDLIN( 364)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 364)												data3->ffPos = (data3->ffPos + 1);
HXDLIN( 364)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 364)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)16: {
HXLINE( 364)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)												data1->oPos = (data1->oPos + 4);
HXDLIN( 364)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 364)												data2->iPos = (data2->iPos + 1);
HXDLIN( 364)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 364)												data3->fPos = (data3->fPos + 2);
HXDLIN( 364)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 364)												data4->bPos = (data4->bPos + 1);
            											}
            											break;
            											case (int)17: {
HXLINE( 364)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)18: {
HXLINE( 364)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)19: {
HXLINE( 364)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)20: {
HXLINE( 364)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 364)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)21: case (int)22: {
            											}
            											break;
            											default:{
            											}
            										}
HXLINE( 364)										data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_FILL_dyn();
HXDLIN( 364)										 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 364)										 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 365)										::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginFill(c->buffer->i->__get(c->iPos),( (Float)(1) ));
HXLINE( 366)										::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginFill(c->buffer->i->__get(c->iPos),( (Float)(1) ));
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 268)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->oPos = (data1->oPos + 2);
HXDLIN( 268)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 268)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->iPos = (data1->iPos + 1);
HXDLIN( 268)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 268)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->oPos = (data1->oPos + 4);
HXDLIN( 268)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 268)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 268)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 268)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 268)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 268)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->fPos = (data1->fPos + 5);
HXDLIN( 268)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 268)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->oPos = (data1->oPos + 2);
HXDLIN( 268)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 268)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->oPos = (data1->oPos + 4);
HXDLIN( 268)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 268)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 268)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 268)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 268)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 268)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->oPos = (data1->oPos + 4);
HXDLIN( 268)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 268)									data2->iPos = (data2->iPos + 1);
HXDLIN( 268)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 268)									data3->fPos = (data3->fPos + 2);
HXDLIN( 268)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 268)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 268)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 268)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 268)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::CUBIC_CURVE_TO_dyn();
HXDLIN( 268)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 268)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 269)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->cubicCurveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->f->__get((c->fPos + 5)));
HXLINE( 270)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->cubicCurveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->f->__get((c->fPos + 5)));
            						}
            						break;
            						case (int)5: {
HXLINE( 273)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->oPos = (data1->oPos + 2);
HXDLIN( 273)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 273)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->iPos = (data1->iPos + 1);
HXDLIN( 273)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 273)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->oPos = (data1->oPos + 4);
HXDLIN( 273)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 273)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 273)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 273)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 273)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 273)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->fPos = (data1->fPos + 5);
HXDLIN( 273)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 273)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->oPos = (data1->oPos + 2);
HXDLIN( 273)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 273)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->oPos = (data1->oPos + 4);
HXDLIN( 273)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 273)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 273)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 273)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 273)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 273)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->oPos = (data1->oPos + 4);
HXDLIN( 273)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 273)									data2->iPos = (data2->iPos + 1);
HXDLIN( 273)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 273)									data3->fPos = (data3->fPos + 2);
HXDLIN( 273)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 273)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 273)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 273)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 273)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::CURVE_TO_dyn();
HXDLIN( 273)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 273)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 274)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->curveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
HXLINE( 275)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->curveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            						}
            						break;
            						case (int)6: {
HXLINE( 370)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->oPos = (data1->oPos + 2);
HXDLIN( 370)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 370)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->iPos = (data1->iPos + 1);
HXDLIN( 370)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 370)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->oPos = (data1->oPos + 4);
HXDLIN( 370)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 370)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 370)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 370)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 370)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 370)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->fPos = (data1->fPos + 5);
HXDLIN( 370)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 370)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->oPos = (data1->oPos + 2);
HXDLIN( 370)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 370)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->oPos = (data1->oPos + 4);
HXDLIN( 370)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 370)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 370)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 370)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 370)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 370)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->oPos = (data1->oPos + 4);
HXDLIN( 370)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 370)									data2->iPos = (data2->iPos + 1);
HXDLIN( 370)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 370)									data3->fPos = (data3->fPos + 2);
HXDLIN( 370)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 370)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 370)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_CIRCLE_dyn();
HXDLIN( 370)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 370)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 371)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawCircle(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)));
HXLINE( 372)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawCircle(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)));
            						}
            						break;
            						case (int)7: {
HXLINE( 375)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->oPos = (data1->oPos + 2);
HXDLIN( 375)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 375)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->iPos = (data1->iPos + 1);
HXDLIN( 375)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 375)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->oPos = (data1->oPos + 4);
HXDLIN( 375)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 375)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 375)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 375)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 375)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 375)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->fPos = (data1->fPos + 5);
HXDLIN( 375)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 375)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->oPos = (data1->oPos + 2);
HXDLIN( 375)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 375)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->oPos = (data1->oPos + 4);
HXDLIN( 375)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 375)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 375)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 375)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 375)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 375)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->oPos = (data1->oPos + 4);
HXDLIN( 375)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 375)									data2->iPos = (data2->iPos + 1);
HXDLIN( 375)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 375)									data3->fPos = (data3->fPos + 2);
HXDLIN( 375)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 375)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 375)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ELLIPSE_dyn();
HXDLIN( 375)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 375)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 376)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawEllipse(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
HXLINE( 377)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawEllipse(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            						}
            						break;
            						case (int)9: {
HXLINE( 380)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->oPos = (data1->oPos + 2);
HXDLIN( 380)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 380)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->iPos = (data1->iPos + 1);
HXDLIN( 380)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 380)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->oPos = (data1->oPos + 4);
HXDLIN( 380)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 380)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 380)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 380)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 380)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 380)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->fPos = (data1->fPos + 5);
HXDLIN( 380)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 380)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->oPos = (data1->oPos + 2);
HXDLIN( 380)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 380)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->oPos = (data1->oPos + 4);
HXDLIN( 380)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 380)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 380)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 380)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 380)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 380)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->oPos = (data1->oPos + 4);
HXDLIN( 380)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 380)									data2->iPos = (data2->iPos + 1);
HXDLIN( 380)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 380)									data3->fPos = (data3->fPos + 2);
HXDLIN( 380)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 380)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 380)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_RECT_dyn();
HXDLIN( 380)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 380)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 381)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
HXLINE( 382)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            						}
            						break;
            						case (int)10: {
HXLINE( 385)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 385)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)									data1->oPos = (data1->oPos + 2);
HXDLIN( 385)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 385)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 385)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)									data1->iPos = (data1->iPos + 1);
HXDLIN( 385)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 385)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 385)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)									data1->oPos = (data1->oPos + 4);
HXDLIN( 385)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 385)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 385)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 385)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 385)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 385)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 385)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 385)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 385)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 385)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 385)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 385)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 385)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 385)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)									data1->fPos = (data1->fPos + 5);
HXDLIN( 385)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 385)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 385)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 385)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)									data1->oPos = (data1->oPos + 2);
HXDLIN( 385)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 385)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 385)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)									data1->oPos = (data1->oPos + 4);
HXDLIN( 385)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 385)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 385)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 385)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 385)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 385)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 385)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)									data1->oPos = (data1->oPos + 4);
HXDLIN( 385)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 385)									data2->iPos = (data2->iPos + 1);
HXDLIN( 385)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 385)									data3->fPos = (data3->fPos + 2);
HXDLIN( 385)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 385)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 385)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 385)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 385)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 385)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 385)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ROUND_RECT_dyn();
HXDLIN( 385)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 385)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 386)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawRoundRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->o->__get(c->oPos));
HXLINE( 387)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawRoundRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->o->__get(c->oPos));
            						}
            						break;
            						case (int)13: {
HXLINE( 301)							{
HXLINE( 301)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 301)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)										data1->oPos = (data1->oPos + 2);
HXDLIN( 301)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 301)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 301)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)										data1->iPos = (data1->iPos + 1);
HXDLIN( 301)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 301)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 301)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)										data1->oPos = (data1->oPos + 4);
HXDLIN( 301)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 301)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 301)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 301)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 301)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 301)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 301)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 301)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 301)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 301)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 301)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 301)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 301)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 301)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)										data1->fPos = (data1->fPos + 5);
HXDLIN( 301)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 301)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 301)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 301)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)										data1->oPos = (data1->oPos + 2);
HXDLIN( 301)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 301)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 301)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)										data1->oPos = (data1->oPos + 4);
HXDLIN( 301)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 301)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 301)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 301)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 301)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 301)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 301)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)										data1->oPos = (data1->oPos + 4);
HXDLIN( 301)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 301)										data2->iPos = (data2->iPos + 1);
HXDLIN( 301)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 301)										data3->fPos = (data3->fPos + 2);
HXDLIN( 301)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 301)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 301)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 301)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 301)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 301)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 301)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 301)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::END_FILL_dyn();
HXDLIN( 301)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
            							}
HXLINE( 302)							::openfl::display::_internal::CairoGraphics_obj::endFill();
HXLINE( 304)							bool _hx_tmp;
HXDLIN( 304)							if (::openfl::display::_internal::CairoGraphics_obj::hasFill) {
HXLINE( 304)								_hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::cairo->inFill(x,y);
            							}
            							else {
HXLINE( 304)								_hx_tmp = false;
            							}
HXDLIN( 304)							if (_hx_tmp) {
HXLINE( 306)								data->destroy();
HXLINE( 307)								::openfl::display::_internal::CairoGraphics_obj::graphics = null();
HXLINE( 308)								return true;
            							}
HXLINE( 311)							::openfl::display::_internal::CairoGraphics_obj::endStroke();
HXLINE( 313)							bool _hx_tmp1;
HXDLIN( 313)							if (::openfl::display::_internal::CairoGraphics_obj::hasStroke) {
HXLINE( 313)								_hx_tmp1 = ::openfl::display::_internal::CairoGraphics_obj::cairo->inStroke(x,y);
            							}
            							else {
HXLINE( 313)								_hx_tmp1 = false;
            							}
HXDLIN( 313)							if (_hx_tmp1) {
HXLINE( 315)								data->destroy();
HXLINE( 316)								::openfl::display::_internal::CairoGraphics_obj::graphics = null();
HXLINE( 317)								return true;
            							}
HXLINE( 320)							::openfl::display::_internal::CairoGraphics_obj::hasFill = false;
HXLINE( 321)							::openfl::display::_internal::CairoGraphics_obj::bitmapFill = null();
            						}
            						break;
            						case (int)14: {
HXLINE( 297)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->oPos = (data1->oPos + 2);
HXDLIN( 297)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 297)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->iPos = (data1->iPos + 1);
HXDLIN( 297)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 297)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->oPos = (data1->oPos + 4);
HXDLIN( 297)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 297)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 297)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 297)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 297)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 297)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->fPos = (data1->fPos + 5);
HXDLIN( 297)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 297)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->oPos = (data1->oPos + 2);
HXDLIN( 297)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 297)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->oPos = (data1->oPos + 4);
HXDLIN( 297)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 297)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 297)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 297)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 297)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 297)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->oPos = (data1->oPos + 4);
HXDLIN( 297)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 297)									data2->iPos = (data2->iPos + 1);
HXDLIN( 297)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 297)									data3->fPos = (data3->fPos + 2);
HXDLIN( 297)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 297)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 297)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 297)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 297)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_BITMAP_STYLE_dyn();
HXDLIN( 297)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 297)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 298)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineBitmapStyle(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
            						}
            						break;
            						case (int)15: {
HXLINE( 292)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 292)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 292)									data1->oPos = (data1->oPos + 2);
HXDLIN( 292)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 292)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 292)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 292)									data1->iPos = (data1->iPos + 1);
HXDLIN( 292)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 292)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 292)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 292)									data1->oPos = (data1->oPos + 4);
HXDLIN( 292)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 292)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 292)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 292)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 292)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 292)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 292)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 292)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 292)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 292)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 292)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 292)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 292)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 292)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 292)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 292)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 292)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 292)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 292)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 292)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 292)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 292)									data1->fPos = (data1->fPos + 5);
HXDLIN( 292)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 292)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 292)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 292)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 292)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 292)									data1->oPos = (data1->oPos + 2);
HXDLIN( 292)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 292)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 292)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 292)									data1->oPos = (data1->oPos + 4);
HXDLIN( 292)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 292)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 292)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 292)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 292)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 292)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 292)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 292)									data1->oPos = (data1->oPos + 4);
HXDLIN( 292)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 292)									data2->iPos = (data2->iPos + 1);
HXDLIN( 292)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 292)									data3->fPos = (data3->fPos + 2);
HXDLIN( 292)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 292)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 292)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 292)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 292)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 292)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 292)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 292)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 292)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 292)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 292)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_GRADIENT_STYLE_dyn();
HXDLIN( 292)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 292)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 293)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineGradientStyle(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
            						}
            						break;
            						case (int)16: {
HXLINE( 288)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 288)									data1->oPos = (data1->oPos + 2);
HXDLIN( 288)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 288)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 288)									data1->iPos = (data1->iPos + 1);
HXDLIN( 288)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 288)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 288)									data1->oPos = (data1->oPos + 4);
HXDLIN( 288)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 288)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 288)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 288)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 288)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 288)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 288)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 288)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 288)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 288)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 288)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 288)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 288)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 288)									data1->fPos = (data1->fPos + 5);
HXDLIN( 288)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 288)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 288)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 288)									data1->oPos = (data1->oPos + 2);
HXDLIN( 288)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 288)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 288)									data1->oPos = (data1->oPos + 4);
HXDLIN( 288)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 288)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 288)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 288)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 288)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 288)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 288)									data1->oPos = (data1->oPos + 4);
HXDLIN( 288)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 288)									data2->iPos = (data2->iPos + 1);
HXDLIN( 288)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 288)									data3->fPos = (data3->fPos + 2);
HXDLIN( 288)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 288)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 288)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 288)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 288)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 288)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 288)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_STYLE_dyn();
HXDLIN( 288)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 288)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 289)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineStyle(c->buffer->o->__get(c->oPos),c->buffer->i->__get(c->iPos),( (Float)(1) ),c->buffer->b->__get(c->bPos),c->buffer->o->__get((c->oPos + 1)),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get((c->fPos + 1)));
            						}
            						break;
            						case (int)17: {
HXLINE( 278)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->oPos = (data1->oPos + 2);
HXDLIN( 278)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 278)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->iPos = (data1->iPos + 1);
HXDLIN( 278)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 278)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->oPos = (data1->oPos + 4);
HXDLIN( 278)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 278)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 278)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 278)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 278)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 278)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->fPos = (data1->fPos + 5);
HXDLIN( 278)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 278)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->oPos = (data1->oPos + 2);
HXDLIN( 278)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 278)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->oPos = (data1->oPos + 4);
HXDLIN( 278)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 278)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 278)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 278)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 278)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 278)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->oPos = (data1->oPos + 4);
HXDLIN( 278)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 278)									data2->iPos = (data2->iPos + 1);
HXDLIN( 278)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 278)									data3->fPos = (data3->fPos + 2);
HXDLIN( 278)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 278)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 278)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 278)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 278)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_TO_dyn();
HXDLIN( 278)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 278)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 279)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->lineTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
HXLINE( 280)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
            						}
            						break;
            						case (int)18: {
HXLINE( 283)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->oPos = (data1->oPos + 2);
HXDLIN( 283)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 283)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->iPos = (data1->iPos + 1);
HXDLIN( 283)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 283)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->oPos = (data1->oPos + 4);
HXDLIN( 283)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 283)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 283)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 283)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 283)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 283)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->fPos = (data1->fPos + 5);
HXDLIN( 283)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 283)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->oPos = (data1->oPos + 2);
HXDLIN( 283)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 283)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->oPos = (data1->oPos + 4);
HXDLIN( 283)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 283)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 283)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 283)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 283)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 283)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->oPos = (data1->oPos + 4);
HXDLIN( 283)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 283)									data2->iPos = (data2->iPos + 1);
HXDLIN( 283)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 283)									data3->fPos = (data3->fPos + 2);
HXDLIN( 283)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 283)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 283)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 283)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 283)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::MOVE_TO_dyn();
HXDLIN( 283)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 283)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 284)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->moveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
HXLINE( 285)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->moveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
            						}
            						break;
            						case (int)21: {
HXLINE( 390)							{
HXLINE( 390)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 390)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 390)										data1->oPos = (data1->oPos + 2);
HXDLIN( 390)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 390)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 390)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 390)										data1->iPos = (data1->iPos + 1);
HXDLIN( 390)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 390)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 390)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 390)										data1->oPos = (data1->oPos + 4);
HXDLIN( 390)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 390)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 390)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 390)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 390)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 390)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 390)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 390)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 390)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 390)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 390)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 390)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 390)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 390)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 390)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 390)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 390)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 390)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 390)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 390)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 390)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 390)										data1->fPos = (data1->fPos + 5);
HXDLIN( 390)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 390)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 390)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 390)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 390)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 390)										data1->oPos = (data1->oPos + 2);
HXDLIN( 390)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 390)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 390)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 390)										data1->oPos = (data1->oPos + 4);
HXDLIN( 390)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 390)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 390)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 390)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 390)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 390)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 390)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 390)										data1->oPos = (data1->oPos + 4);
HXDLIN( 390)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 390)										data2->iPos = (data2->iPos + 1);
HXDLIN( 390)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 390)										data3->fPos = (data3->fPos + 2);
HXDLIN( 390)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 390)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 390)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 390)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 390)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 390)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 390)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 390)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 390)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 390)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 390)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_EVEN_ODD_dyn();
HXDLIN( 390)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
            							}
HXLINE( 391)							::openfl::display::_internal::CairoGraphics_obj::cairo->set_fillRule(1);
            						}
            						break;
            						case (int)22: {
HXLINE( 394)							{
HXLINE( 394)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 394)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)										data1->oPos = (data1->oPos + 2);
HXDLIN( 394)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 394)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 394)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)										data1->iPos = (data1->iPos + 1);
HXDLIN( 394)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 394)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 394)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)										data1->oPos = (data1->oPos + 4);
HXDLIN( 394)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 394)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 394)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 394)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 394)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 394)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 394)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 394)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 394)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 394)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 394)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 394)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 394)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 394)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)										data1->fPos = (data1->fPos + 5);
HXDLIN( 394)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 394)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 394)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 394)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)										data1->oPos = (data1->oPos + 2);
HXDLIN( 394)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 394)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 394)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)										data1->oPos = (data1->oPos + 4);
HXDLIN( 394)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 394)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 394)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 394)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 394)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 394)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 394)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)										data1->oPos = (data1->oPos + 4);
HXDLIN( 394)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 394)										data2->iPos = (data2->iPos + 1);
HXDLIN( 394)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 394)										data3->fPos = (data3->fPos + 2);
HXDLIN( 394)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 394)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 394)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 394)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 394)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 394)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 394)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_NON_ZERO_dyn();
HXDLIN( 394)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
            							}
HXLINE( 395)							::openfl::display::_internal::CairoGraphics_obj::cairo->set_fillRule(0);
            						}
            						break;
            						default:{
HXLINE( 398)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 398)									data1->oPos = (data1->oPos + 2);
HXDLIN( 398)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 398)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 398)									data1->iPos = (data1->iPos + 1);
HXDLIN( 398)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 398)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 398)									data1->oPos = (data1->oPos + 4);
HXDLIN( 398)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 398)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 398)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 398)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 398)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 398)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 398)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 398)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 398)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 398)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 398)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 398)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 398)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 398)									data1->fPos = (data1->fPos + 5);
HXDLIN( 398)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 398)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 398)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 398)									data1->oPos = (data1->oPos + 2);
HXDLIN( 398)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 398)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 398)									data1->oPos = (data1->oPos + 4);
HXDLIN( 398)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 398)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 398)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 398)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 398)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 398)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 398)									data1->oPos = (data1->oPos + 4);
HXDLIN( 398)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 398)									data2->iPos = (data2->iPos + 1);
HXDLIN( 398)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 398)									data3->fPos = (data3->fPos + 2);
HXDLIN( 398)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 398)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 398)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 398)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 398)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 398)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 398)							data->prev = type;
            						}
            					}
            				}
            			}
HXLINE( 402)			bool hitTest = false;
HXLINE( 404)			if ((::openfl::display::_internal::CairoGraphics_obj::fillCommands->get_length() > 0)) {
HXLINE( 406)				::openfl::display::_internal::CairoGraphics_obj::endFill();
            			}
HXLINE( 409)			bool _hx_tmp;
HXDLIN( 409)			if (::openfl::display::_internal::CairoGraphics_obj::hasFill) {
HXLINE( 409)				_hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::cairo->inFill(x,y);
            			}
            			else {
HXLINE( 409)				_hx_tmp = false;
            			}
HXDLIN( 409)			if (_hx_tmp) {
HXLINE( 411)				hitTest = true;
            			}
HXLINE( 414)			if ((::openfl::display::_internal::CairoGraphics_obj::strokeCommands->get_length() > 0)) {
HXLINE( 416)				::openfl::display::_internal::CairoGraphics_obj::endStroke();
            			}
HXLINE( 419)			bool _hx_tmp1;
HXDLIN( 419)			if (::openfl::display::_internal::CairoGraphics_obj::hasStroke) {
HXLINE( 419)				_hx_tmp1 = ::openfl::display::_internal::CairoGraphics_obj::cairo->inStroke(x,y);
            			}
            			else {
HXLINE( 419)				_hx_tmp1 = false;
            			}
HXDLIN( 419)			if (_hx_tmp1) {
HXLINE( 421)				hitTest = true;
            			}
HXLINE( 424)			data->destroy();
HXLINE( 426)			::openfl::display::_internal::CairoGraphics_obj::graphics = null();
HXLINE( 427)			return hitTest;
            		}
HXLINE( 227)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoGraphics_obj,hitTest,return )

bool CairoGraphics_obj::isCCW(Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_437_isCCW)
HXDLIN( 437)		return ((((x2 - x1) * (y3 - y1)) - ((y2 - y1) * (x3 - x1))) < 0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoGraphics_obj,isCCW,return )

 ::Dynamic CairoGraphics_obj::normalizeUVT( ::openfl::_Vector::FloatVector uvt,::hx::Null< bool >  __o_skipT){
            		bool skipT = __o_skipT.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_441_normalizeUVT)
HXLINE( 442)		Float max = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 443)		Float tmp = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 444)		int len = uvt->get_length();
HXLINE( 446)		{
HXLINE( 446)			int _g = 1;
HXDLIN( 446)			int _g1 = (len + 1);
HXDLIN( 446)			while((_g < _g1)){
HXLINE( 446)				_g = (_g + 1);
HXDLIN( 446)				int t = (_g - 1);
HXLINE( 448)				bool _hx_tmp;
HXDLIN( 448)				if (skipT) {
HXLINE( 448)					_hx_tmp = (::hx::Mod(t,3) == 0);
            				}
            				else {
HXLINE( 448)					_hx_tmp = false;
            				}
HXDLIN( 448)				if (_hx_tmp) {
HXLINE( 450)					continue;
            				}
HXLINE( 453)				tmp = uvt->get((t - 1));
HXLINE( 455)				if ((max < tmp)) {
HXLINE( 457)					max = tmp;
            				}
            			}
            		}
HXLINE( 461)		if (!(skipT)) {
HXLINE( 463)			return  ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("max",a4,0a,53,00),max)
            				->setFixed(1,HX_("uvt",f3,2e,59,00),uvt));
            		}
HXLINE( 466)		int length = null();
HXDLIN( 466)		bool fixed = null();
HXDLIN( 466)		::Array< Float > array = null();
HXDLIN( 466)		 ::openfl::_Vector::FloatVector result =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE( 468)		{
HXLINE( 468)			int _g2 = 1;
HXDLIN( 468)			int _g3 = (len + 1);
HXDLIN( 468)			while((_g2 < _g3)){
HXLINE( 468)				_g2 = (_g2 + 1);
HXDLIN( 468)				int t = (_g2 - 1);
HXLINE( 470)				bool _hx_tmp;
HXDLIN( 470)				if (skipT) {
HXLINE( 470)					_hx_tmp = (::hx::Mod(t,3) == 0);
            				}
            				else {
HXLINE( 470)					_hx_tmp = false;
            				}
HXDLIN( 470)				if (_hx_tmp) {
HXLINE( 472)					continue;
            				}
HXLINE( 475)				result->push(uvt->get((t - 1)));
            			}
            		}
HXLINE( 478)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("max",a4,0a,53,00),max)
            			->setFixed(1,HX_("uvt",f3,2e,59,00),result));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,normalizeUVT,return )

void CairoGraphics_obj::playCommands( ::openfl::display::_internal::DrawCommandBuffer commands,::hx::Null< bool >  __o_stroke){
            		bool stroke = __o_stroke.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_482_playCommands)
HXLINE( 483)		if ((commands->get_length() == 0)) {
HXLINE( 483)			return;
            		}
HXLINE( 485)		::openfl::display::_internal::CairoGraphics_obj::bounds = ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___bounds;
HXLINE( 487)		Float offsetX = ::openfl::display::_internal::CairoGraphics_obj::bounds->x;
HXLINE( 488)		Float offsetY = ::openfl::display::_internal::CairoGraphics_obj::bounds->y;
HXLINE( 490)		Float positionX = ((Float)0.0);
HXLINE( 491)		Float positionY = ((Float)0.0);
HXLINE( 493)		bool closeGap = false;
HXLINE( 494)		Float startX = ((Float)0.0);
HXLINE( 495)		Float startY = ((Float)0.0);
HXLINE( 496)		bool setStart = false;
HXLINE( 498)		::openfl::display::_internal::CairoGraphics_obj::cairo->set_fillRule(1);
HXLINE( 499)		::openfl::display::_internal::CairoGraphics_obj::cairo->set_antialias(3);
HXLINE( 501)		bool hasPath = false;
HXLINE( 503)		 ::openfl::display::_internal::DrawCommandReader data =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,commands);
HXLINE( 505)		Float x;
HXDLIN( 505)		Float y;
HXDLIN( 505)		Float width;
HXDLIN( 505)		Float height;
HXDLIN( 505)		Float kappa = ((Float).5522848);
HXDLIN( 505)		Float ox;
HXDLIN( 505)		Float oy;
HXDLIN( 505)		Float xe;
HXDLIN( 505)		Float ye;
HXDLIN( 505)		Float xm;
HXDLIN( 505)		Float ym;
HXDLIN( 505)		Float r;
HXDLIN( 505)		Float g;
HXDLIN( 505)		Float b;
HXLINE( 520)		{
HXLINE( 520)			int _g = 0;
HXDLIN( 520)			::Array< ::Dynamic> _g1 = commands->types;
HXDLIN( 520)			while((_g < _g1->length)){
HXLINE( 520)				 ::openfl::display::_internal::DrawCommandType type = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN( 520)				_g = (_g + 1);
HXLINE( 522)				switch((int)(type->_hx_getIndex())){
            					case (int)0: {
HXLINE( 700)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 700)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 700)								data1->oPos = (data1->oPos + 2);
HXDLIN( 700)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 700)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 700)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 700)								data1->iPos = (data1->iPos + 1);
HXDLIN( 700)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 700)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 700)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 700)								data1->oPos = (data1->oPos + 4);
HXDLIN( 700)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 700)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 700)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 700)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 700)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 700)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 700)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 700)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 700)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 700)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 700)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 700)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 700)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 700)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 700)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 700)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 700)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 700)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 700)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 700)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 700)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 700)								data1->fPos = (data1->fPos + 5);
HXDLIN( 700)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 700)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 700)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 700)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 700)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 700)								data1->oPos = (data1->oPos + 2);
HXDLIN( 700)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 700)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 700)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 700)								data1->oPos = (data1->oPos + 4);
HXDLIN( 700)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 700)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 700)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 700)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 700)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 700)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 700)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 700)								data1->oPos = (data1->oPos + 4);
HXDLIN( 700)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 700)								data2->iPos = (data2->iPos + 1);
HXDLIN( 700)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 700)								data3->fPos = (data3->fPos + 2);
HXDLIN( 700)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 700)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 700)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 700)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 700)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 700)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 700)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 700)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 700)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 700)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 700)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn();
HXDLIN( 700)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 700)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 701)						::openfl::display::_internal::CairoGraphics_obj::fillPattern = ::openfl::display::_internal::CairoGraphics_obj::createImagePattern(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
HXLINE( 703)						::openfl::display::_internal::CairoGraphics_obj::bitmapFill = ( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) );
HXLINE( 704)						::openfl::display::_internal::CairoGraphics_obj::bitmapRepeat = c->buffer->b->__get(c->bPos);
HXLINE( 706)						::openfl::display::_internal::CairoGraphics_obj::hasFill = true;
            					}
            					break;
            					case (int)1: {
HXLINE( 709)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 709)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 709)								data1->oPos = (data1->oPos + 2);
HXDLIN( 709)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 709)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 709)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 709)								data1->iPos = (data1->iPos + 1);
HXDLIN( 709)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 709)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 709)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 709)								data1->oPos = (data1->oPos + 4);
HXDLIN( 709)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 709)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 709)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 709)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 709)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 709)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 709)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 709)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 709)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 709)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 709)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 709)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 709)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 709)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 709)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 709)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 709)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 709)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 709)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 709)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 709)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 709)								data1->fPos = (data1->fPos + 5);
HXDLIN( 709)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 709)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 709)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 709)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 709)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 709)								data1->oPos = (data1->oPos + 2);
HXDLIN( 709)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 709)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 709)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 709)								data1->oPos = (data1->oPos + 4);
HXDLIN( 709)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 709)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 709)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 709)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 709)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 709)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 709)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 709)								data1->oPos = (data1->oPos + 4);
HXDLIN( 709)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 709)								data2->iPos = (data2->iPos + 1);
HXDLIN( 709)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 709)								data3->fPos = (data3->fPos + 2);
HXDLIN( 709)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 709)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 709)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 709)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 709)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 709)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 709)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 709)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 709)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 709)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 709)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_FILL_dyn();
HXDLIN( 709)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 709)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 710)						if ((c->buffer->f->__get(c->fPos) < ((Float)0.005))) {
HXLINE( 712)							::openfl::display::_internal::CairoGraphics_obj::hasFill = false;
            						}
            						else {
HXLINE( 716)							if (::hx::IsNotNull( ::openfl::display::_internal::CairoGraphics_obj::fillPattern )) {
HXLINE( 718)								::openfl::display::_internal::CairoGraphics_obj::fillPatternMatrix = null();
            							}
HXLINE( 721)							::openfl::display::_internal::CairoGraphics_obj::fillPattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGBA((( (Float)(::hx::UShr((c->buffer->i->__get(c->iPos) & 16711680),16)) ) / ( (Float)(255) )),(( (Float)(::hx::UShr((c->buffer->i->__get(c->iPos) & 65280),8)) ) / ( (Float)(255) )),(( (Float)((c->buffer->i->__get(c->iPos) & 255)) ) / ( (Float)(255) )),c->buffer->f->__get(c->fPos));
HXLINE( 723)							::openfl::display::_internal::CairoGraphics_obj::hasFill = true;
            						}
HXLINE( 726)						::openfl::display::_internal::CairoGraphics_obj::bitmapFill = null();
            					}
            					break;
            					case (int)2: {
HXLINE( 729)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 729)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 729)								data1->oPos = (data1->oPos + 2);
HXDLIN( 729)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 729)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 729)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 729)								data1->iPos = (data1->iPos + 1);
HXDLIN( 729)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 729)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 729)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 729)								data1->oPos = (data1->oPos + 4);
HXDLIN( 729)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 729)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 729)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 729)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 729)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 729)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 729)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 729)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 729)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 729)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 729)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 729)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 729)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 729)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 729)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 729)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 729)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 729)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 729)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 729)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 729)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 729)								data1->fPos = (data1->fPos + 5);
HXDLIN( 729)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 729)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 729)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 729)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 729)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 729)								data1->oPos = (data1->oPos + 2);
HXDLIN( 729)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 729)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 729)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 729)								data1->oPos = (data1->oPos + 4);
HXDLIN( 729)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 729)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 729)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 729)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 729)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 729)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 729)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 729)								data1->oPos = (data1->oPos + 4);
HXDLIN( 729)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 729)								data2->iPos = (data2->iPos + 1);
HXDLIN( 729)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 729)								data3->fPos = (data3->fPos + 2);
HXDLIN( 729)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 729)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 729)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 729)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 729)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 729)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 729)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 729)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 729)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 729)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 729)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_GRADIENT_FILL_dyn();
HXDLIN( 729)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 729)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 730)						if (::hx::IsNotNull( ::openfl::display::_internal::CairoGraphics_obj::fillPattern )) {
HXLINE( 732)							::openfl::display::_internal::CairoGraphics_obj::fillPatternMatrix = null();
            						}
HXLINE( 735)						::openfl::display::_internal::CairoGraphics_obj::fillPattern = ::openfl::display::_internal::CairoGraphics_obj::createGradientPattern(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
HXLINE( 738)						::openfl::display::_internal::CairoGraphics_obj::hasFill = true;
HXLINE( 739)						::openfl::display::_internal::CairoGraphics_obj::bitmapFill = null();
            					}
            					break;
            					case (int)3: {
HXLINE( 742)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 742)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 742)								data1->oPos = (data1->oPos + 2);
HXDLIN( 742)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 742)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 742)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 742)								data1->iPos = (data1->iPos + 1);
HXDLIN( 742)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 742)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 742)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 742)								data1->oPos = (data1->oPos + 4);
HXDLIN( 742)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 742)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 742)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 742)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 742)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 742)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 742)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 742)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 742)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 742)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 742)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 742)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 742)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 742)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 742)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 742)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 742)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 742)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 742)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 742)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 742)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 742)								data1->fPos = (data1->fPos + 5);
HXDLIN( 742)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 742)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 742)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 742)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 742)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 742)								data1->oPos = (data1->oPos + 2);
HXDLIN( 742)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 742)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 742)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 742)								data1->oPos = (data1->oPos + 4);
HXDLIN( 742)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 742)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 742)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 742)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 742)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 742)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 742)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 742)								data1->oPos = (data1->oPos + 4);
HXDLIN( 742)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 742)								data2->iPos = (data2->iPos + 1);
HXDLIN( 742)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 742)								data3->fPos = (data3->fPos + 2);
HXDLIN( 742)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 742)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 742)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 742)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 742)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 742)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 742)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 742)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 742)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 742)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 742)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn();
HXDLIN( 742)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 742)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 743)						 ::openfl::display::_internal::ShaderBuffer shaderBuffer = ( ( ::openfl::display::_internal::ShaderBuffer)(c->buffer->o->__get(c->oPos)) );
HXLINE( 745)						if ((shaderBuffer->inputCount > 0)) {
HXLINE( 747)							::openfl::display::_internal::CairoGraphics_obj::fillPattern = ::openfl::display::_internal::CairoGraphics_obj::createImagePattern(shaderBuffer->inputs->__get(0).StaticCast<  ::openfl::display::BitmapData >(),null(),::hx::IsNotEq( shaderBuffer->inputWrap->__get(0),0 ),::hx::IsNotEq( shaderBuffer->inputFilter->__get(0),5 ));
HXLINE( 750)							::openfl::display::_internal::CairoGraphics_obj::bitmapFill = shaderBuffer->inputs->__get(0).StaticCast<  ::openfl::display::BitmapData >();
HXLINE( 751)							::openfl::display::_internal::CairoGraphics_obj::bitmapRepeat = false;
HXLINE( 753)							::openfl::display::_internal::CairoGraphics_obj::hasFill = true;
            						}
            					}
            					break;
            					case (int)4: {
HXLINE( 525)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 525)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 525)								data1->oPos = (data1->oPos + 2);
HXDLIN( 525)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 525)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 525)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 525)								data1->iPos = (data1->iPos + 1);
HXDLIN( 525)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 525)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 525)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 525)								data1->oPos = (data1->oPos + 4);
HXDLIN( 525)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 525)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 525)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 525)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 525)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 525)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 525)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 525)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 525)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 525)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 525)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 525)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 525)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 525)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 525)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 525)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 525)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 525)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 525)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 525)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 525)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 525)								data1->fPos = (data1->fPos + 5);
HXDLIN( 525)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 525)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 525)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 525)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 525)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 525)								data1->oPos = (data1->oPos + 2);
HXDLIN( 525)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 525)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 525)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 525)								data1->oPos = (data1->oPos + 4);
HXDLIN( 525)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 525)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 525)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 525)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 525)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 525)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 525)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 525)								data1->oPos = (data1->oPos + 4);
HXDLIN( 525)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 525)								data2->iPos = (data2->iPos + 1);
HXDLIN( 525)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 525)								data3->fPos = (data3->fPos + 2);
HXDLIN( 525)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 525)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 525)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 525)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 525)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 525)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 525)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 525)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 525)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 525)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 525)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::CUBIC_CURVE_TO_dyn();
HXDLIN( 525)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 525)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 526)						hasPath = true;
HXLINE( 527)						::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo((c->buffer->f->__get(c->fPos) - offsetX),(c->buffer->f->__get((c->fPos + 1)) - offsetY),(c->buffer->f->__get((c->fPos + 2)) - offsetX),(c->buffer->f->__get((c->fPos + 3)) - offsetY),(c->buffer->f->__get((c->fPos + 4)) - offsetX),(c->buffer->f->__get((c->fPos + 5)) - offsetY));
            					}
            					break;
            					case (int)5: {
HXLINE( 537)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 537)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 537)								data1->oPos = (data1->oPos + 2);
HXDLIN( 537)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 537)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 537)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 537)								data1->iPos = (data1->iPos + 1);
HXDLIN( 537)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 537)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 537)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 537)								data1->oPos = (data1->oPos + 4);
HXDLIN( 537)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 537)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 537)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 537)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 537)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 537)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 537)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 537)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 537)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 537)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 537)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 537)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 537)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 537)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 537)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 537)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 537)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 537)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 537)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 537)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 537)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 537)								data1->fPos = (data1->fPos + 5);
HXDLIN( 537)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 537)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 537)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 537)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 537)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 537)								data1->oPos = (data1->oPos + 2);
HXDLIN( 537)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 537)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 537)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 537)								data1->oPos = (data1->oPos + 4);
HXDLIN( 537)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 537)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 537)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 537)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 537)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 537)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 537)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 537)								data1->oPos = (data1->oPos + 4);
HXDLIN( 537)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 537)								data2->iPos = (data2->iPos + 1);
HXDLIN( 537)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 537)								data3->fPos = (data3->fPos + 2);
HXDLIN( 537)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 537)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 537)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 537)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 537)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 537)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 537)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 537)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 537)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 537)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 537)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::CURVE_TO_dyn();
HXDLIN( 537)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 537)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 538)						hasPath = true;
HXLINE( 539)						::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo((c->buffer->f->__get(c->fPos) - offsetX),(c->buffer->f->__get((c->fPos + 1)) - offsetY),(c->buffer->f->__get((c->fPos + 2)) - offsetX),(c->buffer->f->__get((c->fPos + 3)) - offsetY));
            					}
            					break;
            					case (int)6: {
HXLINE( 542)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->oPos = (data1->oPos + 2);
HXDLIN( 542)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 542)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->iPos = (data1->iPos + 1);
HXDLIN( 542)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 542)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->oPos = (data1->oPos + 4);
HXDLIN( 542)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 542)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 542)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 542)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 542)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 542)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->fPos = (data1->fPos + 5);
HXDLIN( 542)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 542)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->oPos = (data1->oPos + 2);
HXDLIN( 542)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 542)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->oPos = (data1->oPos + 4);
HXDLIN( 542)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 542)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 542)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 542)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 542)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 542)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->oPos = (data1->oPos + 4);
HXDLIN( 542)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 542)								data2->iPos = (data2->iPos + 1);
HXDLIN( 542)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 542)								data3->fPos = (data3->fPos + 2);
HXDLIN( 542)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 542)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 542)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_CIRCLE_dyn();
HXDLIN( 542)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 542)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 543)						hasPath = true;
HXLINE( 544)						::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo(((c->buffer->f->__get(c->fPos) - offsetX) + c->buffer->f->__get((c->fPos + 2))),(c->buffer->f->__get((c->fPos + 1)) - offsetY));
HXLINE( 545)						::openfl::display::_internal::CairoGraphics_obj::cairo->arc((c->buffer->f->__get(c->fPos) - offsetX),(c->buffer->f->__get((c->fPos + 1)) - offsetY),c->buffer->f->__get((c->fPos + 2)),( (Float)(0) ),(::Math_obj::PI * ( (Float)(2) )));
            					}
            					break;
            					case (int)7: {
HXLINE( 553)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 553)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 553)								data1->oPos = (data1->oPos + 2);
HXDLIN( 553)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 553)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 553)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 553)								data1->iPos = (data1->iPos + 1);
HXDLIN( 553)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 553)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 553)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 553)								data1->oPos = (data1->oPos + 4);
HXDLIN( 553)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 553)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 553)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 553)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 553)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 553)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 553)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 553)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 553)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 553)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 553)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 553)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 553)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 553)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 553)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 553)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 553)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 553)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 553)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 553)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 553)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 553)								data1->fPos = (data1->fPos + 5);
HXDLIN( 553)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 553)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 553)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 553)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 553)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 553)								data1->oPos = (data1->oPos + 2);
HXDLIN( 553)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 553)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 553)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 553)								data1->oPos = (data1->oPos + 4);
HXDLIN( 553)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 553)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 553)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 553)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 553)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 553)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 553)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 553)								data1->oPos = (data1->oPos + 4);
HXDLIN( 553)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 553)								data2->iPos = (data2->iPos + 1);
HXDLIN( 553)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 553)								data3->fPos = (data3->fPos + 2);
HXDLIN( 553)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 553)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 553)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 553)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 553)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 553)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 553)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 553)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 553)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 553)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 553)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ELLIPSE_dyn();
HXDLIN( 553)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 553)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 554)						hasPath = true;
HXLINE( 556)						x = c->buffer->f->__get(c->fPos);
HXLINE( 557)						y = c->buffer->f->__get((c->fPos + 1));
HXLINE( 558)						width = c->buffer->f->__get((c->fPos + 2));
HXLINE( 559)						height = c->buffer->f->__get((c->fPos + 3));
HXLINE( 561)						x = (x - offsetX);
HXLINE( 562)						y = (y - offsetY);
HXLINE( 564)						ox = ((width / ( (Float)(2) )) * kappa);
HXLINE( 565)						oy = ((height / ( (Float)(2) )) * kappa);
HXLINE( 566)						xe = (x + width);
HXLINE( 567)						ye = (y + height);
HXLINE( 568)						xm = (x + (width / ( (Float)(2) )));
HXLINE( 569)						ym = (y + (height / ( (Float)(2) )));
HXLINE( 571)						::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo(x,ym);
HXLINE( 572)						::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo(x,(ym - oy),(xm - ox),y,xm,y);
HXLINE( 573)						::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo((xm + ox),y,xe,(ym - oy),xe,ym);
HXLINE( 574)						::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo(xe,(ym + oy),(xm + ox),ye,xm,ye);
HXLINE( 575)						::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo((xm - ox),ye,x,(ym + oy),x,ym);
            					}
            					break;
            					case (int)8: {
HXLINE( 757)						int cacheExtend = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::get_extend(::openfl::display::_internal::CairoGraphics_obj::fillPattern);
HXLINE( 758)						::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_extend(::openfl::display::_internal::CairoGraphics_obj::fillPattern,0);
HXLINE( 760)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 760)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 760)								data1->oPos = (data1->oPos + 2);
HXDLIN( 760)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 760)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 760)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 760)								data1->iPos = (data1->iPos + 1);
HXDLIN( 760)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 760)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 760)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 760)								data1->oPos = (data1->oPos + 4);
HXDLIN( 760)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 760)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 760)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 760)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 760)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 760)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 760)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 760)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 760)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 760)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 760)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 760)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 760)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 760)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 760)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 760)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 760)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 760)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 760)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 760)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 760)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 760)								data1->fPos = (data1->fPos + 5);
HXDLIN( 760)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 760)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 760)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 760)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 760)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 760)								data1->oPos = (data1->oPos + 2);
HXDLIN( 760)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 760)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 760)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 760)								data1->oPos = (data1->oPos + 4);
HXDLIN( 760)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 760)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 760)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 760)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 760)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 760)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 760)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 760)								data1->oPos = (data1->oPos + 4);
HXDLIN( 760)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 760)								data2->iPos = (data2->iPos + 1);
HXDLIN( 760)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 760)								data3->fPos = (data3->fPos + 2);
HXDLIN( 760)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 760)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 760)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 760)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 760)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 760)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 760)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 760)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 760)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 760)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 760)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_QUADS_dyn();
HXDLIN( 760)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 760)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 761)						 ::openfl::_Vector::FloatVector rects = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) );
HXLINE( 762)						 ::openfl::_Vector::IntVector indices = ( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) );
HXLINE( 763)						 ::openfl::_Vector::FloatVector transforms = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) );
HXLINE( 765)						bool hasIndices = ::hx::IsNotNull( indices );
HXLINE( 766)						bool transformABCD = false;
HXDLIN( 766)						bool transformXY = false;
HXLINE( 768)						int length;
HXDLIN( 768)						if (hasIndices) {
HXLINE( 768)							length = indices->get_length();
            						}
            						else {
HXLINE( 768)							length = ::Math_obj::floor((( (Float)(rects->get_length()) ) / ( (Float)(4) )));
            						}
HXLINE( 769)						if ((length == 0)) {
HXLINE( 769)							return;
            						}
HXLINE( 771)						if (::hx::IsNotNull( transforms )) {
HXLINE( 773)							if ((transforms->get_length() >= (length * 6))) {
HXLINE( 775)								transformABCD = true;
HXLINE( 776)								transformXY = true;
            							}
            							else {
HXLINE( 778)								if ((transforms->get_length() >= (length * 4))) {
HXLINE( 780)									transformABCD = true;
            								}
            								else {
HXLINE( 782)									if ((transforms->get_length() >= (length * 2))) {
HXLINE( 784)										transformXY = true;
            									}
            								}
            							}
            						}
HXLINE( 788)						 ::openfl::geom::Rectangle tileRect = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 789)						 ::openfl::geom::Matrix tileTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 791)						 ::openfl::geom::Rectangle sourceRect;
HXDLIN( 791)						if (::hx::IsNotNull( ::openfl::display::_internal::CairoGraphics_obj::bitmapFill )) {
HXLINE( 791)							sourceRect = ::openfl::display::_internal::CairoGraphics_obj::bitmapFill->rect;
            						}
            						else {
HXLINE( 791)							sourceRect = null();
            						}
HXLINE( 792)						::openfl::display::_internal::CairoGraphics_obj::tempMatrix3->identity();
HXLINE( 794)						 ::openfl::geom::Matrix transform = ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___renderTransform;
HXLINE( 796)						Float alpha = ::openfl::display::_internal::CairoGraphics_obj::worldAlpha;
HXLINE( 798)						int ri;
HXDLIN( 798)						int ti;
HXLINE( 800)						{
HXLINE( 800)							int _g = 0;
HXDLIN( 800)							int _g1 = length;
HXDLIN( 800)							while((_g < _g1)){
HXLINE( 800)								_g = (_g + 1);
HXDLIN( 800)								int i = (_g - 1);
HXLINE( 802)								if (hasIndices) {
HXLINE( 802)									ri = (indices->get(i) * 4);
            								}
            								else {
HXLINE( 802)									ri = (i * 4);
            								}
HXLINE( 803)								if ((ri < 0)) {
HXLINE( 803)									continue;
            								}
HXLINE( 804)								Float _hx_tmp = rects->get(ri);
HXDLIN( 804)								Float _hx_tmp1 = rects->get((ri + 1));
HXDLIN( 804)								Float _hx_tmp2 = rects->get((ri + 2));
HXDLIN( 804)								tileRect->setTo(_hx_tmp,_hx_tmp1,_hx_tmp2,rects->get((ri + 3)));
HXLINE( 806)								bool _hx_tmp3;
HXDLIN( 806)								if (!((tileRect->width <= 0))) {
HXLINE( 806)									_hx_tmp3 = (tileRect->height <= 0);
            								}
            								else {
HXLINE( 806)									_hx_tmp3 = true;
            								}
HXDLIN( 806)								if (_hx_tmp3) {
HXLINE( 808)									continue;
            								}
HXLINE( 811)								bool _hx_tmp4;
HXDLIN( 811)								if (transformABCD) {
HXLINE( 811)									_hx_tmp4 = transformXY;
            								}
            								else {
HXLINE( 811)									_hx_tmp4 = false;
            								}
HXDLIN( 811)								if (_hx_tmp4) {
HXLINE( 813)									ti = (i * 6);
HXLINE( 814)									Float _hx_tmp = transforms->get(ti);
HXDLIN( 814)									Float _hx_tmp1 = transforms->get((ti + 1));
HXDLIN( 814)									Float _hx_tmp2 = transforms->get((ti + 2));
HXDLIN( 814)									Float _hx_tmp3 = transforms->get((ti + 3));
HXDLIN( 814)									Float _hx_tmp4 = transforms->get((ti + 4));
HXDLIN( 814)									tileTransform->setTo(_hx_tmp,_hx_tmp1,_hx_tmp2,_hx_tmp3,_hx_tmp4,transforms->get((ti + 5)));
            								}
            								else {
HXLINE( 817)									if (transformABCD) {
HXLINE( 819)										ti = (i * 4);
HXLINE( 820)										Float _hx_tmp = transforms->get(ti);
HXDLIN( 820)										Float _hx_tmp1 = transforms->get((ti + 1));
HXDLIN( 820)										Float _hx_tmp2 = transforms->get((ti + 2));
HXDLIN( 820)										tileTransform->setTo(_hx_tmp,_hx_tmp1,_hx_tmp2,transforms->get((ti + 3)),tileRect->x,tileRect->y);
            									}
            									else {
HXLINE( 822)										if (transformXY) {
HXLINE( 824)											ti = (i * 2);
HXLINE( 825)											tileTransform->tx = transforms->get(ti);
HXLINE( 826)											tileTransform->ty = transforms->get((ti + 1));
            										}
            										else {
HXLINE( 830)											tileTransform->tx = tileRect->x;
HXLINE( 831)											tileTransform->ty = tileRect->y;
            										}
            									}
            								}
HXLINE( 834)								 ::openfl::geom::Matrix tileTransform1 = tileTransform;
HXDLIN( 834)								tileTransform1->tx = (tileTransform1->tx + (positionX - offsetX));
HXLINE( 835)								 ::openfl::geom::Matrix tileTransform2 = tileTransform;
HXDLIN( 835)								tileTransform2->ty = (tileTransform2->ty + (positionY - offsetY));
HXLINE( 836)								tileTransform->concat(transform);
HXLINE( 845)								 ::lime::graphics::cairo::Cairo _hx_tmp5 = ::openfl::display::_internal::CairoGraphics_obj::cairo;
HXDLIN( 845)								_hx_tmp5->set_matrix(tileTransform->_hx___toMatrix3());
HXLINE( 847)								::openfl::display::_internal::CairoGraphics_obj::tempMatrix3->tx = tileRect->x;
HXLINE( 848)								::openfl::display::_internal::CairoGraphics_obj::tempMatrix3->ty = tileRect->y;
HXLINE( 849)								::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(::openfl::display::_internal::CairoGraphics_obj::fillPattern,::openfl::display::_internal::CairoGraphics_obj::tempMatrix3);
HXLINE( 850)								::openfl::display::_internal::CairoGraphics_obj::cairo->set_source(::openfl::display::_internal::CairoGraphics_obj::fillPattern);
HXLINE( 852)								if (::hx::IsInstanceNotEq( tileRect,sourceRect )) {
HXLINE( 854)									::openfl::display::_internal::CairoGraphics_obj::cairo->save();
HXLINE( 856)									::openfl::display::_internal::CairoGraphics_obj::cairo->newPath();
HXLINE( 857)									::openfl::display::_internal::CairoGraphics_obj::cairo->rectangle(( (Float)(0) ),( (Float)(0) ),tileRect->width,tileRect->height);
HXLINE( 858)									::openfl::display::_internal::CairoGraphics_obj::cairo->clip();
            								}
HXLINE( 861)								if (!(::openfl::display::_internal::CairoGraphics_obj::hitTesting)) {
HXLINE( 863)									if ((alpha == 1)) {
HXLINE( 865)										::openfl::display::_internal::CairoGraphics_obj::cairo->paint();
            									}
            									else {
HXLINE( 869)										::openfl::display::_internal::CairoGraphics_obj::cairo->paintWithAlpha(alpha);
            									}
            								}
HXLINE( 873)								if (::hx::IsInstanceNotEq( tileRect,sourceRect )) {
HXLINE( 875)									::openfl::display::_internal::CairoGraphics_obj::cairo->restore();
            								}
            							}
            						}
HXLINE( 879)						::openfl::geom::Rectangle_obj::_hx___pool->release(tileRect);
HXLINE( 880)						::openfl::geom::Matrix_obj::_hx___pool->release(tileTransform);
HXLINE( 882)						 ::lime::graphics::cairo::Cairo _hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::cairo;
HXDLIN( 882)						_hx_tmp->set_matrix(::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___renderTransform->_hx___toMatrix3());
HXLINE( 883)						::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_extend(::openfl::display::_internal::CairoGraphics_obj::fillPattern,cacheExtend);
            					}
            					break;
            					case (int)9: {
HXLINE( 548)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 548)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 548)								data1->oPos = (data1->oPos + 2);
HXDLIN( 548)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 548)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 548)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 548)								data1->iPos = (data1->iPos + 1);
HXDLIN( 548)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 548)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 548)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 548)								data1->oPos = (data1->oPos + 4);
HXDLIN( 548)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 548)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 548)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 548)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 548)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 548)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 548)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 548)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 548)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 548)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 548)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 548)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 548)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 548)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 548)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 548)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 548)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 548)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 548)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 548)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 548)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 548)								data1->fPos = (data1->fPos + 5);
HXDLIN( 548)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 548)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 548)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 548)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 548)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 548)								data1->oPos = (data1->oPos + 2);
HXDLIN( 548)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 548)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 548)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 548)								data1->oPos = (data1->oPos + 4);
HXDLIN( 548)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 548)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 548)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 548)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 548)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 548)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 548)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 548)								data1->oPos = (data1->oPos + 4);
HXDLIN( 548)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 548)								data2->iPos = (data2->iPos + 1);
HXDLIN( 548)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 548)								data3->fPos = (data3->fPos + 2);
HXDLIN( 548)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 548)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 548)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 548)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 548)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 548)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 548)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 548)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 548)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 548)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 548)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_RECT_dyn();
HXDLIN( 548)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 548)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 549)						hasPath = true;
HXLINE( 550)						::openfl::display::_internal::CairoGraphics_obj::cairo->rectangle((c->buffer->f->__get(c->fPos) - offsetX),(c->buffer->f->__get((c->fPos + 1)) - offsetY),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            					}
            					break;
            					case (int)10: {
HXLINE( 578)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 578)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)								data1->oPos = (data1->oPos + 2);
HXDLIN( 578)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 578)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 578)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)								data1->iPos = (data1->iPos + 1);
HXDLIN( 578)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 578)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 578)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)								data1->oPos = (data1->oPos + 4);
HXDLIN( 578)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 578)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 578)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 578)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 578)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 578)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 578)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 578)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 578)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 578)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 578)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 578)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 578)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 578)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)								data1->fPos = (data1->fPos + 5);
HXDLIN( 578)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 578)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 578)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 578)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)								data1->oPos = (data1->oPos + 2);
HXDLIN( 578)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 578)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 578)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)								data1->oPos = (data1->oPos + 4);
HXDLIN( 578)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 578)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 578)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 578)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 578)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 578)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 578)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)								data1->oPos = (data1->oPos + 4);
HXDLIN( 578)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 578)								data2->iPos = (data2->iPos + 1);
HXDLIN( 578)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 578)								data3->fPos = (data3->fPos + 2);
HXDLIN( 578)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 578)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 578)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 578)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 578)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 578)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 578)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 578)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ROUND_RECT_dyn();
HXDLIN( 578)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 578)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 579)						hasPath = true;
HXLINE( 580)						::openfl::display::_internal::CairoGraphics_obj::drawRoundRect((c->buffer->f->__get(c->fPos) - offsetX),(c->buffer->f->__get((c->fPos + 1)) - offsetY),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->o->__get(c->oPos));
            					}
            					break;
            					case (int)12: {
HXLINE( 886)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 886)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 886)								data1->oPos = (data1->oPos + 2);
HXDLIN( 886)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 886)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 886)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 886)								data1->iPos = (data1->iPos + 1);
HXDLIN( 886)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 886)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 886)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 886)								data1->oPos = (data1->oPos + 4);
HXDLIN( 886)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 886)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 886)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 886)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 886)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 886)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 886)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 886)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 886)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 886)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 886)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 886)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 886)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 886)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 886)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 886)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 886)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 886)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 886)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 886)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 886)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 886)								data1->fPos = (data1->fPos + 5);
HXDLIN( 886)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 886)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 886)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 886)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 886)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 886)								data1->oPos = (data1->oPos + 2);
HXDLIN( 886)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 886)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 886)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 886)								data1->oPos = (data1->oPos + 4);
HXDLIN( 886)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 886)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 886)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 886)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 886)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 886)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 886)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 886)								data1->oPos = (data1->oPos + 4);
HXDLIN( 886)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 886)								data2->iPos = (data2->iPos + 1);
HXDLIN( 886)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 886)								data3->fPos = (data3->fPos + 2);
HXDLIN( 886)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 886)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 886)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 886)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 886)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 886)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 886)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 886)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 886)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 886)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 886)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_TRIANGLES_dyn();
HXDLIN( 886)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 886)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 887)						 ::openfl::_Vector::FloatVector v = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) );
HXLINE( 888)						 ::openfl::_Vector::IntVector ind = ( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) );
HXLINE( 889)						 ::openfl::_Vector::FloatVector uvt = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) );
HXLINE( 890)						bool colorFill = ::hx::IsNull( ::openfl::display::_internal::CairoGraphics_obj::bitmapFill );
HXLINE( 892)						bool _hx_tmp;
HXDLIN( 892)						if (colorFill) {
HXLINE( 892)							_hx_tmp = ::hx::IsNotNull( uvt );
            						}
            						else {
HXLINE( 892)							_hx_tmp = false;
            						}
HXDLIN( 892)						if (_hx_tmp) {
HXLINE( 894)							goto _hx_goto_14;
            						}
HXLINE( 897)						int width = 0;
HXLINE( 898)						int height = 0;
HXLINE( 899)						 ::lime::math::Matrix3 currentMatrix = ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___renderTransform->_hx___toMatrix3();
HXLINE( 901)						if (!(colorFill)) {
HXLINE( 905)							if (::hx::IsNull( uvt )) {
HXLINE( 907)								int length = null();
HXDLIN( 907)								bool fixed = null();
HXDLIN( 907)								::Array< Float > array = null();
HXDLIN( 907)								uvt =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE( 909)								{
HXLINE( 909)									int _g = 0;
HXDLIN( 909)									int _g1 = ::Std_obj::_hx_int((( (Float)(v->get_length()) ) / ( (Float)(2) )));
HXDLIN( 909)									while((_g < _g1)){
HXLINE( 909)										_g = (_g + 1);
HXDLIN( 909)										int i = (_g - 1);
HXLINE( 911)										{
HXLINE( 911)											Float value = v->get((i * 2));
HXDLIN( 911)											uvt->push((value - (offsetX / ( (Float)(::openfl::display::_internal::CairoGraphics_obj::bitmapFill->width) ))));
            										}
HXLINE( 912)										{
HXLINE( 912)											Float value1 = v->get(((i * 2) + 1));
HXDLIN( 912)											uvt->push((value1 - (offsetY / ( (Float)(::openfl::display::_internal::CairoGraphics_obj::bitmapFill->height) ))));
            										}
            									}
            								}
            							}
HXLINE( 916)							int skipT = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) )->get_length();
HXDLIN( 916)							bool skipT1 = (skipT != v->get_length());
HXLINE( 917)							 ::Dynamic normalizedUVT = ::openfl::display::_internal::CairoGraphics_obj::normalizeUVT(uvt,skipT1);
HXLINE( 918)							Float maxUVT = ( (Float)(normalizedUVT->__Field(HX_("max",a4,0a,53,00),::hx::paccDynamic)) );
HXLINE( 919)							uvt = ( ( ::openfl::_Vector::FloatVector)(normalizedUVT->__Field(HX_("uvt",f3,2e,59,00),::hx::paccDynamic)) );
HXLINE( 921)							if ((maxUVT > 1)) {
HXLINE( 923)								width = ::Std_obj::_hx_int(::openfl::display::_internal::CairoGraphics_obj::bounds->width);
HXLINE( 924)								height = ::Std_obj::_hx_int(::openfl::display::_internal::CairoGraphics_obj::bounds->height);
            							}
            							else {
HXLINE( 928)								width = ::openfl::display::_internal::CairoGraphics_obj::bitmapFill->width;
HXLINE( 929)								height = ::openfl::display::_internal::CairoGraphics_obj::bitmapFill->height;
            							}
            						}
HXLINE( 933)						int i = 0;
HXLINE( 934)						int l = ind->get_length();
HXLINE( 936)						int a_;
HXDLIN( 936)						int b_;
HXDLIN( 936)						int c_;
HXLINE( 937)						int iax;
HXDLIN( 937)						int iay;
HXDLIN( 937)						int ibx;
HXDLIN( 937)						int iby;
HXDLIN( 937)						int icx;
HXDLIN( 937)						int icy;
HXLINE( 938)						Float x1;
HXDLIN( 938)						Float y1;
HXDLIN( 938)						Float x2;
HXDLIN( 938)						Float y2;
HXDLIN( 938)						Float x3;
HXDLIN( 938)						Float y3;
HXLINE( 939)						Float uvx1;
HXDLIN( 939)						Float uvy1;
HXDLIN( 939)						Float uvx2;
HXDLIN( 939)						Float uvy2;
HXDLIN( 939)						Float uvx3;
HXDLIN( 939)						Float uvy3;
HXLINE( 940)						Float denom;
HXLINE( 941)						Float t1;
HXDLIN( 941)						Float t2;
HXDLIN( 941)						Float t3;
HXDLIN( 941)						Float t4;
HXLINE( 942)						Float dx;
HXDLIN( 942)						Float dy;
HXLINE( 944)						::openfl::display::_internal::CairoGraphics_obj::cairo->set_antialias(1);
HXLINE( 946)						while((i < l)){
HXLINE( 948)							a_ = i;
HXLINE( 949)							b_ = (i + 1);
HXLINE( 950)							c_ = (i + 2);
HXLINE( 952)							iax = (ind->get(a_) * 2);
HXLINE( 953)							iay = ((ind->get(a_) * 2) + 1);
HXLINE( 954)							ibx = (ind->get(b_) * 2);
HXLINE( 955)							iby = ((ind->get(b_) * 2) + 1);
HXLINE( 956)							icx = (ind->get(c_) * 2);
HXLINE( 957)							icy = ((ind->get(c_) * 2) + 1);
HXLINE( 959)							x1 = (v->get(iax) - offsetX);
HXLINE( 960)							y1 = (v->get(iay) - offsetY);
HXLINE( 961)							x2 = (v->get(ibx) - offsetX);
HXLINE( 962)							y2 = (v->get(iby) - offsetY);
HXLINE( 963)							x3 = (v->get(icx) - offsetX);
HXLINE( 964)							y3 = (v->get(icy) - offsetY);
HXLINE( 966)							 ::Dynamic _hx_switch_0 = c->buffer->o->__get((c->oPos + 3));
            							if (  (_hx_switch_0==0) ){
HXLINE( 976)								if (((((x2 - x1) * (y3 - y1)) - ((y2 - y1) * (x3 - x1))) < 0)) {
HXLINE( 978)									i = (i + 3);
HXLINE( 979)									continue;
            								}
HXLINE( 976)								goto _hx_goto_18;
            							}
            							if (  (_hx_switch_0==2) ){
HXLINE( 969)								if (!(((((x2 - x1) * (y3 - y1)) - ((y2 - y1) * (x3 - x1))) < 0))) {
HXLINE( 971)									i = (i + 3);
HXLINE( 972)									continue;
            								}
HXLINE( 969)								goto _hx_goto_18;
            							}
            							/* default */{
            							}
            							_hx_goto_18:;
HXLINE( 985)							if (colorFill) {
HXLINE( 987)								::openfl::display::_internal::CairoGraphics_obj::cairo->newPath();
HXLINE( 988)								::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo(x1,y1);
HXLINE( 989)								::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo(x2,y2);
HXLINE( 990)								::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo(x3,y3);
HXLINE( 991)								::openfl::display::_internal::CairoGraphics_obj::cairo->closePath();
HXLINE( 992)								::openfl::display::_internal::CairoGraphics_obj::cairo->set_source(::openfl::display::_internal::CairoGraphics_obj::fillPattern);
HXLINE( 993)								if (!(::openfl::display::_internal::CairoGraphics_obj::hitTesting)) {
HXLINE( 993)									::openfl::display::_internal::CairoGraphics_obj::cairo->fillPreserve();
            								}
HXLINE( 994)								i = (i + 3);
HXLINE( 995)								continue;
            							}
HXLINE( 998)							 ::lime::graphics::cairo::Cairo _hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::cairo;
HXDLIN( 998)							_hx_tmp->set_matrix(::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___renderTransform->_hx___toMatrix3());
HXLINE(1002)							uvx1 = (uvt->get(iax) * ( (Float)(width) ));
HXLINE(1003)							uvx2 = (uvt->get(ibx) * ( (Float)(width) ));
HXLINE(1004)							uvx3 = (uvt->get(icx) * ( (Float)(width) ));
HXLINE(1005)							uvy1 = (uvt->get(iay) * ( (Float)(height) ));
HXLINE(1006)							uvy2 = (uvt->get(iby) * ( (Float)(height) ));
HXLINE(1007)							uvy3 = (uvt->get(icy) * ( (Float)(height) ));
HXLINE(1009)							denom = ((((uvx1 * (uvy3 - uvy2)) - (uvx2 * uvy3)) + (uvx3 * uvy2)) + ((uvx2 - uvx3) * uvy1));
HXLINE(1011)							if ((denom == 0)) {
HXLINE(1013)								i = (i + 3);
HXLINE(1014)								continue;
            							}
HXLINE(1017)							::openfl::display::_internal::CairoGraphics_obj::cairo->newPath();
HXLINE(1018)							::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo(x1,y1);
HXLINE(1019)							::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo(x2,y2);
HXLINE(1020)							::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo(x3,y3);
HXLINE(1021)							::openfl::display::_internal::CairoGraphics_obj::cairo->closePath();
HXLINE(1024)							x1 = (x1 * currentMatrix->a);
HXLINE(1025)							x2 = (x2 * currentMatrix->a);
HXLINE(1026)							x3 = (x3 * currentMatrix->a);
HXLINE(1027)							y1 = (y1 * currentMatrix->d);
HXLINE(1028)							y2 = (y2 * currentMatrix->d);
HXLINE(1029)							y3 = (y3 * currentMatrix->d);
HXLINE(1031)							t1 = (-(((((uvy1 * (x3 - x2)) - (uvy2 * x3)) + (uvy3 * x2)) + ((uvy2 - uvy3) * x1))) / denom);
HXLINE(1032)							t2 = (((((uvy2 * y3) + (uvy1 * (y2 - y3))) - (uvy3 * y2)) + ((uvy3 - uvy2) * y1)) / denom);
HXLINE(1033)							t3 = (((((uvx1 * (x3 - x2)) - (uvx2 * x3)) + (uvx3 * x2)) + ((uvx2 - uvx3) * x1)) / denom);
HXLINE(1034)							t4 = (-(((((uvx2 * y3) + (uvx1 * (y2 - y3))) - (uvx3 * y2)) + ((uvx3 - uvx2) * y1))) / denom);
HXLINE(1035)							dx = ((((uvx1 * ((uvy3 * x2) - (uvy2 * x3))) + (uvy1 * ((uvx2 * x3) - (uvx3 * x2)))) + (((uvx3 * uvy2) - (uvx2 * uvy3)) * x1)) / denom);
HXLINE(1036)							dy = ((((uvx1 * ((uvy3 * y2) - (uvy2 * y3))) + (uvy1 * ((uvx2 * y3) - (uvx3 * y2)))) + (((uvx3 * uvy2) - (uvx2 * uvy3)) * y1)) / denom);
HXLINE(1038)							{
HXLINE(1038)								 ::lime::math::Matrix3 _this = ::openfl::display::_internal::CairoGraphics_obj::tempMatrix3;
HXDLIN(1038)								_this->a = t1;
HXDLIN(1038)								_this->b = t2;
HXDLIN(1038)								_this->c = t3;
HXDLIN(1038)								_this->d = t4;
HXDLIN(1038)								_this->tx = dx;
HXDLIN(1038)								_this->ty = dy;
            							}
HXLINE(1039)							::openfl::display::_internal::CairoGraphics_obj::cairo->set_matrix(::openfl::display::_internal::CairoGraphics_obj::tempMatrix3);
HXLINE(1040)							::openfl::display::_internal::CairoGraphics_obj::cairo->set_source(::openfl::display::_internal::CairoGraphics_obj::fillPattern);
HXLINE(1041)							if (!(::openfl::display::_internal::CairoGraphics_obj::hitTesting)) {
HXLINE(1041)								::openfl::display::_internal::CairoGraphics_obj::cairo->fill();
            							}
HXLINE(1043)							i = (i + 3);
            						}
HXLINE(1046)						 ::lime::graphics::cairo::Cairo _hx_tmp1 = ::openfl::display::_internal::CairoGraphics_obj::cairo;
HXDLIN(1046)						_hx_tmp1->set_matrix(::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___renderTransform->_hx___toMatrix3());
            					}
            					break;
            					case (int)14: {
HXLINE( 688)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 688)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 688)								data1->oPos = (data1->oPos + 2);
HXDLIN( 688)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 688)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 688)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 688)								data1->iPos = (data1->iPos + 1);
HXDLIN( 688)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 688)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 688)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 688)								data1->oPos = (data1->oPos + 4);
HXDLIN( 688)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 688)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 688)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 688)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 688)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 688)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 688)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 688)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 688)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 688)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 688)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 688)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 688)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 688)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 688)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 688)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 688)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 688)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 688)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 688)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 688)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 688)								data1->fPos = (data1->fPos + 5);
HXDLIN( 688)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 688)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 688)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 688)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 688)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 688)								data1->oPos = (data1->oPos + 2);
HXDLIN( 688)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 688)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 688)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 688)								data1->oPos = (data1->oPos + 4);
HXDLIN( 688)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 688)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 688)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 688)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 688)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 688)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 688)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 688)								data1->oPos = (data1->oPos + 4);
HXDLIN( 688)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 688)								data2->iPos = (data2->iPos + 1);
HXDLIN( 688)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 688)								data3->fPos = (data3->fPos + 2);
HXDLIN( 688)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 688)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 688)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 688)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 688)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 688)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 688)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 688)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 688)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 688)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 688)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_BITMAP_STYLE_dyn();
HXDLIN( 688)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 688)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 689)						bool _hx_tmp;
HXDLIN( 689)						if (stroke) {
HXLINE( 689)							_hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::hasStroke;
            						}
            						else {
HXLINE( 689)							_hx_tmp = false;
            						}
HXDLIN( 689)						if (_hx_tmp) {
HXLINE( 691)							::openfl::display::_internal::CairoGraphics_obj::closePath(true);
            						}
HXLINE( 694)						::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo((positionX - offsetX),(positionY - offsetY));
HXLINE( 695)						::openfl::display::_internal::CairoGraphics_obj::strokePattern = ::openfl::display::_internal::CairoGraphics_obj::createImagePattern(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
HXLINE( 697)						::openfl::display::_internal::CairoGraphics_obj::hasStroke = true;
            					}
            					break;
            					case (int)15: {
HXLINE( 675)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 675)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 675)								data1->oPos = (data1->oPos + 2);
HXDLIN( 675)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 675)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 675)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 675)								data1->iPos = (data1->iPos + 1);
HXDLIN( 675)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 675)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 675)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 675)								data1->oPos = (data1->oPos + 4);
HXDLIN( 675)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 675)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 675)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 675)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 675)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 675)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 675)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 675)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 675)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 675)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 675)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 675)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 675)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 675)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 675)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 675)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 675)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 675)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 675)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 675)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 675)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 675)								data1->fPos = (data1->fPos + 5);
HXDLIN( 675)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 675)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 675)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 675)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 675)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 675)								data1->oPos = (data1->oPos + 2);
HXDLIN( 675)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 675)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 675)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 675)								data1->oPos = (data1->oPos + 4);
HXDLIN( 675)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 675)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 675)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 675)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 675)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 675)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 675)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 675)								data1->oPos = (data1->oPos + 4);
HXDLIN( 675)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 675)								data2->iPos = (data2->iPos + 1);
HXDLIN( 675)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 675)								data3->fPos = (data3->fPos + 2);
HXDLIN( 675)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 675)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 675)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 675)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 675)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 675)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 675)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 675)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 675)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 675)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 675)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_GRADIENT_STYLE_dyn();
HXDLIN( 675)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 675)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 676)						bool _hx_tmp;
HXDLIN( 676)						if (stroke) {
HXLINE( 676)							_hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::hasStroke;
            						}
            						else {
HXLINE( 676)							_hx_tmp = false;
            						}
HXDLIN( 676)						if (_hx_tmp) {
HXLINE( 678)							::openfl::display::_internal::CairoGraphics_obj::closePath(true);
            						}
HXLINE( 681)						::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo((positionX - offsetX),(positionY - offsetY));
HXLINE( 682)						::openfl::display::_internal::CairoGraphics_obj::strokePattern = ::openfl::display::_internal::CairoGraphics_obj::createGradientPattern(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
HXLINE( 685)						::openfl::display::_internal::CairoGraphics_obj::hasStroke = true;
            					}
            					break;
            					case (int)16: {
HXLINE( 612)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 612)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 612)								data1->oPos = (data1->oPos + 2);
HXDLIN( 612)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 612)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 612)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 612)								data1->iPos = (data1->iPos + 1);
HXDLIN( 612)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 612)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 612)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 612)								data1->oPos = (data1->oPos + 4);
HXDLIN( 612)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 612)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 612)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 612)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 612)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 612)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 612)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 612)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 612)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 612)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 612)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 612)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 612)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 612)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 612)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 612)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 612)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 612)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 612)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 612)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 612)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 612)								data1->fPos = (data1->fPos + 5);
HXDLIN( 612)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 612)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 612)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 612)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 612)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 612)								data1->oPos = (data1->oPos + 2);
HXDLIN( 612)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 612)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 612)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 612)								data1->oPos = (data1->oPos + 4);
HXDLIN( 612)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 612)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 612)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 612)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 612)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 612)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 612)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 612)								data1->oPos = (data1->oPos + 4);
HXDLIN( 612)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 612)								data2->iPos = (data2->iPos + 1);
HXDLIN( 612)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 612)								data3->fPos = (data3->fPos + 2);
HXDLIN( 612)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 612)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 612)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 612)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 612)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 612)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 612)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 612)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 612)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 612)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 612)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_STYLE_dyn();
HXDLIN( 612)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 612)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 613)						bool _hx_tmp;
HXDLIN( 613)						if (stroke) {
HXLINE( 613)							_hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::hasStroke;
            						}
            						else {
HXLINE( 613)							_hx_tmp = false;
            						}
HXDLIN( 613)						if (_hx_tmp) {
HXLINE( 615)							::openfl::display::_internal::CairoGraphics_obj::closePath(true);
            						}
HXLINE( 618)						::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo((positionX - offsetX),(positionY - offsetY));
HXLINE( 620)						if (::hx::IsNull( c->buffer->o->__get(c->oPos) )) {
HXLINE( 622)							::openfl::display::_internal::CairoGraphics_obj::hasStroke = false;
            						}
            						else {
HXLINE( 626)							::openfl::display::_internal::CairoGraphics_obj::hasStroke = true;
HXLINE( 628)							Float _hx_tmp;
HXDLIN( 628)							if (::hx::IsGreater( c->buffer->o->__get(c->oPos),0 )) {
HXLINE( 628)								_hx_tmp = ( (Float)(c->buffer->o->__get(c->oPos)) );
            							}
            							else {
HXLINE( 628)								_hx_tmp = ( (Float)(1) );
            							}
HXDLIN( 628)							::openfl::display::_internal::CairoGraphics_obj::cairo->set_lineWidth(_hx_tmp);
HXLINE( 630)							if (::hx::IsNull( c->buffer->o->__get((c->oPos + 3)) )) {
HXLINE( 632)								::openfl::display::_internal::CairoGraphics_obj::cairo->set_lineJoin(1);
            							}
            							else {
HXLINE( 636)								int _hx_tmp;
HXDLIN( 636)								 ::Dynamic _hx_switch_1 = c->buffer->o->__get((c->oPos + 3));
            								if (  (_hx_switch_1==0) ){
HXLINE( 636)									_hx_tmp = 2;
HXDLIN( 636)									goto _hx_goto_19;
            								}
            								if (  (_hx_switch_1==1) ){
HXLINE( 636)									_hx_tmp = 0;
HXDLIN( 636)									goto _hx_goto_19;
            								}
            								/* default */{
HXLINE( 636)									_hx_tmp = 1;
            								}
            								_hx_goto_19:;
HXDLIN( 636)								::openfl::display::_internal::CairoGraphics_obj::cairo->set_lineJoin(_hx_tmp);
            							}
HXLINE( 644)							if (::hx::IsNull( c->buffer->o->__get((c->oPos + 2)) )) {
HXLINE( 646)								::openfl::display::_internal::CairoGraphics_obj::cairo->set_lineCap(1);
            							}
            							else {
HXLINE( 650)								int _hx_tmp;
HXDLIN( 650)								 ::Dynamic _hx_switch_2 = c->buffer->o->__get((c->oPos + 2));
            								if (  (_hx_switch_2==0) ){
HXLINE( 650)									_hx_tmp = 0;
HXDLIN( 650)									goto _hx_goto_20;
            								}
            								if (  (_hx_switch_2==2) ){
HXLINE( 650)									_hx_tmp = 2;
HXDLIN( 650)									goto _hx_goto_20;
            								}
            								/* default */{
HXLINE( 650)									_hx_tmp = 1;
            								}
            								_hx_goto_20:;
HXDLIN( 650)								::openfl::display::_internal::CairoGraphics_obj::cairo->set_lineCap(_hx_tmp);
            							}
HXLINE( 658)							::openfl::display::_internal::CairoGraphics_obj::cairo->set_miterLimit(c->buffer->f->__get((c->fPos + 1)));
HXLINE( 660)							r = (( (Float)(::hx::UShr((c->buffer->i->__get(c->iPos) & 16711680),16)) ) / ( (Float)(255) ));
HXLINE( 661)							g = (( (Float)(::hx::UShr((c->buffer->i->__get(c->iPos) & 65280),8)) ) / ( (Float)(255) ));
HXLINE( 662)							b = (( (Float)((c->buffer->i->__get(c->iPos) & 255)) ) / ( (Float)(255) ));
HXLINE( 664)							if ((c->buffer->f->__get(c->fPos) == 1)) {
HXLINE( 666)								::openfl::display::_internal::CairoGraphics_obj::strokePattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGB(r,g,b);
            							}
            							else {
HXLINE( 670)								::openfl::display::_internal::CairoGraphics_obj::strokePattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGBA(r,g,b,c->buffer->f->__get(c->fPos));
            							}
            						}
            					}
            					break;
            					case (int)17: {
HXLINE( 583)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 583)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 583)								data1->oPos = (data1->oPos + 2);
HXDLIN( 583)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 583)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 583)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 583)								data1->iPos = (data1->iPos + 1);
HXDLIN( 583)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 583)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 583)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 583)								data1->oPos = (data1->oPos + 4);
HXDLIN( 583)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 583)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 583)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 583)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 583)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 583)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 583)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 583)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 583)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 583)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 583)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 583)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 583)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 583)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 583)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 583)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 583)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 583)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 583)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 583)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 583)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 583)								data1->fPos = (data1->fPos + 5);
HXDLIN( 583)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 583)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 583)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 583)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 583)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 583)								data1->oPos = (data1->oPos + 2);
HXDLIN( 583)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 583)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 583)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 583)								data1->oPos = (data1->oPos + 4);
HXDLIN( 583)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 583)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 583)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 583)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 583)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 583)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 583)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 583)								data1->oPos = (data1->oPos + 4);
HXDLIN( 583)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 583)								data2->iPos = (data2->iPos + 1);
HXDLIN( 583)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 583)								data3->fPos = (data3->fPos + 2);
HXDLIN( 583)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 583)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 583)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 583)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 583)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 583)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 583)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 583)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 583)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 583)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 583)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_TO_dyn();
HXDLIN( 583)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 583)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 584)						hasPath = true;
HXLINE( 585)						::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo((c->buffer->f->__get(c->fPos) - offsetX),(c->buffer->f->__get((c->fPos + 1)) - offsetY));
HXLINE( 587)						positionX = c->buffer->f->__get(c->fPos);
HXLINE( 588)						positionY = c->buffer->f->__get((c->fPos + 1));
HXLINE( 590)						bool _hx_tmp;
HXDLIN( 590)						if ((positionX == startX)) {
HXLINE( 590)							_hx_tmp = (positionY == startY);
            						}
            						else {
HXLINE( 590)							_hx_tmp = false;
            						}
HXDLIN( 590)						if (_hx_tmp) {
HXLINE( 592)							closeGap = true;
            						}
            					}
            					break;
            					case (int)18: {
HXLINE( 596)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 596)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 596)								data1->oPos = (data1->oPos + 2);
HXDLIN( 596)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 596)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 596)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 596)								data1->iPos = (data1->iPos + 1);
HXDLIN( 596)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 596)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 596)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 596)								data1->oPos = (data1->oPos + 4);
HXDLIN( 596)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 596)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 596)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 596)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 596)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 596)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 596)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 596)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 596)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 596)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 596)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 596)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 596)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 596)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 596)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 596)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 596)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 596)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 596)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 596)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 596)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 596)								data1->fPos = (data1->fPos + 5);
HXDLIN( 596)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 596)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 596)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 596)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 596)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 596)								data1->oPos = (data1->oPos + 2);
HXDLIN( 596)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 596)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 596)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 596)								data1->oPos = (data1->oPos + 4);
HXDLIN( 596)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 596)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 596)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 596)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 596)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 596)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 596)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 596)								data1->oPos = (data1->oPos + 4);
HXDLIN( 596)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 596)								data2->iPos = (data2->iPos + 1);
HXDLIN( 596)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 596)								data3->fPos = (data3->fPos + 2);
HXDLIN( 596)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 596)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 596)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 596)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 596)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 596)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 596)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 596)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 596)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 596)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 596)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::MOVE_TO_dyn();
HXDLIN( 596)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 596)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 597)						::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo((c->buffer->f->__get(c->fPos) - offsetX),(c->buffer->f->__get((c->fPos + 1)) - offsetY));
HXLINE( 599)						positionX = c->buffer->f->__get(c->fPos);
HXLINE( 600)						positionY = c->buffer->f->__get((c->fPos + 1));
HXLINE( 602)						bool _hx_tmp;
HXDLIN( 602)						bool _hx_tmp1;
HXDLIN( 602)						if (setStart) {
HXLINE( 602)							_hx_tmp1 = (c->buffer->f->__get(c->fPos) != startX);
            						}
            						else {
HXLINE( 602)							_hx_tmp1 = false;
            						}
HXDLIN( 602)						if (_hx_tmp1) {
HXLINE( 602)							_hx_tmp = (c->buffer->f->__get((c->fPos + 1)) != startY);
            						}
            						else {
HXLINE( 602)							_hx_tmp = false;
            						}
HXDLIN( 602)						if (_hx_tmp) {
HXLINE( 604)							closeGap = true;
            						}
HXLINE( 607)						startX = c->buffer->f->__get(c->fPos);
HXLINE( 608)						startY = c->buffer->f->__get((c->fPos + 1));
HXLINE( 609)						setStart = true;
            					}
            					break;
            					case (int)21: {
HXLINE(1049)						{
HXLINE(1049)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1049)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1049)									data1->oPos = (data1->oPos + 2);
HXDLIN(1049)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1049)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1049)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1049)									data1->iPos = (data1->iPos + 1);
HXDLIN(1049)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1049)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1049)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1049)									data1->oPos = (data1->oPos + 4);
HXDLIN(1049)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1049)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1049)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1049)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1049)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1049)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1049)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1049)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1049)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1049)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1049)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1049)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1049)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1049)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1049)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1049)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1049)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1049)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1049)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1049)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1049)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1049)									data1->fPos = (data1->fPos + 5);
HXDLIN(1049)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1049)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1049)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1049)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1049)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1049)									data1->oPos = (data1->oPos + 2);
HXDLIN(1049)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1049)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1049)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1049)									data1->oPos = (data1->oPos + 4);
HXDLIN(1049)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1049)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1049)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1049)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1049)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1049)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1049)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1049)									data1->oPos = (data1->oPos + 4);
HXDLIN(1049)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1049)									data2->iPos = (data2->iPos + 1);
HXDLIN(1049)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1049)									data3->fPos = (data3->fPos + 2);
HXDLIN(1049)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1049)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1049)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1049)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1049)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1049)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1049)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1049)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1049)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1049)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1049)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_EVEN_ODD_dyn();
HXDLIN(1049)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
            						}
HXLINE(1050)						::openfl::display::_internal::CairoGraphics_obj::cairo->set_fillRule(1);
            					}
            					break;
            					case (int)22: {
HXLINE(1053)						{
HXLINE(1053)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1053)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1053)									data1->oPos = (data1->oPos + 2);
HXDLIN(1053)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1053)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1053)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1053)									data1->iPos = (data1->iPos + 1);
HXDLIN(1053)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1053)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1053)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1053)									data1->oPos = (data1->oPos + 4);
HXDLIN(1053)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1053)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1053)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1053)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1053)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1053)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1053)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1053)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1053)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1053)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1053)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1053)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1053)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1053)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1053)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1053)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1053)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1053)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1053)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1053)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1053)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1053)									data1->fPos = (data1->fPos + 5);
HXDLIN(1053)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1053)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1053)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1053)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1053)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1053)									data1->oPos = (data1->oPos + 2);
HXDLIN(1053)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1053)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1053)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1053)									data1->oPos = (data1->oPos + 4);
HXDLIN(1053)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1053)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1053)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1053)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1053)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1053)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1053)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1053)									data1->oPos = (data1->oPos + 4);
HXDLIN(1053)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1053)									data2->iPos = (data2->iPos + 1);
HXDLIN(1053)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1053)									data3->fPos = (data3->fPos + 2);
HXDLIN(1053)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1053)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1053)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1053)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1053)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1053)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1053)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1053)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1053)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1053)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1053)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_NON_ZERO_dyn();
HXDLIN(1053)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
            						}
HXLINE(1054)						::openfl::display::_internal::CairoGraphics_obj::cairo->set_fillRule(0);
            					}
            					break;
            					default:{
HXLINE(1057)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1057)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1057)								data1->oPos = (data1->oPos + 2);
HXDLIN(1057)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1057)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1057)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1057)								data1->iPos = (data1->iPos + 1);
HXDLIN(1057)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1057)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1057)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1057)								data1->oPos = (data1->oPos + 4);
HXDLIN(1057)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1057)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1057)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1057)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1057)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1057)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1057)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1057)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1057)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1057)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1057)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1057)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1057)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1057)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1057)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1057)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1057)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1057)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1057)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1057)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1057)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1057)								data1->fPos = (data1->fPos + 5);
HXDLIN(1057)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1057)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1057)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1057)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1057)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1057)								data1->oPos = (data1->oPos + 2);
HXDLIN(1057)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1057)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1057)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1057)								data1->oPos = (data1->oPos + 4);
HXDLIN(1057)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1057)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1057)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1057)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1057)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1057)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1057)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1057)								data1->oPos = (data1->oPos + 4);
HXDLIN(1057)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1057)								data2->iPos = (data2->iPos + 1);
HXDLIN(1057)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1057)								data3->fPos = (data3->fPos + 2);
HXDLIN(1057)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1057)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1057)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1057)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1057)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1057)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1057)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1057)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1057)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1057)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1057)						data->prev = type;
            					}
            				}
            			}
            			_hx_goto_14:;
            		}
HXLINE(1061)		data->destroy();
HXLINE(1063)		if (hasPath) {
HXLINE(1065)			bool _hx_tmp;
HXDLIN(1065)			if (stroke) {
HXLINE(1065)				_hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::hasStroke;
            			}
            			else {
HXLINE(1065)				_hx_tmp = false;
            			}
HXDLIN(1065)			if (_hx_tmp) {
HXLINE(1067)				if (::openfl::display::_internal::CairoGraphics_obj::hasFill) {
HXLINE(1069)					bool _hx_tmp;
HXDLIN(1069)					if ((positionX == startX)) {
HXLINE(1069)						_hx_tmp = (positionY != startY);
            					}
            					else {
HXLINE(1069)						_hx_tmp = true;
            					}
HXDLIN(1069)					if (_hx_tmp) {
HXLINE(1071)						::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo((startX - offsetX),(startY - offsetY));
HXLINE(1072)						closeGap = true;
            					}
HXLINE(1075)					if (closeGap) {
HXLINE(1075)						::openfl::display::_internal::CairoGraphics_obj::closePath(true);
            					}
            				}
            				else {
HXLINE(1077)					bool _hx_tmp;
HXDLIN(1077)					bool _hx_tmp1;
HXDLIN(1077)					if (closeGap) {
HXLINE(1077)						_hx_tmp1 = (positionX == startX);
            					}
            					else {
HXLINE(1077)						_hx_tmp1 = false;
            					}
HXDLIN(1077)					if (_hx_tmp1) {
HXLINE(1077)						_hx_tmp = (positionY == startY);
            					}
            					else {
HXLINE(1077)						_hx_tmp = false;
            					}
HXDLIN(1077)					if (_hx_tmp) {
HXLINE(1079)						::openfl::display::_internal::CairoGraphics_obj::closePath(true);
            					}
            				}
HXLINE(1082)				::openfl::display::_internal::CairoGraphics_obj::cairo->set_source(::openfl::display::_internal::CairoGraphics_obj::strokePattern);
HXLINE(1083)				if (!(::openfl::display::_internal::CairoGraphics_obj::hitTesting)) {
HXLINE(1083)					::openfl::display::_internal::CairoGraphics_obj::cairo->strokePreserve();
            				}
            			}
HXLINE(1086)			bool _hx_tmp1;
HXDLIN(1086)			if (!(stroke)) {
HXLINE(1086)				_hx_tmp1 = ::openfl::display::_internal::CairoGraphics_obj::hasFill;
            			}
            			else {
HXLINE(1086)				_hx_tmp1 = false;
            			}
HXDLIN(1086)			if (_hx_tmp1) {
HXLINE(1088)				::openfl::display::_internal::CairoGraphics_obj::cairo->translate(-(::openfl::display::_internal::CairoGraphics_obj::bounds->x),-(::openfl::display::_internal::CairoGraphics_obj::bounds->y));
HXLINE(1090)				if (::hx::IsNotNull( ::openfl::display::_internal::CairoGraphics_obj::fillPatternMatrix )) {
HXLINE(1092)					 ::openfl::geom::Matrix matrix = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE(1093)					matrix->copyFrom(::openfl::display::_internal::CairoGraphics_obj::fillPatternMatrix);
HXLINE(1094)					matrix->invert();
HXLINE(1096)					if (::hx::IsNotNull( ::openfl::display::_internal::CairoGraphics_obj::pendingMatrix )) {
HXLINE(1098)						matrix->concat(::openfl::display::_internal::CairoGraphics_obj::pendingMatrix);
            					}
HXLINE(1101)					 ::Dynamic _hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::fillPattern;
HXDLIN(1101)					::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(_hx_tmp,matrix->_hx___toMatrix3());
HXLINE(1103)					::openfl::geom::Matrix_obj::_hx___pool->release(matrix);
            				}
HXLINE(1106)				::openfl::display::_internal::CairoGraphics_obj::cairo->set_source(::openfl::display::_internal::CairoGraphics_obj::fillPattern);
HXLINE(1108)				if (::hx::IsNotNull( ::openfl::display::_internal::CairoGraphics_obj::pendingMatrix )) {
HXLINE(1110)					 ::lime::graphics::cairo::Cairo _hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::cairo;
HXDLIN(1110)					_hx_tmp->transform(::openfl::display::_internal::CairoGraphics_obj::pendingMatrix->_hx___toMatrix3());
HXLINE(1111)					if (!(::openfl::display::_internal::CairoGraphics_obj::hitTesting)) {
HXLINE(1111)						::openfl::display::_internal::CairoGraphics_obj::cairo->fillPreserve();
            					}
HXLINE(1112)					 ::lime::graphics::cairo::Cairo _hx_tmp1 = ::openfl::display::_internal::CairoGraphics_obj::cairo;
HXDLIN(1112)					_hx_tmp1->transform(::openfl::display::_internal::CairoGraphics_obj::inversePendingMatrix->_hx___toMatrix3());
            				}
            				else {
HXLINE(1116)					if (!(::openfl::display::_internal::CairoGraphics_obj::hitTesting)) {
HXLINE(1116)						::openfl::display::_internal::CairoGraphics_obj::cairo->fillPreserve();
            					}
            				}
HXLINE(1119)				::openfl::display::_internal::CairoGraphics_obj::cairo->translate(::openfl::display::_internal::CairoGraphics_obj::bounds->x,::openfl::display::_internal::CairoGraphics_obj::bounds->y);
HXLINE(1120)				::openfl::display::_internal::CairoGraphics_obj::cairo->closePath();
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,playCommands,(void))

void CairoGraphics_obj::quadraticCurveTo(Float cx,Float cy,Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_1126_quadraticCurveTo)
HXLINE(1127)		 ::lime::math::Vector2 current = null();
HXLINE(1129)		if (!(::openfl::display::_internal::CairoGraphics_obj::cairo->get_hasCurrentPoint())) {
HXLINE(1131)			::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo(cx,cy);
HXLINE(1132)			current =  ::lime::math::Vector2_obj::__alloc( HX_CTX ,cx,cy);
            		}
            		else {
HXLINE(1136)			current = ::openfl::display::_internal::CairoGraphics_obj::cairo->get_currentPoint();
            		}
HXLINE(1139)		Float cx1 = (current->x + (((Float)0.66666666666666663) * (cx - current->x)));
HXLINE(1140)		Float cy1 = (current->y + (((Float)0.66666666666666663) * (cy - current->y)));
HXLINE(1141)		Float cx2 = (x + (((Float)0.66666666666666663) * (cx - x)));
HXLINE(1142)		Float cy2 = (y + (((Float)0.66666666666666663) * (cy - y)));
HXLINE(1144)		::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo(cx1,cy1,cx2,cy2,x,y);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CairoGraphics_obj,quadraticCurveTo,(void))

void CairoGraphics_obj::render( ::openfl::display::Graphics graphics, ::openfl::display::CairoRenderer renderer){
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_1149_render)
HXLINE(1151)		::openfl::display::_internal::CairoGraphics_obj::graphics = graphics;
HXLINE(1152)		::openfl::display::_internal::CairoGraphics_obj::allowSmoothing = renderer->_hx___allowSmoothing;
HXLINE(1153)		::openfl::display::_internal::CairoGraphics_obj::worldAlpha = renderer->_hx___getAlpha(graphics->_hx___owner->_hx___worldAlpha);
HXLINE(1158)		Float pixelRatio = renderer->_hx___pixelRatio;
HXLINE(1161)		graphics->_hx___update(renderer->_hx___worldTransform,pixelRatio);
HXLINE(1163)		bool _hx_tmp;
HXDLIN(1163)		if (graphics->_hx___softwareDirty) {
HXLINE(1163)			_hx_tmp = graphics->_hx___managed;
            		}
            		else {
HXLINE(1163)			_hx_tmp = true;
            		}
HXDLIN(1163)		if (_hx_tmp) {
HXLINE(1165)			::openfl::display::_internal::CairoGraphics_obj::graphics = null();
HXLINE(1166)			return;
            		}
HXLINE(1169)		::openfl::display::_internal::CairoGraphics_obj::bounds = graphics->_hx___bounds;
HXLINE(1171)		int width = graphics->_hx___width;
HXLINE(1172)		int height = graphics->_hx___height;
HXLINE(1174)		bool _hx_tmp1;
HXDLIN(1174)		bool _hx_tmp2;
HXDLIN(1174)		bool _hx_tmp3;
HXDLIN(1174)		bool _hx_tmp4;
HXDLIN(1174)		if (graphics->_hx___visible) {
HXLINE(1174)			_hx_tmp4 = (graphics->_hx___commands->get_length() == 0);
            		}
            		else {
HXLINE(1174)			_hx_tmp4 = true;
            		}
HXDLIN(1174)		if (!(_hx_tmp4)) {
HXLINE(1174)			_hx_tmp3 = ::hx::IsNull( ::openfl::display::_internal::CairoGraphics_obj::bounds );
            		}
            		else {
HXLINE(1174)			_hx_tmp3 = true;
            		}
HXDLIN(1174)		if (!(_hx_tmp3)) {
HXLINE(1174)			_hx_tmp2 = (width < 1);
            		}
            		else {
HXLINE(1174)			_hx_tmp2 = true;
            		}
HXDLIN(1174)		if (!(_hx_tmp2)) {
HXLINE(1174)			_hx_tmp1 = (height < 1);
            		}
            		else {
HXLINE(1174)			_hx_tmp1 = true;
            		}
HXDLIN(1174)		if (_hx_tmp1) {
HXLINE(1176)			graphics->_hx___cairo = null();
HXLINE(1177)			graphics->_hx___bitmap = null();
            		}
            		else {
HXLINE(1181)			::openfl::display::_internal::CairoGraphics_obj::hitTesting = false;
HXLINE(1182)			bool needsUpscaling = false;
HXLINE(1184)			if (::hx::IsNotNull( graphics->_hx___cairo )) {
HXLINE(1186)				 ::Dynamic surface = graphics->_hx___cairo->get_target();
HXLINE(1188)				bool _hx_tmp;
HXDLIN(1188)				if ((width <= ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_width(surface))) {
HXLINE(1188)					_hx_tmp = (height > ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_height(surface));
            				}
            				else {
HXLINE(1188)					_hx_tmp = true;
            				}
HXDLIN(1188)				if (_hx_tmp) {
HXLINE(1190)					graphics->_hx___cairo = null();
HXLINE(1191)					needsUpscaling = true;
            				}
            			}
HXLINE(1195)			bool _hx_tmp;
HXDLIN(1195)			if (::hx::IsNotNull( graphics->_hx___cairo )) {
HXLINE(1195)				_hx_tmp = ::hx::IsNull( graphics->_hx___bitmap );
            			}
            			else {
HXLINE(1195)				_hx_tmp = true;
            			}
HXDLIN(1195)			if (_hx_tmp) {
HXLINE(1197)				 ::openfl::display::BitmapData bitmap;
HXDLIN(1197)				if (needsUpscaling) {
HXLINE(1197)					int bitmap1 = ::Std_obj::_hx_int((( (Float)(width) ) * ((Float)1.25)));
HXDLIN(1197)					bitmap =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,bitmap1,::Std_obj::_hx_int((( (Float)(height) ) * ((Float)1.25))),true,0);
            				}
            				else {
HXLINE(1197)					bitmap =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,width,height,true,0);
            				}
HXLINE(1198)				 ::Dynamic surface = bitmap->getSurface();
HXLINE(1199)				graphics->_hx___cairo =  ::lime::graphics::cairo::Cairo_obj::__alloc( HX_CTX ,surface);
HXLINE(1200)				graphics->_hx___bitmap = bitmap;
            			}
HXLINE(1203)			::openfl::display::_internal::CairoGraphics_obj::cairo = graphics->_hx___cairo;
HXLINE(1205)			renderer->_hx___setBlendModeCairo(::openfl::display::_internal::CairoGraphics_obj::cairo,10);
HXLINE(1206)			renderer->applyMatrix(graphics->_hx___renderTransform,::openfl::display::_internal::CairoGraphics_obj::cairo);
HXLINE(1208)			::openfl::display::_internal::CairoGraphics_obj::cairo->setOperator(0);
HXLINE(1209)			::openfl::display::_internal::CairoGraphics_obj::cairo->paint();
HXLINE(1210)			::openfl::display::_internal::CairoGraphics_obj::cairo->setOperator(2);
HXLINE(1212)			::openfl::display::_internal::CairoGraphics_obj::fillCommands->clear();
HXLINE(1213)			::openfl::display::_internal::CairoGraphics_obj::strokeCommands->clear();
HXLINE(1215)			::openfl::display::_internal::CairoGraphics_obj::hasFill = false;
HXLINE(1216)			::openfl::display::_internal::CairoGraphics_obj::hasStroke = false;
HXLINE(1218)			::openfl::display::_internal::CairoGraphics_obj::fillPattern = null();
HXLINE(1219)			::openfl::display::_internal::CairoGraphics_obj::strokePattern = null();
HXLINE(1221)			bool hasLineStyle = false;
HXLINE(1222)			Float initStrokeX = ((Float)0.0);
HXLINE(1223)			Float initStrokeY = ((Float)0.0);
HXLINE(1225)			 ::openfl::display::_internal::DrawCommandReader data =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,graphics->_hx___commands);
HXLINE(1227)			{
HXLINE(1227)				int _g = 0;
HXDLIN(1227)				::Array< ::Dynamic> _g1 = graphics->_hx___commands->types;
HXDLIN(1227)				while((_g < _g1->length)){
HXLINE(1227)					 ::openfl::display::_internal::DrawCommandType type = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN(1227)					_g = (_g + 1);
HXLINE(1229)					switch((int)(type->_hx_getIndex())){
            						case (int)0: case (int)1: case (int)2: case (int)3: {
HXLINE(1341)							::openfl::display::_internal::CairoGraphics_obj::endFill();
HXLINE(1342)							::openfl::display::_internal::CairoGraphics_obj::endStroke();
HXLINE(1344)							if (::hx::IsPointerEq( type,::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn() )) {
HXLINE(1346)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE(1346)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1346)										data1->oPos = (data1->oPos + 2);
HXDLIN(1346)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1346)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE(1346)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1346)										data1->iPos = (data1->iPos + 1);
HXDLIN(1346)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1346)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE(1346)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1346)										data1->oPos = (data1->oPos + 4);
HXDLIN(1346)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1346)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1346)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1346)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1346)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1346)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE(1346)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1346)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE(1346)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1346)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE(1346)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1346)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE(1346)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1346)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE(1346)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1346)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE(1346)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1346)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE(1346)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1346)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE(1346)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1346)										data1->fPos = (data1->fPos + 5);
HXDLIN(1346)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1346)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE(1346)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1346)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE(1346)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1346)										data1->oPos = (data1->oPos + 2);
HXDLIN(1346)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1346)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE(1346)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1346)										data1->oPos = (data1->oPos + 4);
HXDLIN(1346)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1346)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1346)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1346)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1346)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1346)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE(1346)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1346)										data1->oPos = (data1->oPos + 4);
HXDLIN(1346)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1346)										data2->iPos = (data2->iPos + 1);
HXDLIN(1346)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1346)										data3->fPos = (data3->fPos + 2);
HXDLIN(1346)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1346)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE(1346)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1346)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE(1346)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1346)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE(1346)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1346)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE(1346)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1346)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE(1346)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn();
HXDLIN(1346)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1346)								 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1347)								::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginBitmapFill(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
HXLINE(1348)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginBitmapFill(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
            							}
            							else {
HXLINE(1350)								if (::hx::IsPointerEq( type,::openfl::display::_internal::DrawCommandType_obj::BEGIN_GRADIENT_FILL_dyn() )) {
HXLINE(1352)									switch((int)(data->prev->_hx_getIndex())){
            										case (int)0: {
HXLINE(1352)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1352)											data1->oPos = (data1->oPos + 2);
HXDLIN(1352)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1352)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)1: {
HXLINE(1352)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1352)											data1->iPos = (data1->iPos + 1);
HXDLIN(1352)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1352)											data2->fPos = (data2->fPos + 1);
            										}
            										break;
            										case (int)2: {
HXLINE(1352)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1352)											data1->oPos = (data1->oPos + 4);
HXDLIN(1352)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1352)											data2->iiPos = (data2->iiPos + 2);
HXDLIN(1352)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1352)											data3->ffPos = (data3->ffPos + 1);
HXDLIN(1352)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1352)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)3: {
HXLINE(1352)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1352)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)4: {
HXLINE(1352)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1352)											data1->fPos = (data1->fPos + 6);
            										}
            										break;
            										case (int)5: {
HXLINE(1352)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1352)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)6: {
HXLINE(1352)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1352)											data1->fPos = (data1->fPos + 3);
            										}
            										break;
            										case (int)7: {
HXLINE(1352)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1352)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)8: {
HXLINE(1352)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1352)											data1->oPos = (data1->oPos + 3);
            										}
            										break;
            										case (int)9: {
HXLINE(1352)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1352)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)10: {
HXLINE(1352)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1352)											data1->fPos = (data1->fPos + 5);
HXDLIN(1352)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1352)											data2->oPos = (data2->oPos + 1);
            										}
            										break;
            										case (int)12: {
HXLINE(1352)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1352)											data1->oPos = (data1->oPos + 4);
            										}
            										break;
            										case (int)13: {
            										}
            										break;
            										case (int)14: {
HXLINE(1352)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1352)											data1->oPos = (data1->oPos + 2);
HXDLIN(1352)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1352)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)15: {
HXLINE(1352)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1352)											data1->oPos = (data1->oPos + 4);
HXDLIN(1352)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1352)											data2->iiPos = (data2->iiPos + 2);
HXDLIN(1352)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1352)											data3->ffPos = (data3->ffPos + 1);
HXDLIN(1352)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1352)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)16: {
HXLINE(1352)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1352)											data1->oPos = (data1->oPos + 4);
HXDLIN(1352)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1352)											data2->iPos = (data2->iPos + 1);
HXDLIN(1352)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1352)											data3->fPos = (data3->fPos + 2);
HXDLIN(1352)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1352)											data4->bPos = (data4->bPos + 1);
            										}
            										break;
            										case (int)17: {
HXLINE(1352)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1352)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)18: {
HXLINE(1352)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1352)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)19: {
HXLINE(1352)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1352)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)20: {
HXLINE(1352)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1352)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)21: case (int)22: {
            										}
            										break;
            										default:{
            										}
            									}
HXLINE(1352)									data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_GRADIENT_FILL_dyn();
HXDLIN(1352)									 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1352)									 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1353)									::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginGradientFill(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
HXLINE(1355)									::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginGradientFill(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
            								}
            								else {
HXLINE(1358)									if (::hx::IsPointerEq( type,::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn() )) {
HXLINE(1360)										switch((int)(data->prev->_hx_getIndex())){
            											case (int)0: {
HXLINE(1360)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1360)												data1->oPos = (data1->oPos + 2);
HXDLIN(1360)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1360)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)1: {
HXLINE(1360)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1360)												data1->iPos = (data1->iPos + 1);
HXDLIN(1360)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1360)												data2->fPos = (data2->fPos + 1);
            											}
            											break;
            											case (int)2: {
HXLINE(1360)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1360)												data1->oPos = (data1->oPos + 4);
HXDLIN(1360)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1360)												data2->iiPos = (data2->iiPos + 2);
HXDLIN(1360)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1360)												data3->ffPos = (data3->ffPos + 1);
HXDLIN(1360)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1360)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)3: {
HXLINE(1360)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1360)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)4: {
HXLINE(1360)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1360)												data1->fPos = (data1->fPos + 6);
            											}
            											break;
            											case (int)5: {
HXLINE(1360)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1360)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)6: {
HXLINE(1360)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1360)												data1->fPos = (data1->fPos + 3);
            											}
            											break;
            											case (int)7: {
HXLINE(1360)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1360)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)8: {
HXLINE(1360)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1360)												data1->oPos = (data1->oPos + 3);
            											}
            											break;
            											case (int)9: {
HXLINE(1360)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1360)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)10: {
HXLINE(1360)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1360)												data1->fPos = (data1->fPos + 5);
HXDLIN(1360)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1360)												data2->oPos = (data2->oPos + 1);
            											}
            											break;
            											case (int)12: {
HXLINE(1360)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1360)												data1->oPos = (data1->oPos + 4);
            											}
            											break;
            											case (int)13: {
            											}
            											break;
            											case (int)14: {
HXLINE(1360)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1360)												data1->oPos = (data1->oPos + 2);
HXDLIN(1360)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1360)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)15: {
HXLINE(1360)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1360)												data1->oPos = (data1->oPos + 4);
HXDLIN(1360)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1360)												data2->iiPos = (data2->iiPos + 2);
HXDLIN(1360)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1360)												data3->ffPos = (data3->ffPos + 1);
HXDLIN(1360)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1360)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)16: {
HXLINE(1360)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1360)												data1->oPos = (data1->oPos + 4);
HXDLIN(1360)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1360)												data2->iPos = (data2->iPos + 1);
HXDLIN(1360)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1360)												data3->fPos = (data3->fPos + 2);
HXDLIN(1360)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1360)												data4->bPos = (data4->bPos + 1);
            											}
            											break;
            											case (int)17: {
HXLINE(1360)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1360)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)18: {
HXLINE(1360)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1360)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)19: {
HXLINE(1360)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1360)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)20: {
HXLINE(1360)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1360)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)21: case (int)22: {
            											}
            											break;
            											default:{
            											}
            										}
HXLINE(1360)										data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn();
HXDLIN(1360)										 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1360)										 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1361)										::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginShaderFill(( ( ::openfl::display::_internal::ShaderBuffer)(c->buffer->o->__get(c->oPos)) ));
HXLINE(1362)										::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginShaderFill(( ( ::openfl::display::_internal::ShaderBuffer)(c->buffer->o->__get(c->oPos)) ));
            									}
            									else {
HXLINE(1366)										switch((int)(data->prev->_hx_getIndex())){
            											case (int)0: {
HXLINE(1366)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1366)												data1->oPos = (data1->oPos + 2);
HXDLIN(1366)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1366)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)1: {
HXLINE(1366)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1366)												data1->iPos = (data1->iPos + 1);
HXDLIN(1366)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1366)												data2->fPos = (data2->fPos + 1);
            											}
            											break;
            											case (int)2: {
HXLINE(1366)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1366)												data1->oPos = (data1->oPos + 4);
HXDLIN(1366)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1366)												data2->iiPos = (data2->iiPos + 2);
HXDLIN(1366)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1366)												data3->ffPos = (data3->ffPos + 1);
HXDLIN(1366)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1366)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)3: {
HXLINE(1366)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1366)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)4: {
HXLINE(1366)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1366)												data1->fPos = (data1->fPos + 6);
            											}
            											break;
            											case (int)5: {
HXLINE(1366)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1366)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)6: {
HXLINE(1366)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1366)												data1->fPos = (data1->fPos + 3);
            											}
            											break;
            											case (int)7: {
HXLINE(1366)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1366)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)8: {
HXLINE(1366)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1366)												data1->oPos = (data1->oPos + 3);
            											}
            											break;
            											case (int)9: {
HXLINE(1366)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1366)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)10: {
HXLINE(1366)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1366)												data1->fPos = (data1->fPos + 5);
HXDLIN(1366)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1366)												data2->oPos = (data2->oPos + 1);
            											}
            											break;
            											case (int)12: {
HXLINE(1366)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1366)												data1->oPos = (data1->oPos + 4);
            											}
            											break;
            											case (int)13: {
            											}
            											break;
            											case (int)14: {
HXLINE(1366)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1366)												data1->oPos = (data1->oPos + 2);
HXDLIN(1366)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1366)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)15: {
HXLINE(1366)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1366)												data1->oPos = (data1->oPos + 4);
HXDLIN(1366)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1366)												data2->iiPos = (data2->iiPos + 2);
HXDLIN(1366)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1366)												data3->ffPos = (data3->ffPos + 1);
HXDLIN(1366)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1366)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)16: {
HXLINE(1366)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1366)												data1->oPos = (data1->oPos + 4);
HXDLIN(1366)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1366)												data2->iPos = (data2->iPos + 1);
HXDLIN(1366)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1366)												data3->fPos = (data3->fPos + 2);
HXDLIN(1366)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1366)												data4->bPos = (data4->bPos + 1);
            											}
            											break;
            											case (int)17: {
HXLINE(1366)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1366)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)18: {
HXLINE(1366)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1366)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)19: {
HXLINE(1366)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1366)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)20: {
HXLINE(1366)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1366)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)21: case (int)22: {
            											}
            											break;
            											default:{
            											}
            										}
HXLINE(1366)										data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_FILL_dyn();
HXDLIN(1366)										 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1366)										 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1367)										::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginFill(c->buffer->i->__get(c->iPos),c->buffer->f->__get(c->fPos));
HXLINE(1368)										::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginFill(c->buffer->i->__get(c->iPos),c->buffer->f->__get(c->fPos));
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE(1232)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1232)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1232)									data1->oPos = (data1->oPos + 2);
HXDLIN(1232)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1232)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1232)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1232)									data1->iPos = (data1->iPos + 1);
HXDLIN(1232)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1232)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1232)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1232)									data1->oPos = (data1->oPos + 4);
HXDLIN(1232)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1232)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1232)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1232)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1232)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1232)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1232)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1232)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1232)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1232)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1232)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1232)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1232)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1232)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1232)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1232)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1232)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1232)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1232)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1232)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1232)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1232)									data1->fPos = (data1->fPos + 5);
HXDLIN(1232)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1232)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1232)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1232)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1232)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1232)									data1->oPos = (data1->oPos + 2);
HXDLIN(1232)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1232)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1232)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1232)									data1->oPos = (data1->oPos + 4);
HXDLIN(1232)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1232)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1232)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1232)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1232)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1232)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1232)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1232)									data1->oPos = (data1->oPos + 4);
HXDLIN(1232)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1232)									data2->iPos = (data2->iPos + 1);
HXDLIN(1232)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1232)									data3->fPos = (data3->fPos + 2);
HXDLIN(1232)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1232)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1232)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1232)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1232)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1232)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1232)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1232)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1232)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1232)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1232)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::CUBIC_CURVE_TO_dyn();
HXDLIN(1232)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1232)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1233)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->cubicCurveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->f->__get((c->fPos + 5)));
HXLINE(1235)							if (hasLineStyle) {
HXLINE(1237)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->cubicCurveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->f->__get((c->fPos + 5)));
            							}
            							else {
HXLINE(1241)								initStrokeX = c->buffer->f->__get((c->fPos + 4));
HXLINE(1242)								initStrokeY = c->buffer->f->__get((c->fPos + 5));
            							}
            						}
            						break;
            						case (int)5: {
HXLINE(1246)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1246)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1246)									data1->oPos = (data1->oPos + 2);
HXDLIN(1246)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1246)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1246)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1246)									data1->iPos = (data1->iPos + 1);
HXDLIN(1246)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1246)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1246)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1246)									data1->oPos = (data1->oPos + 4);
HXDLIN(1246)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1246)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1246)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1246)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1246)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1246)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1246)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1246)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1246)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1246)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1246)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1246)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1246)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1246)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1246)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1246)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1246)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1246)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1246)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1246)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1246)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1246)									data1->fPos = (data1->fPos + 5);
HXDLIN(1246)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1246)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1246)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1246)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1246)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1246)									data1->oPos = (data1->oPos + 2);
HXDLIN(1246)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1246)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1246)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1246)									data1->oPos = (data1->oPos + 4);
HXDLIN(1246)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1246)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1246)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1246)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1246)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1246)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1246)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1246)									data1->oPos = (data1->oPos + 4);
HXDLIN(1246)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1246)									data2->iPos = (data2->iPos + 1);
HXDLIN(1246)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1246)									data3->fPos = (data3->fPos + 2);
HXDLIN(1246)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1246)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1246)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1246)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1246)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1246)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1246)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1246)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1246)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1246)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1246)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::CURVE_TO_dyn();
HXDLIN(1246)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1246)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1247)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->curveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
HXLINE(1249)							if (hasLineStyle) {
HXLINE(1251)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->curveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            							}
            							else {
HXLINE(1255)								initStrokeX = c->buffer->f->__get((c->fPos + 2));
HXLINE(1256)								initStrokeY = c->buffer->f->__get((c->fPos + 3));
            							}
            						}
            						break;
            						case (int)6: {
HXLINE(1372)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1372)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1372)									data1->oPos = (data1->oPos + 2);
HXDLIN(1372)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1372)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1372)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1372)									data1->iPos = (data1->iPos + 1);
HXDLIN(1372)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1372)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1372)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1372)									data1->oPos = (data1->oPos + 4);
HXDLIN(1372)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1372)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1372)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1372)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1372)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1372)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1372)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1372)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1372)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1372)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1372)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1372)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1372)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1372)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1372)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1372)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1372)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1372)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1372)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1372)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1372)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1372)									data1->fPos = (data1->fPos + 5);
HXDLIN(1372)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1372)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1372)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1372)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1372)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1372)									data1->oPos = (data1->oPos + 2);
HXDLIN(1372)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1372)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1372)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1372)									data1->oPos = (data1->oPos + 4);
HXDLIN(1372)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1372)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1372)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1372)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1372)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1372)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1372)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1372)									data1->oPos = (data1->oPos + 4);
HXDLIN(1372)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1372)									data2->iPos = (data2->iPos + 1);
HXDLIN(1372)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1372)									data3->fPos = (data3->fPos + 2);
HXDLIN(1372)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1372)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1372)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1372)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1372)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1372)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1372)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1372)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1372)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1372)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1372)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_CIRCLE_dyn();
HXDLIN(1372)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1372)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1373)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawCircle(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)));
HXLINE(1375)							if (hasLineStyle) {
HXLINE(1377)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawCircle(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)));
            							}
            						}
            						break;
            						case (int)7: {
HXLINE(1381)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1381)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1381)									data1->oPos = (data1->oPos + 2);
HXDLIN(1381)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1381)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1381)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1381)									data1->iPos = (data1->iPos + 1);
HXDLIN(1381)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1381)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1381)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1381)									data1->oPos = (data1->oPos + 4);
HXDLIN(1381)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1381)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1381)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1381)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1381)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1381)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1381)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1381)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1381)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1381)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1381)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1381)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1381)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1381)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1381)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1381)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1381)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1381)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1381)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1381)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1381)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1381)									data1->fPos = (data1->fPos + 5);
HXDLIN(1381)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1381)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1381)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1381)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1381)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1381)									data1->oPos = (data1->oPos + 2);
HXDLIN(1381)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1381)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1381)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1381)									data1->oPos = (data1->oPos + 4);
HXDLIN(1381)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1381)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1381)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1381)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1381)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1381)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1381)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1381)									data1->oPos = (data1->oPos + 4);
HXDLIN(1381)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1381)									data2->iPos = (data2->iPos + 1);
HXDLIN(1381)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1381)									data3->fPos = (data3->fPos + 2);
HXDLIN(1381)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1381)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1381)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1381)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1381)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1381)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1381)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1381)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1381)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1381)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1381)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ELLIPSE_dyn();
HXDLIN(1381)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1381)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1382)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawEllipse(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
HXLINE(1384)							if (hasLineStyle) {
HXLINE(1386)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawEllipse(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            							}
            						}
            						break;
            						case (int)8: {
HXLINE(1408)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1408)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1408)									data1->oPos = (data1->oPos + 2);
HXDLIN(1408)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1408)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1408)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1408)									data1->iPos = (data1->iPos + 1);
HXDLIN(1408)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1408)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1408)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1408)									data1->oPos = (data1->oPos + 4);
HXDLIN(1408)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1408)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1408)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1408)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1408)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1408)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1408)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1408)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1408)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1408)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1408)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1408)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1408)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1408)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1408)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1408)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1408)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1408)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1408)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1408)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1408)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1408)									data1->fPos = (data1->fPos + 5);
HXDLIN(1408)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1408)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1408)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1408)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1408)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1408)									data1->oPos = (data1->oPos + 2);
HXDLIN(1408)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1408)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1408)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1408)									data1->oPos = (data1->oPos + 4);
HXDLIN(1408)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1408)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1408)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1408)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1408)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1408)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1408)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1408)									data1->oPos = (data1->oPos + 4);
HXDLIN(1408)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1408)									data2->iPos = (data2->iPos + 1);
HXDLIN(1408)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1408)									data3->fPos = (data3->fPos + 2);
HXDLIN(1408)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1408)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1408)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1408)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1408)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1408)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1408)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1408)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1408)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1408)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1408)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_QUADS_dyn();
HXDLIN(1408)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1408)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1409)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawQuads(( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) ),( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) ));
            						}
            						break;
            						case (int)9: {
HXLINE(1390)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1390)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1390)									data1->oPos = (data1->oPos + 2);
HXDLIN(1390)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1390)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1390)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1390)									data1->iPos = (data1->iPos + 1);
HXDLIN(1390)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1390)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1390)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1390)									data1->oPos = (data1->oPos + 4);
HXDLIN(1390)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1390)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1390)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1390)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1390)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1390)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1390)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1390)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1390)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1390)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1390)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1390)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1390)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1390)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1390)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1390)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1390)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1390)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1390)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1390)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1390)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1390)									data1->fPos = (data1->fPos + 5);
HXDLIN(1390)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1390)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1390)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1390)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1390)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1390)									data1->oPos = (data1->oPos + 2);
HXDLIN(1390)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1390)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1390)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1390)									data1->oPos = (data1->oPos + 4);
HXDLIN(1390)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1390)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1390)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1390)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1390)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1390)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1390)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1390)									data1->oPos = (data1->oPos + 4);
HXDLIN(1390)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1390)									data2->iPos = (data2->iPos + 1);
HXDLIN(1390)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1390)									data3->fPos = (data3->fPos + 2);
HXDLIN(1390)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1390)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1390)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1390)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1390)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1390)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1390)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1390)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1390)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1390)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1390)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_RECT_dyn();
HXDLIN(1390)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1390)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1391)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
HXLINE(1393)							if (hasLineStyle) {
HXLINE(1395)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            							}
            						}
            						break;
            						case (int)10: {
HXLINE(1399)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1399)									data1->oPos = (data1->oPos + 2);
HXDLIN(1399)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1399)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1399)									data1->iPos = (data1->iPos + 1);
HXDLIN(1399)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1399)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1399)									data1->oPos = (data1->oPos + 4);
HXDLIN(1399)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1399)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1399)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1399)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1399)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1399)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1399)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1399)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1399)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1399)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1399)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1399)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1399)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1399)									data1->fPos = (data1->fPos + 5);
HXDLIN(1399)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1399)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1399)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1399)									data1->oPos = (data1->oPos + 2);
HXDLIN(1399)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1399)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1399)									data1->oPos = (data1->oPos + 4);
HXDLIN(1399)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1399)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1399)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1399)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1399)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1399)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1399)									data1->oPos = (data1->oPos + 4);
HXDLIN(1399)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1399)									data2->iPos = (data2->iPos + 1);
HXDLIN(1399)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1399)									data3->fPos = (data3->fPos + 2);
HXDLIN(1399)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1399)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1399)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1399)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1399)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1399)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1399)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ROUND_RECT_dyn();
HXDLIN(1399)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1399)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1400)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawRoundRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->o->__get(c->oPos));
HXLINE(1402)							if (hasLineStyle) {
HXLINE(1404)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawRoundRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->o->__get(c->oPos));
            							}
            						}
            						break;
            						case (int)12: {
HXLINE(1412)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1412)									data1->oPos = (data1->oPos + 2);
HXDLIN(1412)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1412)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1412)									data1->iPos = (data1->iPos + 1);
HXDLIN(1412)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1412)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1412)									data1->oPos = (data1->oPos + 4);
HXDLIN(1412)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1412)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1412)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1412)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1412)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1412)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1412)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1412)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1412)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1412)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1412)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1412)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1412)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1412)									data1->fPos = (data1->fPos + 5);
HXDLIN(1412)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1412)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1412)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1412)									data1->oPos = (data1->oPos + 2);
HXDLIN(1412)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1412)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1412)									data1->oPos = (data1->oPos + 4);
HXDLIN(1412)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1412)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1412)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1412)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1412)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1412)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1412)									data1->oPos = (data1->oPos + 4);
HXDLIN(1412)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1412)									data2->iPos = (data2->iPos + 1);
HXDLIN(1412)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1412)									data3->fPos = (data3->fPos + 2);
HXDLIN(1412)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1412)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1412)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1412)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1412)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1412)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1412)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1412)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_TRIANGLES_dyn();
HXDLIN(1412)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1412)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1413)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawTriangles(( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) ),( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) ),c->buffer->o->__get((c->oPos + 3)));
            						}
            						break;
            						case (int)13: {
HXLINE(1288)							{
HXLINE(1288)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE(1288)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)										data1->oPos = (data1->oPos + 2);
HXDLIN(1288)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1288)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE(1288)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)										data1->iPos = (data1->iPos + 1);
HXDLIN(1288)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1288)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE(1288)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)										data1->oPos = (data1->oPos + 4);
HXDLIN(1288)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1288)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1288)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1288)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1288)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1288)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE(1288)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE(1288)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE(1288)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE(1288)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE(1288)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE(1288)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE(1288)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE(1288)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)										data1->fPos = (data1->fPos + 5);
HXDLIN(1288)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1288)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE(1288)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE(1288)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)										data1->oPos = (data1->oPos + 2);
HXDLIN(1288)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1288)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE(1288)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)										data1->oPos = (data1->oPos + 4);
HXDLIN(1288)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1288)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1288)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1288)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1288)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1288)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE(1288)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)										data1->oPos = (data1->oPos + 4);
HXDLIN(1288)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1288)										data2->iPos = (data2->iPos + 1);
HXDLIN(1288)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1288)										data3->fPos = (data3->fPos + 2);
HXDLIN(1288)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1288)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE(1288)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE(1288)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE(1288)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE(1288)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE(1288)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::END_FILL_dyn();
HXDLIN(1288)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
            							}
HXLINE(1289)							::openfl::display::_internal::CairoGraphics_obj::endFill();
HXLINE(1290)							::openfl::display::_internal::CairoGraphics_obj::endStroke();
HXLINE(1291)							::openfl::display::_internal::CairoGraphics_obj::hasFill = false;
HXLINE(1292)							hasLineStyle = false;
HXLINE(1293)							::openfl::display::_internal::CairoGraphics_obj::bitmapFill = null();
HXLINE(1294)							initStrokeX = ( (Float)(0) );
HXLINE(1295)							initStrokeY = ( (Float)(0) );
            						}
            						break;
            						case (int)14: {
HXLINE(1312)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1312)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1312)									data1->oPos = (data1->oPos + 2);
HXDLIN(1312)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1312)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1312)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1312)									data1->iPos = (data1->iPos + 1);
HXDLIN(1312)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1312)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1312)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1312)									data1->oPos = (data1->oPos + 4);
HXDLIN(1312)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1312)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1312)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1312)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1312)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1312)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1312)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1312)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1312)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1312)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1312)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1312)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1312)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1312)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1312)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1312)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1312)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1312)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1312)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1312)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1312)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1312)									data1->fPos = (data1->fPos + 5);
HXDLIN(1312)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1312)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1312)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1312)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1312)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1312)									data1->oPos = (data1->oPos + 2);
HXDLIN(1312)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1312)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1312)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1312)									data1->oPos = (data1->oPos + 4);
HXDLIN(1312)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1312)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1312)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1312)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1312)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1312)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1312)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1312)									data1->oPos = (data1->oPos + 4);
HXDLIN(1312)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1312)									data2->iPos = (data2->iPos + 1);
HXDLIN(1312)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1312)									data3->fPos = (data3->fPos + 2);
HXDLIN(1312)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1312)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1312)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1312)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1312)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1312)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1312)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1312)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1312)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1312)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1312)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_BITMAP_STYLE_dyn();
HXDLIN(1312)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1312)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1314)							bool _hx_tmp;
HXDLIN(1314)							if (!(hasLineStyle)) {
HXLINE(1314)								if ((initStrokeX == 0)) {
HXLINE(1314)									_hx_tmp = (initStrokeY != 0);
            								}
            								else {
HXLINE(1314)									_hx_tmp = true;
            								}
            							}
            							else {
HXLINE(1314)								_hx_tmp = false;
            							}
HXDLIN(1314)							if (_hx_tmp) {
HXLINE(1316)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->moveTo(initStrokeX,initStrokeY);
HXLINE(1317)								initStrokeX = ( (Float)(0) );
HXLINE(1318)								initStrokeY = ( (Float)(0) );
            							}
HXLINE(1321)							hasLineStyle = true;
HXLINE(1322)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineBitmapStyle(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
            						}
            						break;
            						case (int)15: {
HXLINE(1298)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1298)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1298)									data1->oPos = (data1->oPos + 2);
HXDLIN(1298)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1298)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1298)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1298)									data1->iPos = (data1->iPos + 1);
HXDLIN(1298)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1298)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1298)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1298)									data1->oPos = (data1->oPos + 4);
HXDLIN(1298)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1298)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1298)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1298)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1298)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1298)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1298)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1298)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1298)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1298)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1298)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1298)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1298)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1298)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1298)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1298)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1298)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1298)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1298)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1298)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1298)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1298)									data1->fPos = (data1->fPos + 5);
HXDLIN(1298)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1298)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1298)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1298)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1298)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1298)									data1->oPos = (data1->oPos + 2);
HXDLIN(1298)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1298)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1298)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1298)									data1->oPos = (data1->oPos + 4);
HXDLIN(1298)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1298)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1298)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1298)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1298)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1298)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1298)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1298)									data1->oPos = (data1->oPos + 4);
HXDLIN(1298)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1298)									data2->iPos = (data2->iPos + 1);
HXDLIN(1298)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1298)									data3->fPos = (data3->fPos + 2);
HXDLIN(1298)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1298)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1298)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1298)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1298)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1298)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1298)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1298)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1298)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1298)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1298)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_GRADIENT_STYLE_dyn();
HXDLIN(1298)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1298)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1300)							bool _hx_tmp;
HXDLIN(1300)							if (!(hasLineStyle)) {
HXLINE(1300)								if ((initStrokeX == 0)) {
HXLINE(1300)									_hx_tmp = (initStrokeY != 0);
            								}
            								else {
HXLINE(1300)									_hx_tmp = true;
            								}
            							}
            							else {
HXLINE(1300)								_hx_tmp = false;
            							}
HXDLIN(1300)							if (_hx_tmp) {
HXLINE(1302)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->moveTo(initStrokeX,initStrokeY);
HXLINE(1303)								initStrokeX = ( (Float)(0) );
HXLINE(1304)								initStrokeY = ( (Float)(0) );
            							}
HXLINE(1307)							hasLineStyle = true;
HXLINE(1308)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineGradientStyle(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
            						}
            						break;
            						case (int)16: {
HXLINE(1325)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1325)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1325)									data1->oPos = (data1->oPos + 2);
HXDLIN(1325)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1325)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1325)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1325)									data1->iPos = (data1->iPos + 1);
HXDLIN(1325)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1325)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1325)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1325)									data1->oPos = (data1->oPos + 4);
HXDLIN(1325)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1325)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1325)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1325)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1325)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1325)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1325)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1325)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1325)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1325)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1325)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1325)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1325)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1325)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1325)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1325)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1325)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1325)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1325)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1325)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1325)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1325)									data1->fPos = (data1->fPos + 5);
HXDLIN(1325)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1325)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1325)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1325)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1325)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1325)									data1->oPos = (data1->oPos + 2);
HXDLIN(1325)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1325)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1325)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1325)									data1->oPos = (data1->oPos + 4);
HXDLIN(1325)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1325)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1325)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1325)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1325)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1325)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1325)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1325)									data1->oPos = (data1->oPos + 4);
HXDLIN(1325)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1325)									data2->iPos = (data2->iPos + 1);
HXDLIN(1325)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1325)									data3->fPos = (data3->fPos + 2);
HXDLIN(1325)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1325)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1325)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1325)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1325)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1325)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1325)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1325)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1325)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1325)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1325)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_STYLE_dyn();
HXDLIN(1325)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1325)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1327)							bool _hx_tmp;
HXDLIN(1327)							if (!(hasLineStyle)) {
HXLINE(1327)								_hx_tmp = ::hx::IsNotNull( c->buffer->o->__get(c->oPos) );
            							}
            							else {
HXLINE(1327)								_hx_tmp = false;
            							}
HXDLIN(1327)							if (_hx_tmp) {
HXLINE(1329)								bool _hx_tmp;
HXDLIN(1329)								if ((initStrokeX == 0)) {
HXLINE(1329)									_hx_tmp = (initStrokeY != 0);
            								}
            								else {
HXLINE(1329)									_hx_tmp = true;
            								}
HXDLIN(1329)								if (_hx_tmp) {
HXLINE(1331)									::openfl::display::_internal::CairoGraphics_obj::strokeCommands->moveTo(initStrokeX,initStrokeY);
HXLINE(1332)									initStrokeX = ( (Float)(0) );
HXLINE(1333)									initStrokeY = ( (Float)(0) );
            								}
            							}
HXLINE(1337)							hasLineStyle = ::hx::IsNotNull( c->buffer->o->__get(c->oPos) );
HXLINE(1338)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineStyle(c->buffer->o->__get(c->oPos),c->buffer->i->__get(c->iPos),c->buffer->f->__get(c->fPos),c->buffer->b->__get(c->bPos),c->buffer->o->__get((c->oPos + 1)),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get((c->fPos + 1)));
            						}
            						break;
            						case (int)17: {
HXLINE(1260)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1260)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1260)									data1->oPos = (data1->oPos + 2);
HXDLIN(1260)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1260)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1260)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1260)									data1->iPos = (data1->iPos + 1);
HXDLIN(1260)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1260)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1260)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1260)									data1->oPos = (data1->oPos + 4);
HXDLIN(1260)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1260)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1260)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1260)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1260)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1260)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1260)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1260)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1260)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1260)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1260)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1260)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1260)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1260)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1260)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1260)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1260)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1260)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1260)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1260)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1260)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1260)									data1->fPos = (data1->fPos + 5);
HXDLIN(1260)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1260)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1260)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1260)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1260)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1260)									data1->oPos = (data1->oPos + 2);
HXDLIN(1260)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1260)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1260)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1260)									data1->oPos = (data1->oPos + 4);
HXDLIN(1260)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1260)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1260)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1260)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1260)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1260)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1260)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1260)									data1->oPos = (data1->oPos + 4);
HXDLIN(1260)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1260)									data2->iPos = (data2->iPos + 1);
HXDLIN(1260)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1260)									data3->fPos = (data3->fPos + 2);
HXDLIN(1260)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1260)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1260)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1260)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1260)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1260)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1260)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1260)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1260)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1260)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1260)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_TO_dyn();
HXDLIN(1260)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1260)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1261)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->lineTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
HXLINE(1263)							if (hasLineStyle) {
HXLINE(1265)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
            							}
            							else {
HXLINE(1269)								initStrokeX = c->buffer->f->__get(c->fPos);
HXLINE(1270)								initStrokeY = c->buffer->f->__get((c->fPos + 1));
            							}
            						}
            						break;
            						case (int)18: {
HXLINE(1274)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1274)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1274)									data1->oPos = (data1->oPos + 2);
HXDLIN(1274)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1274)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1274)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1274)									data1->iPos = (data1->iPos + 1);
HXDLIN(1274)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1274)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1274)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1274)									data1->oPos = (data1->oPos + 4);
HXDLIN(1274)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1274)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1274)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1274)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1274)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1274)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1274)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1274)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1274)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1274)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1274)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1274)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1274)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1274)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1274)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1274)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1274)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1274)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1274)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1274)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1274)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1274)									data1->fPos = (data1->fPos + 5);
HXDLIN(1274)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1274)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1274)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1274)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1274)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1274)									data1->oPos = (data1->oPos + 2);
HXDLIN(1274)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1274)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1274)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1274)									data1->oPos = (data1->oPos + 4);
HXDLIN(1274)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1274)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1274)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1274)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1274)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1274)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1274)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1274)									data1->oPos = (data1->oPos + 4);
HXDLIN(1274)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1274)									data2->iPos = (data2->iPos + 1);
HXDLIN(1274)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1274)									data3->fPos = (data3->fPos + 2);
HXDLIN(1274)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1274)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1274)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1274)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1274)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1274)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1274)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1274)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1274)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1274)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1274)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::MOVE_TO_dyn();
HXDLIN(1274)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1274)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1275)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->moveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
HXLINE(1277)							if (hasLineStyle) {
HXLINE(1279)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->moveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
            							}
            							else {
HXLINE(1283)								initStrokeX = c->buffer->f->__get(c->fPos);
HXLINE(1284)								initStrokeY = c->buffer->f->__get((c->fPos + 1));
            							}
            						}
            						break;
            						case (int)19: {
HXLINE(1416)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1416)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1416)									data1->oPos = (data1->oPos + 2);
HXDLIN(1416)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1416)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1416)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1416)									data1->iPos = (data1->iPos + 1);
HXDLIN(1416)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1416)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1416)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1416)									data1->oPos = (data1->oPos + 4);
HXDLIN(1416)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1416)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1416)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1416)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1416)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1416)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1416)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1416)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1416)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1416)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1416)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1416)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1416)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1416)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1416)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1416)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1416)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1416)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1416)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1416)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1416)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1416)									data1->fPos = (data1->fPos + 5);
HXDLIN(1416)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1416)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1416)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1416)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1416)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1416)									data1->oPos = (data1->oPos + 2);
HXDLIN(1416)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1416)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1416)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1416)									data1->oPos = (data1->oPos + 4);
HXDLIN(1416)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1416)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1416)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1416)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1416)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1416)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1416)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1416)									data1->oPos = (data1->oPos + 4);
HXDLIN(1416)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1416)									data2->iPos = (data2->iPos + 1);
HXDLIN(1416)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1416)									data3->fPos = (data3->fPos + 2);
HXDLIN(1416)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1416)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1416)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1416)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1416)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1416)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1416)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1416)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1416)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1416)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1416)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::OVERRIDE_BLEND_MODE_dyn();
HXDLIN(1416)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1416)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1417)							renderer->_hx___setBlendModeCairo(::openfl::display::_internal::CairoGraphics_obj::cairo,c->buffer->o->__get(c->oPos));
            						}
            						break;
            						case (int)21: {
HXLINE(1420)							{
HXLINE(1420)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE(1420)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1420)										data1->oPos = (data1->oPos + 2);
HXDLIN(1420)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1420)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE(1420)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1420)										data1->iPos = (data1->iPos + 1);
HXDLIN(1420)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1420)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE(1420)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1420)										data1->oPos = (data1->oPos + 4);
HXDLIN(1420)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1420)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1420)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1420)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1420)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1420)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE(1420)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1420)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE(1420)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1420)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE(1420)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1420)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE(1420)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1420)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE(1420)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1420)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE(1420)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1420)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE(1420)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1420)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE(1420)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1420)										data1->fPos = (data1->fPos + 5);
HXDLIN(1420)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1420)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE(1420)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1420)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE(1420)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1420)										data1->oPos = (data1->oPos + 2);
HXDLIN(1420)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1420)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE(1420)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1420)										data1->oPos = (data1->oPos + 4);
HXDLIN(1420)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1420)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1420)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1420)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1420)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1420)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE(1420)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1420)										data1->oPos = (data1->oPos + 4);
HXDLIN(1420)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1420)										data2->iPos = (data2->iPos + 1);
HXDLIN(1420)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1420)										data3->fPos = (data3->fPos + 2);
HXDLIN(1420)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1420)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE(1420)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1420)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE(1420)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1420)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE(1420)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1420)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE(1420)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1420)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE(1420)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_EVEN_ODD_dyn();
HXDLIN(1420)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
            							}
HXLINE(1421)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->windingEvenOdd();
            						}
            						break;
            						case (int)22: {
HXLINE(1424)							{
HXLINE(1424)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE(1424)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1424)										data1->oPos = (data1->oPos + 2);
HXDLIN(1424)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1424)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE(1424)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1424)										data1->iPos = (data1->iPos + 1);
HXDLIN(1424)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1424)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE(1424)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1424)										data1->oPos = (data1->oPos + 4);
HXDLIN(1424)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1424)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1424)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1424)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1424)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1424)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE(1424)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1424)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE(1424)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1424)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE(1424)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1424)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE(1424)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1424)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE(1424)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1424)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE(1424)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1424)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE(1424)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1424)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE(1424)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1424)										data1->fPos = (data1->fPos + 5);
HXDLIN(1424)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1424)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE(1424)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1424)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE(1424)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1424)										data1->oPos = (data1->oPos + 2);
HXDLIN(1424)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1424)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE(1424)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1424)										data1->oPos = (data1->oPos + 4);
HXDLIN(1424)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1424)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1424)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1424)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1424)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1424)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE(1424)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1424)										data1->oPos = (data1->oPos + 4);
HXDLIN(1424)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1424)										data2->iPos = (data2->iPos + 1);
HXDLIN(1424)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1424)										data3->fPos = (data3->fPos + 2);
HXDLIN(1424)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1424)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE(1424)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1424)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE(1424)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1424)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE(1424)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1424)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE(1424)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1424)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE(1424)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_NON_ZERO_dyn();
HXDLIN(1424)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
            							}
HXLINE(1425)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->windingNonZero();
            						}
            						break;
            						default:{
HXLINE(1428)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1428)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1428)									data1->oPos = (data1->oPos + 2);
HXDLIN(1428)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1428)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1428)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1428)									data1->iPos = (data1->iPos + 1);
HXDLIN(1428)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1428)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1428)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1428)									data1->oPos = (data1->oPos + 4);
HXDLIN(1428)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1428)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1428)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1428)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1428)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1428)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1428)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1428)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1428)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1428)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1428)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1428)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1428)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1428)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1428)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1428)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1428)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1428)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1428)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1428)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1428)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1428)									data1->fPos = (data1->fPos + 5);
HXDLIN(1428)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1428)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1428)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1428)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1428)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1428)									data1->oPos = (data1->oPos + 2);
HXDLIN(1428)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1428)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1428)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1428)									data1->oPos = (data1->oPos + 4);
HXDLIN(1428)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1428)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1428)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1428)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1428)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1428)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1428)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1428)									data1->oPos = (data1->oPos + 4);
HXDLIN(1428)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1428)									data2->iPos = (data2->iPos + 1);
HXDLIN(1428)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1428)									data3->fPos = (data3->fPos + 2);
HXDLIN(1428)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1428)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1428)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1428)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1428)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1428)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1428)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1428)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1428)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1428)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1428)							data->prev = type;
            						}
            					}
            				}
            			}
HXLINE(1432)			if ((::openfl::display::_internal::CairoGraphics_obj::fillCommands->get_length() > 0)) {
HXLINE(1434)				::openfl::display::_internal::CairoGraphics_obj::endFill();
            			}
HXLINE(1437)			if ((::openfl::display::_internal::CairoGraphics_obj::strokeCommands->get_length() > 0)) {
HXLINE(1439)				::openfl::display::_internal::CairoGraphics_obj::endStroke();
            			}
HXLINE(1442)			data->destroy();
HXLINE(1444)			graphics->_hx___bitmap->image->dirty = true;
HXLINE(1445)			graphics->_hx___bitmap->image->version++;
            		}
HXLINE(1448)		graphics->_hx___softwareDirty = false;
HXLINE(1449)		graphics->set___dirty(false);
HXLINE(1450)		::openfl::display::_internal::CairoGraphics_obj::graphics = null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,render,(void))

void CairoGraphics_obj::renderMask( ::openfl::display::Graphics graphics, ::openfl::display::CairoRenderer renderer){
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_1457_renderMask)
HXDLIN(1457)		if ((graphics->_hx___commands->get_length() != 0)) {
HXLINE(1459)			::openfl::display::_internal::CairoGraphics_obj::cairo = renderer->cairo;
HXLINE(1461)			Float positionX = ((Float)0.0);
HXLINE(1462)			Float positionY = ((Float)0.0);
HXLINE(1464)			int offsetX = 0;
HXLINE(1465)			int offsetY = 0;
HXLINE(1467)			 ::openfl::display::_internal::DrawCommandReader data =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,graphics->_hx___commands);
HXLINE(1469)			Float x;
HXDLIN(1469)			Float y;
HXDLIN(1469)			Float width;
HXDLIN(1469)			Float height;
HXDLIN(1469)			Float kappa = ((Float).5522848);
HXDLIN(1469)			Float ox;
HXDLIN(1469)			Float oy;
HXDLIN(1469)			Float xe;
HXDLIN(1469)			Float ye;
HXDLIN(1469)			Float xm;
HXDLIN(1469)			Float ym;
HXLINE(1471)			{
HXLINE(1471)				int _g = 0;
HXDLIN(1471)				::Array< ::Dynamic> _g1 = graphics->_hx___commands->types;
HXDLIN(1471)				while((_g < _g1->length)){
HXLINE(1471)					 ::openfl::display::_internal::DrawCommandType type = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN(1471)					_g = (_g + 1);
HXLINE(1473)					switch((int)(type->_hx_getIndex())){
            						case (int)4: {
HXLINE(1476)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1476)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1476)									data1->oPos = (data1->oPos + 2);
HXDLIN(1476)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1476)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1476)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1476)									data1->iPos = (data1->iPos + 1);
HXDLIN(1476)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1476)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1476)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1476)									data1->oPos = (data1->oPos + 4);
HXDLIN(1476)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1476)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1476)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1476)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1476)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1476)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1476)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1476)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1476)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1476)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1476)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1476)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1476)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1476)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1476)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1476)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1476)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1476)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1476)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1476)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1476)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1476)									data1->fPos = (data1->fPos + 5);
HXDLIN(1476)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1476)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1476)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1476)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1476)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1476)									data1->oPos = (data1->oPos + 2);
HXDLIN(1476)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1476)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1476)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1476)									data1->oPos = (data1->oPos + 4);
HXDLIN(1476)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1476)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1476)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1476)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1476)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1476)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1476)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1476)									data1->oPos = (data1->oPos + 4);
HXDLIN(1476)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1476)									data2->iPos = (data2->iPos + 1);
HXDLIN(1476)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1476)									data3->fPos = (data3->fPos + 2);
HXDLIN(1476)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1476)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1476)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1476)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1476)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1476)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1476)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1476)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1476)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1476)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1476)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::CUBIC_CURVE_TO_dyn();
HXDLIN(1476)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1476)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1477)							::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo((c->buffer->f->__get(c->fPos) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 1)) - ( (Float)(offsetY) )),(c->buffer->f->__get((c->fPos + 2)) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 3)) - ( (Float)(offsetY) )),(c->buffer->f->__get((c->fPos + 4)) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 5)) - ( (Float)(offsetY) )));
HXLINE(1485)							positionX = c->buffer->f->__get((c->fPos + 4));
HXLINE(1486)							positionY = c->buffer->f->__get((c->fPos + 5));
            						}
            						break;
            						case (int)5: {
HXLINE(1489)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1489)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1489)									data1->oPos = (data1->oPos + 2);
HXDLIN(1489)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1489)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1489)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1489)									data1->iPos = (data1->iPos + 1);
HXDLIN(1489)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1489)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1489)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1489)									data1->oPos = (data1->oPos + 4);
HXDLIN(1489)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1489)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1489)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1489)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1489)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1489)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1489)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1489)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1489)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1489)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1489)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1489)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1489)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1489)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1489)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1489)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1489)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1489)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1489)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1489)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1489)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1489)									data1->fPos = (data1->fPos + 5);
HXDLIN(1489)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1489)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1489)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1489)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1489)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1489)									data1->oPos = (data1->oPos + 2);
HXDLIN(1489)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1489)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1489)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1489)									data1->oPos = (data1->oPos + 4);
HXDLIN(1489)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1489)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1489)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1489)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1489)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1489)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1489)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1489)									data1->oPos = (data1->oPos + 4);
HXDLIN(1489)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1489)									data2->iPos = (data2->iPos + 1);
HXDLIN(1489)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1489)									data3->fPos = (data3->fPos + 2);
HXDLIN(1489)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1489)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1489)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1489)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1489)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1489)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1489)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1489)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1489)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1489)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1489)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::CURVE_TO_dyn();
HXDLIN(1489)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1489)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1490)							::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo((c->buffer->f->__get(c->fPos) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 1)) - ( (Float)(offsetY) )),(c->buffer->f->__get((c->fPos + 2)) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 3)) - ( (Float)(offsetY) )));
HXLINE(1491)							positionX = c->buffer->f->__get((c->fPos + 2));
HXLINE(1492)							positionY = c->buffer->f->__get((c->fPos + 3));
            						}
            						break;
            						case (int)6: {
HXLINE(1495)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1495)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1495)									data1->oPos = (data1->oPos + 2);
HXDLIN(1495)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1495)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1495)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1495)									data1->iPos = (data1->iPos + 1);
HXDLIN(1495)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1495)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1495)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1495)									data1->oPos = (data1->oPos + 4);
HXDLIN(1495)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1495)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1495)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1495)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1495)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1495)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1495)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1495)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1495)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1495)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1495)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1495)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1495)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1495)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1495)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1495)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1495)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1495)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1495)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1495)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1495)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1495)									data1->fPos = (data1->fPos + 5);
HXDLIN(1495)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1495)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1495)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1495)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1495)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1495)									data1->oPos = (data1->oPos + 2);
HXDLIN(1495)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1495)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1495)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1495)									data1->oPos = (data1->oPos + 4);
HXDLIN(1495)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1495)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1495)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1495)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1495)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1495)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1495)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1495)									data1->oPos = (data1->oPos + 4);
HXDLIN(1495)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1495)									data2->iPos = (data2->iPos + 1);
HXDLIN(1495)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1495)									data3->fPos = (data3->fPos + 2);
HXDLIN(1495)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1495)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1495)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1495)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1495)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1495)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1495)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1495)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1495)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1495)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1495)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_CIRCLE_dyn();
HXDLIN(1495)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1495)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1496)							::openfl::display::_internal::CairoGraphics_obj::cairo->arc((c->buffer->f->__get(c->fPos) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 1)) - ( (Float)(offsetY) )),c->buffer->f->__get((c->fPos + 2)),( (Float)(0) ),(::Math_obj::PI * ( (Float)(2) )));
            						}
            						break;
            						case (int)7: {
HXLINE(1499)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1499)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1499)									data1->oPos = (data1->oPos + 2);
HXDLIN(1499)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1499)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1499)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1499)									data1->iPos = (data1->iPos + 1);
HXDLIN(1499)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1499)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1499)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1499)									data1->oPos = (data1->oPos + 4);
HXDLIN(1499)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1499)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1499)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1499)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1499)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1499)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1499)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1499)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1499)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1499)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1499)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1499)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1499)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1499)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1499)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1499)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1499)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1499)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1499)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1499)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1499)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1499)									data1->fPos = (data1->fPos + 5);
HXDLIN(1499)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1499)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1499)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1499)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1499)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1499)									data1->oPos = (data1->oPos + 2);
HXDLIN(1499)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1499)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1499)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1499)									data1->oPos = (data1->oPos + 4);
HXDLIN(1499)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1499)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1499)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1499)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1499)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1499)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1499)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1499)									data1->oPos = (data1->oPos + 4);
HXDLIN(1499)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1499)									data2->iPos = (data2->iPos + 1);
HXDLIN(1499)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1499)									data3->fPos = (data3->fPos + 2);
HXDLIN(1499)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1499)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1499)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1499)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1499)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1499)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1499)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1499)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1499)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1499)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1499)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ELLIPSE_dyn();
HXDLIN(1499)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1499)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1501)							x = c->buffer->f->__get(c->fPos);
HXLINE(1502)							y = c->buffer->f->__get((c->fPos + 1));
HXLINE(1503)							width = c->buffer->f->__get((c->fPos + 2));
HXLINE(1504)							height = c->buffer->f->__get((c->fPos + 3));
HXLINE(1506)							x = (x - ( (Float)(offsetX) ));
HXLINE(1507)							y = (y - ( (Float)(offsetY) ));
HXLINE(1509)							ox = ((width / ( (Float)(2) )) * kappa);
HXLINE(1510)							oy = ((height / ( (Float)(2) )) * kappa);
HXLINE(1511)							xe = (x + width);
HXLINE(1512)							ye = (y + height);
HXLINE(1513)							xm = (x + (width / ( (Float)(2) )));
HXLINE(1514)							ym = (y + (height / ( (Float)(2) )));
HXLINE(1518)							::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo(x,ym);
HXLINE(1519)							::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo(x,(ym - oy),(xm - ox),y,xm,y);
HXLINE(1520)							::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo((xm + ox),y,xe,(ym - oy),xe,ym);
HXLINE(1521)							::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo(xe,(ym + oy),(xm + ox),ye,xm,ye);
HXLINE(1522)							::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo((xm - ox),ye,x,(ym + oy),x,ym);
            						}
            						break;
            						case (int)9: {
HXLINE(1526)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1526)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1526)									data1->oPos = (data1->oPos + 2);
HXDLIN(1526)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1526)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1526)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1526)									data1->iPos = (data1->iPos + 1);
HXDLIN(1526)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1526)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1526)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1526)									data1->oPos = (data1->oPos + 4);
HXDLIN(1526)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1526)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1526)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1526)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1526)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1526)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1526)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1526)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1526)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1526)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1526)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1526)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1526)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1526)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1526)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1526)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1526)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1526)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1526)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1526)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1526)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1526)									data1->fPos = (data1->fPos + 5);
HXDLIN(1526)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1526)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1526)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1526)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1526)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1526)									data1->oPos = (data1->oPos + 2);
HXDLIN(1526)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1526)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1526)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1526)									data1->oPos = (data1->oPos + 4);
HXDLIN(1526)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1526)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1526)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1526)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1526)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1526)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1526)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1526)									data1->oPos = (data1->oPos + 4);
HXDLIN(1526)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1526)									data2->iPos = (data2->iPos + 1);
HXDLIN(1526)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1526)									data3->fPos = (data3->fPos + 2);
HXDLIN(1526)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1526)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1526)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1526)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1526)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1526)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1526)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1526)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1526)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1526)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1526)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_RECT_dyn();
HXDLIN(1526)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1526)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1527)							::openfl::display::_internal::CairoGraphics_obj::cairo->rectangle((c->buffer->f->__get(c->fPos) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 1)) - ( (Float)(offsetY) )),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            						}
            						break;
            						case (int)10: {
HXLINE(1530)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1530)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1530)									data1->oPos = (data1->oPos + 2);
HXDLIN(1530)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1530)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1530)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1530)									data1->iPos = (data1->iPos + 1);
HXDLIN(1530)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1530)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1530)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1530)									data1->oPos = (data1->oPos + 4);
HXDLIN(1530)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1530)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1530)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1530)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1530)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1530)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1530)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1530)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1530)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1530)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1530)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1530)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1530)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1530)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1530)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1530)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1530)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1530)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1530)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1530)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1530)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1530)									data1->fPos = (data1->fPos + 5);
HXDLIN(1530)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1530)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1530)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1530)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1530)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1530)									data1->oPos = (data1->oPos + 2);
HXDLIN(1530)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1530)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1530)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1530)									data1->oPos = (data1->oPos + 4);
HXDLIN(1530)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1530)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1530)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1530)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1530)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1530)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1530)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1530)									data1->oPos = (data1->oPos + 4);
HXDLIN(1530)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1530)									data2->iPos = (data2->iPos + 1);
HXDLIN(1530)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1530)									data3->fPos = (data3->fPos + 2);
HXDLIN(1530)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1530)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1530)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1530)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1530)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1530)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1530)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1530)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1530)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1530)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1530)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ROUND_RECT_dyn();
HXDLIN(1530)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1530)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1531)							::openfl::display::_internal::CairoGraphics_obj::drawRoundRect((c->buffer->f->__get(c->fPos) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 1)) - ( (Float)(offsetY) )),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->o->__get(c->oPos));
            						}
            						break;
            						case (int)17: {
HXLINE(1534)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->oPos = (data1->oPos + 2);
HXDLIN(1534)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1534)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->iPos = (data1->iPos + 1);
HXDLIN(1534)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1534)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->oPos = (data1->oPos + 4);
HXDLIN(1534)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1534)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1534)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1534)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1534)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1534)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->fPos = (data1->fPos + 5);
HXDLIN(1534)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1534)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->oPos = (data1->oPos + 2);
HXDLIN(1534)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1534)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->oPos = (data1->oPos + 4);
HXDLIN(1534)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1534)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1534)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1534)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1534)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1534)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->oPos = (data1->oPos + 4);
HXDLIN(1534)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1534)									data2->iPos = (data2->iPos + 1);
HXDLIN(1534)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1534)									data3->fPos = (data3->fPos + 2);
HXDLIN(1534)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1534)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1534)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1534)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1534)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_TO_dyn();
HXDLIN(1534)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1534)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1535)							::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo((c->buffer->f->__get(c->fPos) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 1)) - ( (Float)(offsetY) )));
HXLINE(1536)							positionX = c->buffer->f->__get(c->fPos);
HXLINE(1537)							positionY = c->buffer->f->__get((c->fPos + 1));
            						}
            						break;
            						case (int)18: {
HXLINE(1540)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1540)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1540)									data1->oPos = (data1->oPos + 2);
HXDLIN(1540)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1540)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1540)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1540)									data1->iPos = (data1->iPos + 1);
HXDLIN(1540)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1540)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1540)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1540)									data1->oPos = (data1->oPos + 4);
HXDLIN(1540)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1540)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1540)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1540)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1540)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1540)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1540)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1540)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1540)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1540)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1540)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1540)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1540)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1540)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1540)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1540)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1540)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1540)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1540)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1540)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1540)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1540)									data1->fPos = (data1->fPos + 5);
HXDLIN(1540)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1540)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1540)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1540)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1540)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1540)									data1->oPos = (data1->oPos + 2);
HXDLIN(1540)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1540)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1540)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1540)									data1->oPos = (data1->oPos + 4);
HXDLIN(1540)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1540)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1540)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1540)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1540)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1540)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1540)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1540)									data1->oPos = (data1->oPos + 4);
HXDLIN(1540)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1540)									data2->iPos = (data2->iPos + 1);
HXDLIN(1540)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1540)									data3->fPos = (data3->fPos + 2);
HXDLIN(1540)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1540)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1540)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1540)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1540)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1540)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1540)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1540)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1540)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1540)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1540)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::MOVE_TO_dyn();
HXDLIN(1540)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1540)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1541)							::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo((c->buffer->f->__get(c->fPos) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 1)) - ( (Float)(offsetY) )));
HXLINE(1542)							positionX = c->buffer->f->__get(c->fPos);
HXLINE(1543)							positionY = c->buffer->f->__get((c->fPos + 1));
            						}
            						break;
            						default:{
HXLINE(1546)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1546)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1546)									data1->oPos = (data1->oPos + 2);
HXDLIN(1546)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1546)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1546)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1546)									data1->iPos = (data1->iPos + 1);
HXDLIN(1546)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1546)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1546)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1546)									data1->oPos = (data1->oPos + 4);
HXDLIN(1546)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1546)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1546)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1546)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1546)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1546)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1546)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1546)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1546)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1546)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1546)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1546)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1546)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1546)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1546)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1546)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1546)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1546)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1546)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1546)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1546)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1546)									data1->fPos = (data1->fPos + 5);
HXDLIN(1546)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1546)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1546)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1546)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1546)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1546)									data1->oPos = (data1->oPos + 2);
HXDLIN(1546)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1546)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1546)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1546)									data1->oPos = (data1->oPos + 4);
HXDLIN(1546)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1546)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1546)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1546)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1546)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1546)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1546)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1546)									data1->oPos = (data1->oPos + 4);
HXDLIN(1546)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1546)									data2->iPos = (data2->iPos + 1);
HXDLIN(1546)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1546)									data3->fPos = (data3->fPos + 2);
HXDLIN(1546)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1546)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1546)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1546)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1546)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1546)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1546)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1546)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1546)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1546)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1546)							data->prev = type;
            						}
            					}
            				}
            			}
HXLINE(1550)			data->destroy();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,renderMask,(void))


CairoGraphics_obj::CairoGraphics_obj()
{
}

bool CairoGraphics_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { outValue = ( SIN45 ); return true; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { outValue = ( TAN22 ); return true; }
		if (HX_FIELD_EQ(inName,"cairo") ) { outValue = ( cairo ); return true; }
		if (HX_FIELD_EQ(inName,"isCCW") ) { outValue = isCCW_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { outValue = ( bounds ); return true; }
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasFill") ) { outValue = ( hasFill ); return true; }
		if (HX_FIELD_EQ(inName,"endFill") ) { outValue = endFill_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"hitTest") ) { outValue = hitTest_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { outValue = ( graphics ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasStroke") ) { outValue = ( hasStroke ); return true; }
		if (HX_FIELD_EQ(inName,"closePath") ) { outValue = closePath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"endStroke") ) { outValue = endStroke_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapFill") ) { outValue = ( bitmapFill ); return true; }
		if (HX_FIELD_EQ(inName,"hitTesting") ) { outValue = ( hitTesting ); return true; }
		if (HX_FIELD_EQ(inName,"worldAlpha") ) { outValue = ( worldAlpha ); return true; }
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fillPattern") ) { outValue = ( fillPattern ); return true; }
		if (HX_FIELD_EQ(inName,"tempMatrix3") ) { outValue = ( tempMatrix3 ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitmapRepeat") ) { outValue = ( bitmapRepeat ); return true; }
		if (HX_FIELD_EQ(inName,"fillCommands") ) { outValue = ( fillCommands ); return true; }
		if (HX_FIELD_EQ(inName,"normalizeUVT") ) { outValue = normalizeUVT_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"playCommands") ) { outValue = playCommands_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingMatrix") ) { outValue = ( pendingMatrix ); return true; }
		if (HX_FIELD_EQ(inName,"strokePattern") ) { outValue = ( strokePattern ); return true; }
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { outValue = drawRoundRect_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowSmoothing") ) { outValue = ( allowSmoothing ); return true; }
		if (HX_FIELD_EQ(inName,"strokeCommands") ) { outValue = ( strokeCommands ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"quadraticCurveTo") ) { outValue = quadraticCurveTo_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fillPatternMatrix") ) { outValue = ( fillPatternMatrix ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createImagePattern") ) { outValue = createImagePattern_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inversePendingMatrix") ) { outValue = ( inversePendingMatrix ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createGradientPattern") ) { outValue = createGradientPattern_dyn(); return true; }
	}
	return false;
}

bool CairoGraphics_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { SIN45=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { TAN22=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"cairo") ) { cairo=ioValue.Cast<  ::lime::graphics::cairo::Cairo >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=ioValue.Cast<  ::openfl::geom::Rectangle >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasFill") ) { hasFill=ioValue.Cast< bool >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=ioValue.Cast<  ::openfl::display::Graphics >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasStroke") ) { hasStroke=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapFill") ) { bitmapFill=ioValue.Cast<  ::openfl::display::BitmapData >(); return true; }
		if (HX_FIELD_EQ(inName,"hitTesting") ) { hitTesting=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"worldAlpha") ) { worldAlpha=ioValue.Cast< Float >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fillPattern") ) { fillPattern=ioValue.Cast<  ::Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"tempMatrix3") ) { tempMatrix3=ioValue.Cast<  ::lime::math::Matrix3 >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitmapRepeat") ) { bitmapRepeat=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"fillCommands") ) { fillCommands=ioValue.Cast<  ::openfl::display::_internal::DrawCommandBuffer >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingMatrix") ) { pendingMatrix=ioValue.Cast<  ::openfl::geom::Matrix >(); return true; }
		if (HX_FIELD_EQ(inName,"strokePattern") ) { strokePattern=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowSmoothing") ) { allowSmoothing=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"strokeCommands") ) { strokeCommands=ioValue.Cast<  ::openfl::display::_internal::DrawCommandBuffer >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fillPatternMatrix") ) { fillPatternMatrix=ioValue.Cast<  ::openfl::geom::Matrix >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inversePendingMatrix") ) { inversePendingMatrix=ioValue.Cast<  ::openfl::geom::Matrix >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CairoGraphics_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CairoGraphics_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &CairoGraphics_obj::SIN45,HX_("SIN45",79,16,be,fa)},
	{::hx::fsFloat,(void *) &CairoGraphics_obj::TAN22,HX_("TAN22",41,f4,da,88)},
	{::hx::fsBool,(void *) &CairoGraphics_obj::allowSmoothing,HX_("allowSmoothing",ab,b7,66,68)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(void *) &CairoGraphics_obj::bitmapFill,HX_("bitmapFill",12,2e,19,35)},
	{::hx::fsBool,(void *) &CairoGraphics_obj::bitmapRepeat,HX_("bitmapRepeat",aa,38,9c,11)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(void *) &CairoGraphics_obj::bounds,HX_("bounds",75,86,1d,66)},
	{::hx::fsObject /*  ::lime::graphics::cairo::Cairo */ ,(void *) &CairoGraphics_obj::cairo,HX_("cairo",88,30,19,41)},
	{::hx::fsObject /*  ::openfl::display::_internal::DrawCommandBuffer */ ,(void *) &CairoGraphics_obj::fillCommands,HX_("fillCommands",6b,f6,c9,c2)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &CairoGraphics_obj::fillPattern,HX_("fillPattern",0d,86,12,35)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(void *) &CairoGraphics_obj::fillPatternMatrix,HX_("fillPatternMatrix",2e,b8,ae,97)},
	{::hx::fsObject /*  ::openfl::display::Graphics */ ,(void *) &CairoGraphics_obj::graphics,HX_("graphics",cb,f8,67,12)},
	{::hx::fsBool,(void *) &CairoGraphics_obj::hasFill,HX_("hasFill",fd,ee,ff,12)},
	{::hx::fsBool,(void *) &CairoGraphics_obj::hasStroke,HX_("hasStroke",b2,66,1d,52)},
	{::hx::fsBool,(void *) &CairoGraphics_obj::hitTesting,HX_("hitTesting",bd,65,48,19)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(void *) &CairoGraphics_obj::inversePendingMatrix,HX_("inversePendingMatrix",28,14,8c,bb)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(void *) &CairoGraphics_obj::pendingMatrix,HX_("pendingMatrix",f8,9d,96,b5)},
	{::hx::fsObject /*  ::openfl::display::_internal::DrawCommandBuffer */ ,(void *) &CairoGraphics_obj::strokeCommands,HX_("strokeCommands",a0,98,2a,67)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &CairoGraphics_obj::strokePattern,HX_("strokePattern",78,e1,21,7e)},
	{::hx::fsObject /*  ::lime::math::Matrix3 */ ,(void *) &CairoGraphics_obj::tempMatrix3,HX_("tempMatrix3",1e,f2,bd,79)},
	{::hx::fsFloat,(void *) &CairoGraphics_obj::worldAlpha,HX_("worldAlpha",ac,57,43,8d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void CairoGraphics_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::SIN45,"SIN45");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::TAN22,"TAN22");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::allowSmoothing,"allowSmoothing");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bitmapFill,"bitmapFill");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bitmapRepeat,"bitmapRepeat");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bounds,"bounds");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::cairo,"cairo");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillCommands,"fillCommands");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillPattern,"fillPattern");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillPatternMatrix,"fillPatternMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::graphics,"graphics");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hasFill,"hasFill");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hasStroke,"hasStroke");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hitTesting,"hitTesting");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::strokeCommands,"strokeCommands");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::strokePattern,"strokePattern");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::tempMatrix3,"tempMatrix3");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::worldAlpha,"worldAlpha");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CairoGraphics_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::SIN45,"SIN45");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::TAN22,"TAN22");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::allowSmoothing,"allowSmoothing");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bitmapFill,"bitmapFill");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bitmapRepeat,"bitmapRepeat");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bounds,"bounds");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::cairo,"cairo");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillCommands,"fillCommands");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillPattern,"fillPattern");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillPatternMatrix,"fillPatternMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::graphics,"graphics");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hasFill,"hasFill");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hasStroke,"hasStroke");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hitTesting,"hitTesting");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::strokeCommands,"strokeCommands");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::strokePattern,"strokePattern");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::tempMatrix3,"tempMatrix3");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::worldAlpha,"worldAlpha");
};

#endif

::hx::Class CairoGraphics_obj::__mClass;

static ::String CairoGraphics_obj_sStaticFields[] = {
	HX_("SIN45",79,16,be,fa),
	HX_("TAN22",41,f4,da,88),
	HX_("allowSmoothing",ab,b7,66,68),
	HX_("bitmapFill",12,2e,19,35),
	HX_("bitmapRepeat",aa,38,9c,11),
	HX_("bounds",75,86,1d,66),
	HX_("cairo",88,30,19,41),
	HX_("fillCommands",6b,f6,c9,c2),
	HX_("fillPattern",0d,86,12,35),
	HX_("fillPatternMatrix",2e,b8,ae,97),
	HX_("graphics",cb,f8,67,12),
	HX_("hasFill",fd,ee,ff,12),
	HX_("hasStroke",b2,66,1d,52),
	HX_("hitTesting",bd,65,48,19),
	HX_("inversePendingMatrix",28,14,8c,bb),
	HX_("pendingMatrix",f8,9d,96,b5),
	HX_("strokeCommands",a0,98,2a,67),
	HX_("strokePattern",78,e1,21,7e),
	HX_("tempMatrix3",1e,f2,bd,79),
	HX_("worldAlpha",ac,57,43,8d),
	HX_("closePath",7d,65,20,14),
	HX_("createGradientPattern",a4,ee,44,f6),
	HX_("createImagePattern",51,bd,5d,fb),
	HX_("drawRoundRect",ee,c3,aa,e2),
	HX_("endFill",fe,87,e0,25),
	HX_("endStroke",f3,01,17,51),
	HX_("hitTest",45,60,7f,e2),
	HX_("isCCW",0d,84,49,c1),
	HX_("normalizeUVT",66,09,2f,47),
	HX_("playCommands",dc,ae,ee,49),
	HX_("quadraticCurveTo",12,48,c3,82),
	HX_("render",56,6b,29,05),
	HX_("renderMask",62,3b,60,e5),
	::String(null())
};

void CairoGraphics_obj::__register()
{
	CairoGraphics_obj _hx_dummy;
	CairoGraphics_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.CairoGraphics",f7,a0,7f,ec);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoGraphics_obj::__GetStatic;
	__mClass->mSetStaticField = &CairoGraphics_obj::__SetStatic;
	__mClass->mMarkFunc = CairoGraphics_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CairoGraphics_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CairoGraphics_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CairoGraphics_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoGraphics_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoGraphics_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CairoGraphics_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_37_boot)
HXDLIN(  37)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_40_boot)
HXDLIN(  40)		SIN45 = ((Float)0.70710678118654752440084436210485);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_41_boot)
HXDLIN(  41)		TAN22 = ((Float)0.4142135623730950488016887242097);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_47_boot)
HXDLIN(  47)		fillCommands =  ::openfl::display::_internal::DrawCommandBuffer_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_56_boot)
HXDLIN(  56)		strokeCommands =  ::openfl::display::_internal::DrawCommandBuffer_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_58_boot)
HXDLIN(  58)		tempMatrix3 =  ::lime::math::Matrix3_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
