#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Bool
#include <openfl/display/ShaderParameter_Bool.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Int
#include <openfl/display/ShaderParameter_Int.h>
#endif
#ifndef INCLUDED_openfl_display__internal_ShaderBuffer
#include <openfl/display/_internal/ShaderBuffer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e0175c80fad344ef_56_new,"openfl.display._internal.ShaderBuffer","new",0x802bf873,"openfl.display._internal.ShaderBuffer.new","openfl/display/_internal/ShaderBuffer.hx",56,0xcaec823a)
HX_LOCAL_STACK_FRAME(_hx_pos_e0175c80fad344ef_79_addBoolOverride,"openfl.display._internal.ShaderBuffer","addBoolOverride",0x37c180ea,"openfl.display._internal.ShaderBuffer.addBoolOverride","openfl/display/_internal/ShaderBuffer.hx",79,0xcaec823a)
HX_LOCAL_STACK_FRAME(_hx_pos_e0175c80fad344ef_86_addFloatOverride,"openfl.display._internal.ShaderBuffer","addFloatOverride",0xfc948534,"openfl.display._internal.ShaderBuffer.addFloatOverride","openfl/display/_internal/ShaderBuffer.hx",86,0xcaec823a)
HX_LOCAL_STACK_FRAME(_hx_pos_e0175c80fad344ef_93_addIntOverride,"openfl.display._internal.ShaderBuffer","addIntOverride",0xf2cbf487,"openfl.display._internal.ShaderBuffer.addIntOverride","openfl/display/_internal/ShaderBuffer.hx",93,0xcaec823a)
HX_LOCAL_STACK_FRAME(_hx_pos_e0175c80fad344ef_100_clearOverride,"openfl.display._internal.ShaderBuffer","clearOverride",0x8ba142cc,"openfl.display._internal.ShaderBuffer.clearOverride","openfl/display/_internal/ShaderBuffer.hx",100,0xcaec823a)
HX_LOCAL_STACK_FRAME(_hx_pos_e0175c80fad344ef_108_update,"openfl.display._internal.ShaderBuffer","update",0xfb456bd6,"openfl.display._internal.ShaderBuffer.update","openfl/display/_internal/ShaderBuffer.hx",108,0xcaec823a)
HX_LOCAL_STACK_FRAME(_hx_pos_e0175c80fad344ef_20_boot,"openfl.display._internal.ShaderBuffer","boot",0x9e666cbf,"openfl.display._internal.ShaderBuffer.boot","openfl/display/_internal/ShaderBuffer.hx",20,0xcaec823a)
namespace openfl{
namespace display{
namespace _internal{

void ShaderBuffer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e0175c80fad344ef_56_new)
HXLINE(  57)		this->inputRefs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  58)		this->inputFilter = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  59)		this->inputMipFilter = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  60)		this->inputs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  61)		this->inputWrap = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  64)		this->overrideIntNames = ::Array_obj< ::String >::__new(0);
HXLINE(  65)		this->overrideIntValues = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  66)		this->overrideFloatNames = ::Array_obj< ::String >::__new(0);
HXLINE(  67)		this->overrideFloatValues = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  68)		this->overrideBoolNames = ::Array_obj< ::String >::__new(0);
HXLINE(  69)		this->overrideBoolValues = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  70)		this->paramLengths = ::Array_obj< int >::__new(0);
HXLINE(  71)		this->paramPositions = ::Array_obj< int >::__new(0);
HXLINE(  72)		this->paramRefs_Bool = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  73)		this->paramRefs_Float = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  74)		this->paramRefs_Int = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  75)		this->paramTypes = ::Array_obj< int >::__new(0);
            	}

Dynamic ShaderBuffer_obj::__CreateEmpty() { return new ShaderBuffer_obj; }

void *ShaderBuffer_obj::_hx_vtable = 0;

Dynamic ShaderBuffer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShaderBuffer_obj > _hx_result = new ShaderBuffer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ShaderBuffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4ccbe717;
}

void ShaderBuffer_obj::addBoolOverride(::String name,::Array< bool > values){
            	HX_STACKFRAME(&_hx_pos_e0175c80fad344ef_79_addBoolOverride)
HXLINE(  80)		this->overrideBoolNames[this->overrideBoolCount] = name;
HXLINE(  81)		this->overrideBoolValues[this->overrideBoolCount] = values;
HXLINE(  82)		this->overrideBoolCount++;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShaderBuffer_obj,addBoolOverride,(void))

void ShaderBuffer_obj::addFloatOverride(::String name,::Array< Float > values){
            	HX_STACKFRAME(&_hx_pos_e0175c80fad344ef_86_addFloatOverride)
HXLINE(  87)		this->overrideFloatNames[this->overrideFloatCount] = name;
HXLINE(  88)		this->overrideFloatValues[this->overrideFloatCount] = values;
HXLINE(  89)		this->overrideFloatCount++;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShaderBuffer_obj,addFloatOverride,(void))

void ShaderBuffer_obj::addIntOverride(::String name,::Array< int > values){
            	HX_STACKFRAME(&_hx_pos_e0175c80fad344ef_93_addIntOverride)
HXLINE(  94)		this->overrideIntNames[this->overrideIntCount] = name;
HXLINE(  95)		this->overrideIntValues[this->overrideIntCount] = values;
HXLINE(  96)		this->overrideIntCount++;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShaderBuffer_obj,addIntOverride,(void))

void ShaderBuffer_obj::clearOverride(){
            	HX_STACKFRAME(&_hx_pos_e0175c80fad344ef_100_clearOverride)
HXLINE( 102)		this->overrideIntCount = 0;
HXLINE( 103)		this->overrideFloatCount = 0;
HXLINE( 104)		this->overrideBoolCount = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderBuffer_obj,clearOverride,(void))

void ShaderBuffer_obj::update( ::openfl::display::GraphicsShader shader){
            	HX_GC_STACKFRAME(&_hx_pos_e0175c80fad344ef_108_update)
HXLINE( 110)		this->inputCount = 0;
HXLINE( 112)		this->overrideIntCount = 0;
HXLINE( 113)		this->overrideFloatCount = 0;
HXLINE( 114)		this->overrideBoolCount = 0;
HXLINE( 115)		this->paramBoolCount = 0;
HXLINE( 116)		this->paramCount = 0;
HXLINE( 117)		this->paramDataLength = 0;
HXLINE( 118)		this->paramFloatCount = 0;
HXLINE( 119)		this->paramIntCount = 0;
HXLINE( 120)		this->shader = null();
HXLINE( 122)		if (::hx::IsNull( shader )) {
HXLINE( 122)			return;
            		}
HXLINE( 124)		shader->_hx___init();
HXLINE( 126)		this->inputCount = shader->_hx___inputBitmapData->length;
HXLINE( 127)		 ::openfl::display::ShaderInput_openfl_display_BitmapData input;
HXLINE( 129)		{
HXLINE( 129)			int _g = 0;
HXDLIN( 129)			int _g1 = this->inputCount;
HXDLIN( 129)			while((_g < _g1)){
HXLINE( 129)				_g = (_g + 1);
HXDLIN( 129)				int i = (_g - 1);
HXLINE( 131)				input = shader->_hx___inputBitmapData->__get(i).StaticCast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >();
HXLINE( 132)				this->inputs[i] = input->input;
HXLINE( 133)				this->inputFilter[i] = input->filter;
HXLINE( 134)				this->inputMipFilter[i] = input->mipFilter;
HXLINE( 135)				this->inputRefs[i] = input;
HXLINE( 136)				this->inputWrap[i] = input->wrap;
            			}
            		}
HXLINE( 139)		int boolCount = shader->_hx___paramBool->length;
HXLINE( 140)		int floatCount = shader->_hx___paramFloat->length;
HXLINE( 141)		int intCount = shader->_hx___paramInt->length;
HXLINE( 142)		this->paramCount = ((boolCount + floatCount) + intCount);
HXLINE( 143)		this->paramBoolCount = boolCount;
HXLINE( 144)		this->paramFloatCount = floatCount;
HXLINE( 145)		this->paramIntCount = intCount;
HXLINE( 147)		int length = 0;
HXDLIN( 147)		int p = 0;
HXLINE( 148)		 ::openfl::display::ShaderParameter_Bool param;
HXLINE( 150)		{
HXLINE( 150)			int _g2 = 0;
HXDLIN( 150)			int _g3 = boolCount;
HXDLIN( 150)			while((_g2 < _g3)){
HXLINE( 150)				_g2 = (_g2 + 1);
HXDLIN( 150)				int i = (_g2 - 1);
HXLINE( 152)				param = shader->_hx___paramBool->__get(i).StaticCast<  ::openfl::display::ShaderParameter_Bool >();
HXLINE( 154)				this->paramPositions[p] = this->paramDataLength;
HXLINE( 155)				if (::hx::IsNotNull( param->value )) {
HXLINE( 155)					length = param->value->length;
            				}
            				else {
HXLINE( 155)					length = 0;
            				}
HXLINE( 156)				this->paramLengths[p] = length;
HXLINE( 157)				 ::openfl::display::_internal::ShaderBuffer _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 157)				_hx_tmp->paramDataLength = (_hx_tmp->paramDataLength + length);
HXLINE( 158)				this->paramTypes[p] = 0;
HXLINE( 160)				this->paramRefs_Bool[i] = param;
HXLINE( 161)				p = (p + 1);
            			}
            		}
HXLINE( 164)		 ::openfl::display::ShaderParameter_Float param1;
HXLINE( 166)		{
HXLINE( 166)			int _g4 = 0;
HXDLIN( 166)			int _g5 = floatCount;
HXDLIN( 166)			while((_g4 < _g5)){
HXLINE( 166)				_g4 = (_g4 + 1);
HXDLIN( 166)				int i = (_g4 - 1);
HXLINE( 168)				param1 = shader->_hx___paramFloat->__get(i).StaticCast<  ::openfl::display::ShaderParameter_Float >();
HXLINE( 170)				this->paramPositions[p] = this->paramDataLength;
HXLINE( 171)				if (::hx::IsNotNull( param1->value )) {
HXLINE( 171)					length = param1->value->length;
            				}
            				else {
HXLINE( 171)					length = 0;
            				}
HXLINE( 172)				this->paramLengths[p] = length;
HXLINE( 173)				 ::openfl::display::_internal::ShaderBuffer _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 173)				_hx_tmp->paramDataLength = (_hx_tmp->paramDataLength + length);
HXLINE( 174)				this->paramTypes[p] = 1;
HXLINE( 176)				this->paramRefs_Float[i] = param1;
HXLINE( 177)				p = (p + 1);
            			}
            		}
HXLINE( 180)		 ::openfl::display::ShaderParameter_Int param2;
HXLINE( 182)		{
HXLINE( 182)			int _g6 = 0;
HXDLIN( 182)			int _g7 = intCount;
HXDLIN( 182)			while((_g6 < _g7)){
HXLINE( 182)				_g6 = (_g6 + 1);
HXDLIN( 182)				int i = (_g6 - 1);
HXLINE( 184)				param2 = shader->_hx___paramInt->__get(i).StaticCast<  ::openfl::display::ShaderParameter_Int >();
HXLINE( 186)				this->paramPositions[p] = this->paramDataLength;
HXLINE( 187)				if (::hx::IsNotNull( param2->value )) {
HXLINE( 187)					length = param2->value->length;
            				}
            				else {
HXLINE( 187)					length = 0;
            				}
HXLINE( 188)				this->paramLengths[p] = length;
HXLINE( 189)				 ::openfl::display::_internal::ShaderBuffer _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)				_hx_tmp->paramDataLength = (_hx_tmp->paramDataLength + length);
HXLINE( 190)				this->paramTypes[p] = 2;
HXLINE( 192)				this->paramRefs_Int[i] = param2;
HXLINE( 193)				p = (p + 1);
            			}
            		}
HXLINE( 196)		if ((this->paramDataLength > 0)) {
HXLINE( 198)			if (::hx::IsNull( this->paramData )) {
HXLINE( 200)				 ::Dynamic elements = this->paramDataLength;
HXDLIN( 200)				 ::haxe::io::Bytes buffer = null();
HXDLIN( 200)				::cpp::VirtualArray array = null();
HXDLIN( 200)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 200)				 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 200)				 ::Dynamic len = null();
HXDLIN( 200)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 200)				if (::hx::IsNotNull( elements )) {
HXLINE( 200)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            				}
            				else {
HXLINE( 200)					if (::hx::IsNotNull( array )) {
HXLINE( 200)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 200)						_this->byteOffset = 0;
HXDLIN( 200)						_this->length = array->get_length();
HXDLIN( 200)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 200)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 200)						_this->buffer = this2;
HXDLIN( 200)						_this->copyFromArray(array,null());
HXDLIN( 200)						this1 = _this;
            					}
            					else {
HXLINE( 200)						if (::hx::IsNotNull( vector )) {
HXLINE( 200)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 200)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 200)							_this->byteOffset = 0;
HXDLIN( 200)							_this->length = array->get_length();
HXDLIN( 200)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 200)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 200)							_this->buffer = this2;
HXDLIN( 200)							_this->copyFromArray(array,null());
HXDLIN( 200)							this1 = _this;
            						}
            						else {
HXLINE( 200)							if (::hx::IsNotNull( view )) {
HXLINE( 200)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 200)								 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 200)								int srcLength = view->length;
HXDLIN( 200)								int srcByteOffset = view->byteOffset;
HXDLIN( 200)								int srcElementSize = view->bytesPerElement;
HXDLIN( 200)								int elementSize = _this->bytesPerElement;
HXDLIN( 200)								if ((view->type == _this->type)) {
HXLINE( 200)									int srcLength = srcData->length;
HXDLIN( 200)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 200)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 200)									_this->buffer = this1;
HXDLIN( 200)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 200)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 200)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 200)								_this->byteOffset = 0;
HXDLIN( 200)								_this->length = srcLength;
HXDLIN( 200)								this1 = _this;
            							}
            							else {
HXLINE( 200)								if (::hx::IsNotNull( buffer )) {
HXLINE( 200)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 200)									int in_byteOffset = 0;
HXDLIN( 200)									if ((in_byteOffset < 0)) {
HXLINE( 200)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 200)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 200)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 200)									int bufferByteLength = buffer->length;
HXDLIN( 200)									int elementSize = _this->bytesPerElement;
HXDLIN( 200)									int newByteLength = bufferByteLength;
HXDLIN( 200)									if (::hx::IsNull( len )) {
HXLINE( 200)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 200)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 200)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 200)										if ((newByteLength < 0)) {
HXLINE( 200)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 200)										newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 200)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 200)										if ((newRange > bufferByteLength)) {
HXLINE( 200)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 200)									_this->buffer = buffer;
HXDLIN( 200)									_this->byteOffset = in_byteOffset;
HXDLIN( 200)									_this->byteLength = newByteLength;
HXDLIN( 200)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 200)									this1 = _this;
            								}
            								else {
HXLINE( 200)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 200)				this->paramData = this1;
            			}
            			else {
HXLINE( 202)				if ((this->paramDataLength > this->paramData->length)) {
HXLINE( 204)					 ::Dynamic elements = this->paramDataLength;
HXDLIN( 204)					 ::haxe::io::Bytes buffer = null();
HXDLIN( 204)					::cpp::VirtualArray array = null();
HXDLIN( 204)					 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 204)					 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 204)					 ::Dynamic len = null();
HXDLIN( 204)					 ::lime::utils::ArrayBufferView this1;
HXDLIN( 204)					if (::hx::IsNotNull( elements )) {
HXLINE( 204)						this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            					}
            					else {
HXLINE( 204)						if (::hx::IsNotNull( array )) {
HXLINE( 204)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 204)							_this->byteOffset = 0;
HXDLIN( 204)							_this->length = array->get_length();
HXDLIN( 204)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 204)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 204)							_this->buffer = this2;
HXDLIN( 204)							_this->copyFromArray(array,null());
HXDLIN( 204)							this1 = _this;
            						}
            						else {
HXLINE( 204)							if (::hx::IsNotNull( vector )) {
HXLINE( 204)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 204)								::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 204)								_this->byteOffset = 0;
HXDLIN( 204)								_this->length = array->get_length();
HXDLIN( 204)								_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 204)								 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 204)								_this->buffer = this2;
HXDLIN( 204)								_this->copyFromArray(array,null());
HXDLIN( 204)								this1 = _this;
            							}
            							else {
HXLINE( 204)								if (::hx::IsNotNull( view )) {
HXLINE( 204)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 204)									 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 204)									int srcLength = view->length;
HXDLIN( 204)									int srcByteOffset = view->byteOffset;
HXDLIN( 204)									int srcElementSize = view->bytesPerElement;
HXDLIN( 204)									int elementSize = _this->bytesPerElement;
HXDLIN( 204)									if ((view->type == _this->type)) {
HXLINE( 204)										int srcLength = srcData->length;
HXDLIN( 204)										int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 204)										 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 204)										_this->buffer = this1;
HXDLIN( 204)										_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            									}
            									else {
HXLINE( 204)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            									}
HXDLIN( 204)									_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 204)									_this->byteOffset = 0;
HXDLIN( 204)									_this->length = srcLength;
HXDLIN( 204)									this1 = _this;
            								}
            								else {
HXLINE( 204)									if (::hx::IsNotNull( buffer )) {
HXLINE( 204)										 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 204)										int in_byteOffset = 0;
HXDLIN( 204)										if ((in_byteOffset < 0)) {
HXLINE( 204)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 204)										if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 204)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 204)										int bufferByteLength = buffer->length;
HXDLIN( 204)										int elementSize = _this->bytesPerElement;
HXDLIN( 204)										int newByteLength = bufferByteLength;
HXDLIN( 204)										if (::hx::IsNull( len )) {
HXLINE( 204)											newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 204)											if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 204)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            											}
HXDLIN( 204)											if ((newByteLength < 0)) {
HXLINE( 204)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            											}
            										}
            										else {
HXLINE( 204)											newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 204)											int newRange = (in_byteOffset + newByteLength);
HXDLIN( 204)											if ((newRange > bufferByteLength)) {
HXLINE( 204)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            											}
            										}
HXDLIN( 204)										_this->buffer = buffer;
HXDLIN( 204)										_this->byteOffset = in_byteOffset;
HXDLIN( 204)										_this->byteLength = newByteLength;
HXDLIN( 204)										_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 204)										this1 = _this;
            									}
            									else {
HXLINE( 204)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            									}
            								}
            							}
            						}
            					}
HXDLIN( 204)					 ::lime::utils::ArrayBufferView data = this1;
HXLINE( 205)					{
HXLINE( 205)						 ::lime::utils::ArrayBufferView view1 = this->paramData;
HXDLIN( 205)						::cpp::VirtualArray array1 = null();
HXDLIN( 205)						int offset = 0;
HXDLIN( 205)						bool _hx_tmp;
HXDLIN( 205)						if (::hx::IsNotNull( view1 )) {
HXLINE( 205)							_hx_tmp = ::hx::IsNull( array1 );
            						}
            						else {
HXLINE( 205)							_hx_tmp = false;
            						}
HXDLIN( 205)						if (_hx_tmp) {
HXLINE( 205)							data->buffer->blit((offset * data->bytesPerElement),view1->buffer,view1->byteOffset,view1->byteLength);
            						}
            						else {
HXLINE( 205)							bool _hx_tmp;
HXDLIN( 205)							if (::hx::IsNotNull( array1 )) {
HXLINE( 205)								_hx_tmp = ::hx::IsNull( view1 );
            							}
            							else {
HXLINE( 205)								_hx_tmp = false;
            							}
HXDLIN( 205)							if (_hx_tmp) {
HXLINE( 205)								data->copyFromArray(array1,offset);
            							}
            							else {
HXLINE( 205)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid .set call. either view, or array must be not-null.",64,ba,b7,6c)));
            							}
            						}
            					}
HXLINE( 206)					this->paramData = data;
            				}
            			}
            		}
HXLINE( 210)		int boolIndex = 0;
HXLINE( 211)		int floatIndex = 0;
HXLINE( 212)		int intIndex = 0;
HXLINE( 214)		int paramPosition = 0;
HXLINE( 215)		 ::openfl::display::ShaderParameter_Bool boolParam;
HXDLIN( 215)		 ::openfl::display::ShaderParameter_Float floatParam;
HXDLIN( 215)		 ::openfl::display::ShaderParameter_Int intParam;
HXDLIN( 215)		int length1;
HXLINE( 217)		{
HXLINE( 217)			int _g8 = 0;
HXDLIN( 217)			int _g9 = this->paramCount;
HXDLIN( 217)			while((_g8 < _g9)){
HXLINE( 217)				_g8 = (_g8 + 1);
HXDLIN( 217)				int i = (_g8 - 1);
HXLINE( 219)				length1 = this->paramLengths->__get(i);
HXLINE( 221)				if ((i < boolCount)) {
HXLINE( 223)					boolParam = this->paramRefs_Bool->__get(boolIndex).StaticCast<  ::openfl::display::ShaderParameter_Bool >();
HXLINE( 224)					boolIndex = (boolIndex + 1);
HXLINE( 226)					{
HXLINE( 226)						int _g = 0;
HXDLIN( 226)						int _g1 = length1;
HXDLIN( 226)						while((_g < _g1)){
HXLINE( 226)							_g = (_g + 1);
HXDLIN( 226)							int j = (_g - 1);
HXLINE( 228)							{
HXLINE( 228)								 ::lime::utils::ArrayBufferView this1 = this->paramData;
HXDLIN( 228)								Float val;
HXDLIN( 228)								if (boolParam->value->__get(j)) {
HXLINE( 228)									val = ( (Float)(1) );
            								}
            								else {
HXLINE( 228)									val = ( (Float)(0) );
            								}
HXDLIN( 228)								 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (paramPosition * 4)),val);
            							}
HXLINE( 229)							paramPosition = (paramPosition + 1);
            						}
            					}
            				}
            				else {
HXLINE( 232)					if ((i < (boolCount + floatCount))) {
HXLINE( 234)						floatParam = this->paramRefs_Float->__get(floatIndex).StaticCast<  ::openfl::display::ShaderParameter_Float >();
HXLINE( 235)						floatIndex = (floatIndex + 1);
HXLINE( 237)						{
HXLINE( 237)							int _g = 0;
HXDLIN( 237)							int _g1 = length1;
HXDLIN( 237)							while((_g < _g1)){
HXLINE( 237)								_g = (_g + 1);
HXDLIN( 237)								int j = (_g - 1);
HXLINE( 239)								{
HXLINE( 239)									 ::lime::utils::ArrayBufferView this1 = this->paramData;
HXDLIN( 239)									Float val = floatParam->value->__get(j);
HXDLIN( 239)									 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (paramPosition * 4)),val);
            								}
HXLINE( 240)								paramPosition = (paramPosition + 1);
            							}
            						}
            					}
            					else {
HXLINE( 245)						intParam = this->paramRefs_Int->__get(intIndex).StaticCast<  ::openfl::display::ShaderParameter_Int >();
HXLINE( 246)						intIndex = (intIndex + 1);
HXLINE( 248)						{
HXLINE( 248)							int _g = 0;
HXDLIN( 248)							int _g1 = length1;
HXDLIN( 248)							while((_g < _g1)){
HXLINE( 248)								_g = (_g + 1);
HXDLIN( 248)								int j = (_g - 1);
HXLINE( 250)								{
HXLINE( 250)									 ::lime::utils::ArrayBufferView this1 = this->paramData;
HXDLIN( 250)									Float val = ( (Float)(intParam->value->__get(j)) );
HXDLIN( 250)									 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (paramPosition * 4)),val);
            								}
HXLINE( 251)								paramPosition = (paramPosition + 1);
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 256)		this->shader = shader;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderBuffer_obj,update,(void))


::hx::ObjectPtr< ShaderBuffer_obj > ShaderBuffer_obj::__new() {
	::hx::ObjectPtr< ShaderBuffer_obj > __this = new ShaderBuffer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ShaderBuffer_obj > ShaderBuffer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ShaderBuffer_obj *__this = (ShaderBuffer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShaderBuffer_obj), true, "openfl.display._internal.ShaderBuffer"));
	*(void **)__this = ShaderBuffer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ShaderBuffer_obj::ShaderBuffer_obj()
{
}

void ShaderBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderBuffer);
	HX_MARK_MEMBER_NAME(inputCount,"inputCount");
	HX_MARK_MEMBER_NAME(inputRefs,"inputRefs");
	HX_MARK_MEMBER_NAME(inputFilter,"inputFilter");
	HX_MARK_MEMBER_NAME(inputMipFilter,"inputMipFilter");
	HX_MARK_MEMBER_NAME(inputs,"inputs");
	HX_MARK_MEMBER_NAME(inputWrap,"inputWrap");
	HX_MARK_MEMBER_NAME(overrideBoolCount,"overrideBoolCount");
	HX_MARK_MEMBER_NAME(overrideBoolNames,"overrideBoolNames");
	HX_MARK_MEMBER_NAME(overrideBoolValues,"overrideBoolValues");
	HX_MARK_MEMBER_NAME(overrideFloatCount,"overrideFloatCount");
	HX_MARK_MEMBER_NAME(overrideFloatNames,"overrideFloatNames");
	HX_MARK_MEMBER_NAME(overrideFloatValues,"overrideFloatValues");
	HX_MARK_MEMBER_NAME(overrideIntCount,"overrideIntCount");
	HX_MARK_MEMBER_NAME(overrideIntNames,"overrideIntNames");
	HX_MARK_MEMBER_NAME(overrideIntValues,"overrideIntValues");
	HX_MARK_MEMBER_NAME(paramBoolCount,"paramBoolCount");
	HX_MARK_MEMBER_NAME(paramCount,"paramCount");
	HX_MARK_MEMBER_NAME(paramData,"paramData");
	HX_MARK_MEMBER_NAME(paramDataBuffer,"paramDataBuffer");
	HX_MARK_MEMBER_NAME(paramDataLength,"paramDataLength");
	HX_MARK_MEMBER_NAME(paramFloatCount,"paramFloatCount");
	HX_MARK_MEMBER_NAME(paramIntCount,"paramIntCount");
	HX_MARK_MEMBER_NAME(paramLengths,"paramLengths");
	HX_MARK_MEMBER_NAME(paramPositions,"paramPositions");
	HX_MARK_MEMBER_NAME(paramRefs_Bool,"paramRefs_Bool");
	HX_MARK_MEMBER_NAME(paramRefs_Float,"paramRefs_Float");
	HX_MARK_MEMBER_NAME(paramRefs_Int,"paramRefs_Int");
	HX_MARK_MEMBER_NAME(paramTypes,"paramTypes");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_END_CLASS();
}

void ShaderBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(inputCount,"inputCount");
	HX_VISIT_MEMBER_NAME(inputRefs,"inputRefs");
	HX_VISIT_MEMBER_NAME(inputFilter,"inputFilter");
	HX_VISIT_MEMBER_NAME(inputMipFilter,"inputMipFilter");
	HX_VISIT_MEMBER_NAME(inputs,"inputs");
	HX_VISIT_MEMBER_NAME(inputWrap,"inputWrap");
	HX_VISIT_MEMBER_NAME(overrideBoolCount,"overrideBoolCount");
	HX_VISIT_MEMBER_NAME(overrideBoolNames,"overrideBoolNames");
	HX_VISIT_MEMBER_NAME(overrideBoolValues,"overrideBoolValues");
	HX_VISIT_MEMBER_NAME(overrideFloatCount,"overrideFloatCount");
	HX_VISIT_MEMBER_NAME(overrideFloatNames,"overrideFloatNames");
	HX_VISIT_MEMBER_NAME(overrideFloatValues,"overrideFloatValues");
	HX_VISIT_MEMBER_NAME(overrideIntCount,"overrideIntCount");
	HX_VISIT_MEMBER_NAME(overrideIntNames,"overrideIntNames");
	HX_VISIT_MEMBER_NAME(overrideIntValues,"overrideIntValues");
	HX_VISIT_MEMBER_NAME(paramBoolCount,"paramBoolCount");
	HX_VISIT_MEMBER_NAME(paramCount,"paramCount");
	HX_VISIT_MEMBER_NAME(paramData,"paramData");
	HX_VISIT_MEMBER_NAME(paramDataBuffer,"paramDataBuffer");
	HX_VISIT_MEMBER_NAME(paramDataLength,"paramDataLength");
	HX_VISIT_MEMBER_NAME(paramFloatCount,"paramFloatCount");
	HX_VISIT_MEMBER_NAME(paramIntCount,"paramIntCount");
	HX_VISIT_MEMBER_NAME(paramLengths,"paramLengths");
	HX_VISIT_MEMBER_NAME(paramPositions,"paramPositions");
	HX_VISIT_MEMBER_NAME(paramRefs_Bool,"paramRefs_Bool");
	HX_VISIT_MEMBER_NAME(paramRefs_Float,"paramRefs_Float");
	HX_VISIT_MEMBER_NAME(paramRefs_Int,"paramRefs_Int");
	HX_VISIT_MEMBER_NAME(paramTypes,"paramTypes");
	HX_VISIT_MEMBER_NAME(shader,"shader");
}

::hx::Val ShaderBuffer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"inputs") ) { return ::hx::Val( inputs ); }
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inputRefs") ) { return ::hx::Val( inputRefs ); }
		if (HX_FIELD_EQ(inName,"inputWrap") ) { return ::hx::Val( inputWrap ); }
		if (HX_FIELD_EQ(inName,"paramData") ) { return ::hx::Val( paramData ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"inputCount") ) { return ::hx::Val( inputCount ); }
		if (HX_FIELD_EQ(inName,"paramCount") ) { return ::hx::Val( paramCount ); }
		if (HX_FIELD_EQ(inName,"paramTypes") ) { return ::hx::Val( paramTypes ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inputFilter") ) { return ::hx::Val( inputFilter ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"paramLengths") ) { return ::hx::Val( paramLengths ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"paramIntCount") ) { return ::hx::Val( paramIntCount ); }
		if (HX_FIELD_EQ(inName,"paramRefs_Int") ) { return ::hx::Val( paramRefs_Int ); }
		if (HX_FIELD_EQ(inName,"clearOverride") ) { return ::hx::Val( clearOverride_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inputMipFilter") ) { return ::hx::Val( inputMipFilter ); }
		if (HX_FIELD_EQ(inName,"paramBoolCount") ) { return ::hx::Val( paramBoolCount ); }
		if (HX_FIELD_EQ(inName,"paramPositions") ) { return ::hx::Val( paramPositions ); }
		if (HX_FIELD_EQ(inName,"paramRefs_Bool") ) { return ::hx::Val( paramRefs_Bool ); }
		if (HX_FIELD_EQ(inName,"addIntOverride") ) { return ::hx::Val( addIntOverride_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"paramDataBuffer") ) { return ::hx::Val( paramDataBuffer ); }
		if (HX_FIELD_EQ(inName,"paramDataLength") ) { return ::hx::Val( paramDataLength ); }
		if (HX_FIELD_EQ(inName,"paramFloatCount") ) { return ::hx::Val( paramFloatCount ); }
		if (HX_FIELD_EQ(inName,"paramRefs_Float") ) { return ::hx::Val( paramRefs_Float ); }
		if (HX_FIELD_EQ(inName,"addBoolOverride") ) { return ::hx::Val( addBoolOverride_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"overrideIntCount") ) { return ::hx::Val( overrideIntCount ); }
		if (HX_FIELD_EQ(inName,"overrideIntNames") ) { return ::hx::Val( overrideIntNames ); }
		if (HX_FIELD_EQ(inName,"addFloatOverride") ) { return ::hx::Val( addFloatOverride_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"overrideBoolCount") ) { return ::hx::Val( overrideBoolCount ); }
		if (HX_FIELD_EQ(inName,"overrideBoolNames") ) { return ::hx::Val( overrideBoolNames ); }
		if (HX_FIELD_EQ(inName,"overrideIntValues") ) { return ::hx::Val( overrideIntValues ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"overrideBoolValues") ) { return ::hx::Val( overrideBoolValues ); }
		if (HX_FIELD_EQ(inName,"overrideFloatCount") ) { return ::hx::Val( overrideFloatCount ); }
		if (HX_FIELD_EQ(inName,"overrideFloatNames") ) { return ::hx::Val( overrideFloatNames ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"overrideFloatValues") ) { return ::hx::Val( overrideFloatValues ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ShaderBuffer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"inputs") ) { inputs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::openfl::display::GraphicsShader >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inputRefs") ) { inputRefs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputWrap") ) { inputWrap=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paramData") ) { paramData=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"inputCount") ) { inputCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paramCount") ) { paramCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paramTypes") ) { paramTypes=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inputFilter") ) { inputFilter=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"paramLengths") ) { paramLengths=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"paramIntCount") ) { paramIntCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paramRefs_Int") ) { paramRefs_Int=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inputMipFilter") ) { inputMipFilter=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paramBoolCount") ) { paramBoolCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paramPositions") ) { paramPositions=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paramRefs_Bool") ) { paramRefs_Bool=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"paramDataBuffer") ) { paramDataBuffer=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paramDataLength") ) { paramDataLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paramFloatCount") ) { paramFloatCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paramRefs_Float") ) { paramRefs_Float=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"overrideIntCount") ) { overrideIntCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"overrideIntNames") ) { overrideIntNames=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"overrideBoolCount") ) { overrideBoolCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"overrideBoolNames") ) { overrideBoolNames=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"overrideIntValues") ) { overrideIntValues=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"overrideBoolValues") ) { overrideBoolValues=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"overrideFloatCount") ) { overrideFloatCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"overrideFloatNames") ) { overrideFloatNames=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"overrideFloatValues") ) { overrideFloatValues=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("inputCount",65,0c,9e,c8));
	outFields->push(HX_("inputRefs",ea,0c,d2,12));
	outFields->push(HX_("inputFilter",62,fb,68,7a));
	outFields->push(HX_("inputMipFilter",02,57,6d,70));
	outFields->push(HX_("inputs",29,c5,ed,9b));
	outFields->push(HX_("inputWrap",f4,f6,29,16));
	outFields->push(HX_("overrideBoolCount",59,ec,e5,8e));
	outFields->push(HX_("overrideBoolNames",52,37,07,db));
	outFields->push(HX_("overrideBoolValues",18,f5,86,fd));
	outFields->push(HX_("overrideFloatCount",ff,96,1b,77));
	outFields->push(HX_("overrideFloatNames",f8,e1,3c,c3));
	outFields->push(HX_("overrideFloatValues",b2,9b,46,44));
	outFields->push(HX_("overrideIntCount",cc,6f,57,cd));
	outFields->push(HX_("overrideIntNames",c5,ba,78,19));
	outFields->push(HX_("overrideIntValues",45,76,68,62));
	outFields->push(HX_("paramBoolCount",f8,3d,05,d8));
	outFields->push(HX_("paramCount",02,15,9d,ba));
	outFields->push(HX_("paramData",57,cd,d1,32));
	outFields->push(HX_("paramDataBuffer",b7,19,9e,7c));
	outFields->push(HX_("paramDataLength",9d,f1,10,4b));
	outFields->push(HX_("paramFloatCount",80,b0,63,29));
	outFields->push(HX_("paramIntCount",0d,77,5e,ea));
	outFields->push(HX_("paramLengths",c0,37,0f,d6));
	outFields->push(HX_("paramPositions",5d,59,23,07));
	outFields->push(HX_("paramRefs_Bool",1c,ca,d6,22));
	outFields->push(HX_("paramRefs_Float",6a,b3,b8,a4));
	outFields->push(HX_("paramRefs_Int",3d,4b,6b,76));
	outFields->push(HX_("paramTypes",ac,40,05,8b));
	outFields->push(HX_("shader",25,bf,20,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ShaderBuffer_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ShaderBuffer_obj,inputCount),HX_("inputCount",65,0c,9e,c8)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ShaderBuffer_obj,inputRefs),HX_("inputRefs",ea,0c,d2,12)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ShaderBuffer_obj,inputFilter),HX_("inputFilter",62,fb,68,7a)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ShaderBuffer_obj,inputMipFilter),HX_("inputMipFilter",02,57,6d,70)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ShaderBuffer_obj,inputs),HX_("inputs",29,c5,ed,9b)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ShaderBuffer_obj,inputWrap),HX_("inputWrap",f4,f6,29,16)},
	{::hx::fsInt,(int)offsetof(ShaderBuffer_obj,overrideBoolCount),HX_("overrideBoolCount",59,ec,e5,8e)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(ShaderBuffer_obj,overrideBoolNames),HX_("overrideBoolNames",52,37,07,db)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ShaderBuffer_obj,overrideBoolValues),HX_("overrideBoolValues",18,f5,86,fd)},
	{::hx::fsInt,(int)offsetof(ShaderBuffer_obj,overrideFloatCount),HX_("overrideFloatCount",ff,96,1b,77)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(ShaderBuffer_obj,overrideFloatNames),HX_("overrideFloatNames",f8,e1,3c,c3)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ShaderBuffer_obj,overrideFloatValues),HX_("overrideFloatValues",b2,9b,46,44)},
	{::hx::fsInt,(int)offsetof(ShaderBuffer_obj,overrideIntCount),HX_("overrideIntCount",cc,6f,57,cd)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(ShaderBuffer_obj,overrideIntNames),HX_("overrideIntNames",c5,ba,78,19)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ShaderBuffer_obj,overrideIntValues),HX_("overrideIntValues",45,76,68,62)},
	{::hx::fsInt,(int)offsetof(ShaderBuffer_obj,paramBoolCount),HX_("paramBoolCount",f8,3d,05,d8)},
	{::hx::fsInt,(int)offsetof(ShaderBuffer_obj,paramCount),HX_("paramCount",02,15,9d,ba)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(int)offsetof(ShaderBuffer_obj,paramData),HX_("paramData",57,cd,d1,32)},
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(ShaderBuffer_obj,paramDataBuffer),HX_("paramDataBuffer",b7,19,9e,7c)},
	{::hx::fsInt,(int)offsetof(ShaderBuffer_obj,paramDataLength),HX_("paramDataLength",9d,f1,10,4b)},
	{::hx::fsInt,(int)offsetof(ShaderBuffer_obj,paramFloatCount),HX_("paramFloatCount",80,b0,63,29)},
	{::hx::fsInt,(int)offsetof(ShaderBuffer_obj,paramIntCount),HX_("paramIntCount",0d,77,5e,ea)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(ShaderBuffer_obj,paramLengths),HX_("paramLengths",c0,37,0f,d6)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(ShaderBuffer_obj,paramPositions),HX_("paramPositions",5d,59,23,07)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ShaderBuffer_obj,paramRefs_Bool),HX_("paramRefs_Bool",1c,ca,d6,22)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ShaderBuffer_obj,paramRefs_Float),HX_("paramRefs_Float",6a,b3,b8,a4)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ShaderBuffer_obj,paramRefs_Int),HX_("paramRefs_Int",3d,4b,6b,76)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(ShaderBuffer_obj,paramTypes),HX_("paramTypes",ac,40,05,8b)},
	{::hx::fsObject /*  ::openfl::display::GraphicsShader */ ,(int)offsetof(ShaderBuffer_obj,shader),HX_("shader",25,bf,20,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ShaderBuffer_obj_sStaticStorageInfo = 0;
#endif

static ::String ShaderBuffer_obj_sMemberFields[] = {
	HX_("inputCount",65,0c,9e,c8),
	HX_("inputRefs",ea,0c,d2,12),
	HX_("inputFilter",62,fb,68,7a),
	HX_("inputMipFilter",02,57,6d,70),
	HX_("inputs",29,c5,ed,9b),
	HX_("inputWrap",f4,f6,29,16),
	HX_("overrideBoolCount",59,ec,e5,8e),
	HX_("overrideBoolNames",52,37,07,db),
	HX_("overrideBoolValues",18,f5,86,fd),
	HX_("overrideFloatCount",ff,96,1b,77),
	HX_("overrideFloatNames",f8,e1,3c,c3),
	HX_("overrideFloatValues",b2,9b,46,44),
	HX_("overrideIntCount",cc,6f,57,cd),
	HX_("overrideIntNames",c5,ba,78,19),
	HX_("overrideIntValues",45,76,68,62),
	HX_("paramBoolCount",f8,3d,05,d8),
	HX_("paramCount",02,15,9d,ba),
	HX_("paramData",57,cd,d1,32),
	HX_("paramDataBuffer",b7,19,9e,7c),
	HX_("paramDataLength",9d,f1,10,4b),
	HX_("paramFloatCount",80,b0,63,29),
	HX_("paramIntCount",0d,77,5e,ea),
	HX_("paramLengths",c0,37,0f,d6),
	HX_("paramPositions",5d,59,23,07),
	HX_("paramRefs_Bool",1c,ca,d6,22),
	HX_("paramRefs_Float",6a,b3,b8,a4),
	HX_("paramRefs_Int",3d,4b,6b,76),
	HX_("paramTypes",ac,40,05,8b),
	HX_("shader",25,bf,20,1d),
	HX_("addBoolOverride",57,08,04,13),
	HX_("addFloatOverride",27,7d,88,fb),
	HX_("addIntOverride",ba,f9,4d,c9),
	HX_("clearOverride",f9,24,85,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class ShaderBuffer_obj::__mClass;

void ShaderBuffer_obj::__register()
{
	ShaderBuffer_obj _hx_dummy;
	ShaderBuffer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.ShaderBuffer",01,43,2c,ef);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShaderBuffer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShaderBuffer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderBuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderBuffer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ShaderBuffer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e0175c80fad344ef_20_boot)
HXDLIN(  20)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("overrideIntValues",45,76,68,62), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))))
            			->setFixed(1,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
