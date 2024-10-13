#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_text__internal_CSSParser
#include <openfl/text/_internal/CSSParser.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ca3ccb00e898dca3_13_new,"openfl.text._internal.CSSParser","new",0x07a5b65f,"openfl.text._internal.CSSParser.new","openfl/text/_internal/CSSParser.hx",13,0xe8359bd2)
HX_LOCAL_STACK_FRAME(_hx_pos_ca3ccb00e898dca3_36_stripComments,"openfl.text._internal.CSSParser","stripComments",0x50263aeb,"openfl.text._internal.CSSParser.stripComments","openfl/text/_internal/CSSParser.hx",36,0xe8359bd2)
HX_LOCAL_STACK_FRAME(_hx_pos_ca3ccb00e898dca3_49_parseRules,"openfl.text._internal.CSSParser","parseRules",0x295c12a5,"openfl.text._internal.CSSParser.parseRules","openfl/text/_internal/CSSParser.hx",49,0xe8359bd2)
HX_LOCAL_STACK_FRAME(_hx_pos_ca3ccb00e898dca3_123_findCorrespondingRule,"openfl.text._internal.CSSParser","findCorrespondingRule",0x1538e655,"openfl.text._internal.CSSParser.findCorrespondingRule","openfl/text/_internal/CSSParser.hx",123,0xe8359bd2)
HX_LOCAL_STACK_FRAME(_hx_pos_ca3ccb00e898dca3_145_findBySelector,"openfl.text._internal.CSSParser","findBySelector",0x599e9610,"openfl.text._internal.CSSParser.findBySelector","openfl/text/_internal/CSSParser.hx",145,0xe8359bd2)
HX_LOCAL_STACK_FRAME(_hx_pos_ca3ccb00e898dca3_186_deleteBySelector,"openfl.text._internal.CSSParser","deleteBySelector",0xa15a42c2,"openfl.text._internal.CSSParser.deleteBySelector","openfl/text/_internal/CSSParser.hx",186,0xe8359bd2)
HX_LOCAL_STACK_FRAME(_hx_pos_ca3ccb00e898dca3_203_compress,"openfl.text._internal.CSSParser","compress",0x05704543,"openfl.text._internal.CSSParser.compress","openfl/text/_internal/CSSParser.hx",203,0xe8359bd2)
HX_LOCAL_STACK_FRAME(_hx_pos_ca3ccb00e898dca3_243_diff,"openfl.text._internal.CSSParser","diff",0xa2c0b526,"openfl.text._internal.CSSParser.diff","openfl/text/_internal/CSSParser.hx",243,0xe8359bd2)
HX_LOCAL_STACK_FRAME(_hx_pos_ca3ccb00e898dca3_319_intelligentMerge,"openfl.text._internal.CSSParser","intelligentMerge",0xa461b762,"openfl.text._internal.CSSParser.intelligentMerge","openfl/text/_internal/CSSParser.hx",319,0xe8359bd2)
HX_LOCAL_STACK_FRAME(_hx_pos_ca3ccb00e898dca3_344_intelligentCSSPush,"openfl.text._internal.CSSParser","intelligentCSSPush",0x0ef15667,"openfl.text._internal.CSSParser.intelligentCSSPush","openfl/text/_internal/CSSParser.hx",344,0xe8359bd2)
HX_LOCAL_STACK_FRAME(_hx_pos_ca3ccb00e898dca3_417_compactRules,"openfl.text._internal.CSSParser","compactRules",0x4b959b75,"openfl.text._internal.CSSParser.compactRules","openfl/text/_internal/CSSParser.hx",417,0xe8359bd2)
HX_LOCAL_STACK_FRAME(_hx_pos_ca3ccb00e898dca3_435_getImports,"openfl.text._internal.CSSParser","getImports",0xc7508559,"openfl.text._internal.CSSParser.getImports","openfl/text/_internal/CSSParser.hx",435,0xe8359bd2)
HX_LOCAL_STACK_FRAME(_hx_pos_ca3ccb00e898dca3_455_parse,"openfl.text._internal.CSSParser","parse",0xa96c33f2,"openfl.text._internal.CSSParser.parse","openfl/text/_internal/CSSParser.hx",455,0xe8359bd2)
HX_LOCAL_STACK_FRAME(_hx_pos_ca3ccb00e898dca3_607_getMatches,"openfl.text._internal.CSSParser","getMatches",0xe7022ade,"openfl.text._internal.CSSParser.getMatches","openfl/text/_internal/CSSParser.hx",607,0xe8359bd2)
namespace openfl{
namespace text{
namespace _internal{

void CSSParser_obj::__construct( ::haxe::ds::StringMap options){
            	HX_GC_STACKFRAME(&_hx_pos_ca3ccb00e898dca3_13_new)
HXLINE(  26)		this->importRegex =  ::EReg_obj::__alloc( HX_CTX ,HX_("@import .*?;",b3,0e,97,b2),HX_("ig",de,5b,00,00));
HXLINE(  25)		this->commentRegex = HX_("(\\/\\*[\\s\\S]*?\\*\\/)",b6,b7,56,aa);
HXLINE(  24)		this->combinedCSSRegex = HX_("((\\s*?(?:\\/\\*[\\s\\S]*?\\*\\/)?\\s*?@media[\\s\\S]*?){([\\s\\S]*?)}\\s*?})|(([\\s\\S]*?){([\\s\\S]*?)*?})",76,57,74,ce);
HXLINE(  23)		this->keyframeRegex = HX_("((@.*?keyframes [\\s\\S]*?){([\\s\\S]*?}\\s*?)})",04,8d,5e,3b);
HXLINE(  22)		this->mediaQueryRegex = HX_("((@media [\\s\\S]*?){([\\s\\S]*?}\\s*?)})",c6,68,b5,92);
HXLINE(  21)		this->cssRegex =  ::EReg_obj::__alloc( HX_CTX ,HX_("([\\s\\S]*?){([\\s\\S]*?)*}",0e,f5,de,0e),HX_("ig",de,5b,00,00));
HXLINE(  19)		this->keyframeStatements = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  18)		this->importStatements = ::cpp::VirtualArray_obj::__new(0);
            	}

Dynamic CSSParser_obj::__CreateEmpty() { return new CSSParser_obj; }

void *CSSParser_obj::_hx_vtable = 0;

Dynamic CSSParser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CSSParser_obj > _hx_result = new CSSParser_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CSSParser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1cb0eda7;
}

::String CSSParser_obj::stripComments(::String css){
            	HX_GC_STACKFRAME(&_hx_pos_ca3ccb00e898dca3_36_stripComments)
HXLINE(  37)		 ::EReg regex =  ::EReg_obj::__alloc( HX_CTX ,this->commentRegex,HX_("ig",de,5b,00,00));
HXLINE(  39)		return regex->replace(css,HX_("",00,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC1(CSSParser_obj,stripComments,return )

::Array< ::Dynamic> CSSParser_obj::parseRules(::String rules){
            	HX_GC_STACKFRAME(&_hx_pos_ca3ccb00e898dca3_49_parseRules)
HXLINE(  51)		 ::EReg rulesReg =  ::EReg_obj::__alloc( HX_CTX ,HX_("(\\*?[-#/\\*\\\\\\w]+(\\[[0-9a-z_-]+\\])?)+((?:'(?:\\\\'|.)*?'|\"(?:\\\\\"|.)*?\"|\\([^\\)]*?\\)|[^};])+)",53,76,86,d6),HX_("g",67,00,00,00));
HXLINE(  52)		::Array< ::String > arr = this->getMatches(rulesReg,rules,null());
HXLINE(  53)		::Array< ::Dynamic> ret = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  54)		{
HXLINE(  54)			int _g = 0;
HXDLIN(  54)			int _g1 = arr->length;
HXDLIN(  54)			while((_g < _g1)){
HXLINE(  54)				_g = (_g + 1);
HXDLIN(  54)				int i = (_g - 1);
HXLINE(  56)				if (!(rulesReg->match(arr->__get(i)))) {
HXLINE(  58)					return null();
            				}
HXLINE(  62)				rules = rulesReg->matched(0).split(HX_("\r\n",5d,0b,00,00))->join(HX_("\n",0a,00,00,00));
HXLINE(  72)				::String line = rules;
HXLINE(  75)				line = ::StringTools_obj::trim(line);
HXLINE(  76)				if ((line.indexOf(HX_(":",3a,00,00,00),null()) != -1)) {
HXLINE(  81)					::String directive = ::StringTools_obj::trim(line.split(HX_(":",3a,00,00,00))->__get(0));
HXLINE(  83)					::String value = ::StringTools_obj::trim(line.split(HX_(":",3a,00,00,00))->__get(1));
HXLINE(  87)					bool _hx_tmp;
HXDLIN(  87)					if ((directive.length >= 1)) {
HXLINE(  87)						_hx_tmp = (value.length < 1);
            					}
            					else {
HXLINE(  87)						_hx_tmp = true;
            					}
HXDLIN(  87)					if (_hx_tmp) {
HXLINE(  89)						continue;
            					}
HXLINE(  94)					 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  94)					_g->set(HX_("type",ba,f2,08,4d),HX_("declaration",fa,24,13,66));
HXDLIN(  94)					_g->set(HX_("property",55,48,38,ac),directive);
HXDLIN(  94)					_g->set(HX_("value",71,7f,b8,31),value);
HXDLIN(  94)					ret->push(_g);
            				}
            				else {
HXLINE(  99)					if ((::StringTools_obj::trim(line).substr(0,7) == HX_("base64,",bd,df,d5,2d))) {
HXLINE( 101)						::String _line = (line + ::StringTools_obj::trim(line));
HXLINE( 102)						ret->__get((ret->length - 1)).StaticCast<  ::haxe::ds::StringMap >()->set(HX_("value",71,7f,b8,31),_line);
            					}
            					else {
HXLINE( 107)						if ((line.length > 0)) {
HXLINE( 109)							 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 109)							_g->set(HX_("type",ba,f2,08,4d),HX_("declaration",fa,24,13,66));
HXDLIN( 109)							_g->set(HX_("property",55,48,38,ac),HX_("",00,00,00,00));
HXDLIN( 109)							_g->set(HX_("value",71,7f,b8,31),line);
HXDLIN( 109)							_g->set(HX_("defective",c7,0e,75,38),true);
HXDLIN( 109)							ret->push(_g);
            						}
            					}
            				}
            			}
            		}
HXLINE( 115)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CSSParser_obj,parseRules,return )

 ::haxe::ds::StringMap CSSParser_obj::findCorrespondingRule(::Array< ::Dynamic> rules,::String directive, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ca3ccb00e898dca3_123_findCorrespondingRule)
HXLINE( 124)		 ::haxe::ds::StringMap ret = null();
HXLINE( 125)		{
HXLINE( 125)			int _g = 0;
HXDLIN( 125)			int _g1 = rules->length;
HXDLIN( 125)			while((_g < _g1)){
HXLINE( 125)				_g = (_g + 1);
HXDLIN( 125)				int i = (_g - 1);
HXLINE( 127)				if (::hx::IsEq( rules->__get(i).StaticCast<  ::haxe::ds::StringMap >()->get(HX_("directive",4f,68,40,10)),directive )) {
HXLINE( 129)					ret = rules->__get(i).StaticCast<  ::haxe::ds::StringMap >();
HXLINE( 130)					if (::hx::IsEq( value,rules->__get(i).StaticCast<  ::haxe::ds::StringMap >()->get(HX_("value",71,7f,b8,31)) )) {
HXLINE( 132)						goto _hx_goto_4;
            					}
            				}
            			}
            			_hx_goto_4:;
            		}
HXLINE( 137)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC3(CSSParser_obj,findCorrespondingRule,return )

::Array< ::Dynamic> CSSParser_obj::findBySelector(::Array< ::Dynamic> objectArray,::String selector,::hx::Null< bool >  __o_contains){
            		bool contains = __o_contains.Default(false);
            	HX_STACKFRAME(&_hx_pos_ca3ccb00e898dca3_145_findBySelector)
HXLINE( 146)		::Array< ::Dynamic> found = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 148)		{
HXLINE( 148)			int _g = 0;
HXDLIN( 148)			int _g1 = objectArray->length;
HXDLIN( 148)			while((_g < _g1)){
HXLINE( 148)				_g = (_g + 1);
HXDLIN( 148)				int i = (_g - 1);
HXLINE( 150)				if ((contains == false)) {
HXLINE( 152)					if (::hx::IsEq( objectArray->__get(i).StaticCast<  ::haxe::ds::StringMap >()->get(HX_("selector",1f,33,6d,b1)),selector )) {
HXLINE( 154)						found->push(objectArray->__get(i).StaticCast<  ::haxe::ds::StringMap >());
            					}
            				}
            				else {
HXLINE( 159)					if ((::hx::TCast< ::String >::cast(objectArray->__get(i).StaticCast<  ::haxe::ds::StringMap >()->get(HX_("selector",1f,33,6d,b1))).indexOf(selector,null()) != -1)) {
HXLINE( 161)						found->push(objectArray->__get(i).StaticCast<  ::haxe::ds::StringMap >());
            					}
            				}
            			}
            		}
HXLINE( 166)		bool _hx_tmp;
HXDLIN( 166)		if ((selector != HX_("@imports",2e,1f,67,b6))) {
HXLINE( 166)			_hx_tmp = (found->length < 2);
            		}
            		else {
HXLINE( 166)			_hx_tmp = true;
            		}
HXDLIN( 166)		if (_hx_tmp) {
HXLINE( 168)			return found;
            		}
            		else {
HXLINE( 172)			 ::haxe::ds::StringMap base = found->__get(0).StaticCast<  ::haxe::ds::StringMap >();
HXLINE( 173)			{
HXLINE( 173)				int _g = 0;
HXDLIN( 173)				int _g1 = found->length;
HXDLIN( 173)				while((_g < _g1)){
HXLINE( 173)					_g = (_g + 1);
HXDLIN( 173)					int i = (_g - 1);
HXLINE( 175)					this->intelligentCSSPush(::Array_obj< ::Dynamic>::__new(1)->init(0,base),found->__get(i).StaticCast<  ::haxe::ds::StringMap >(),null());
            				}
            			}
HXLINE( 178)			return ::Array_obj< ::Dynamic>::__new(1)->init(0,base);
            		}
HXLINE( 166)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(CSSParser_obj,findBySelector,return )

::Array< ::Dynamic> CSSParser_obj::deleteBySelector(::Array< ::Dynamic> objectArray,::String selector){
            	HX_STACKFRAME(&_hx_pos_ca3ccb00e898dca3_186_deleteBySelector)
HXLINE( 187)		::Array< ::Dynamic> ret = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 188)		{
HXLINE( 188)			int _g = 0;
HXDLIN( 188)			int _g1 = objectArray->length;
HXDLIN( 188)			while((_g < _g1)){
HXLINE( 188)				_g = (_g + 1);
HXDLIN( 188)				int i = (_g - 1);
HXLINE( 190)				if (::hx::IsNotEq( objectArray->__get(i).StaticCast<  ::haxe::ds::StringMap >()->get(HX_("selector",1f,33,6d,b1)),selector )) {
HXLINE( 192)					ret->push(objectArray->__get(i).StaticCast<  ::haxe::ds::StringMap >());
            				}
            			}
            		}
HXLINE( 195)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC2(CSSParser_obj,deleteBySelector,return )

::Array< ::Dynamic> CSSParser_obj::compress(::Array< ::Dynamic> objectArray){
            	HX_GC_STACKFRAME(&_hx_pos_ca3ccb00e898dca3_203_compress)
HXLINE( 204)		::Array< ::Dynamic> compressed = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 205)		 ::haxe::ds::StringMap done =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 207)		{
HXLINE( 207)			int _g = 0;
HXDLIN( 207)			int _g1 = objectArray->length;
HXDLIN( 207)			while((_g < _g1)){
HXLINE( 207)				_g = (_g + 1);
HXDLIN( 207)				int i = (_g - 1);
HXLINE( 209)				 ::haxe::ds::StringMap obj = objectArray->__get(i).StaticCast<  ::haxe::ds::StringMap >();
HXLINE( 211)				if (::hx::IsEq( done->get(obj->get(HX_("selector",1f,33,6d,b1))),true )) {
HXLINE( 213)					continue;
            				}
HXLINE( 216)				::Array< ::Dynamic> found = this->findBySelector(objectArray,obj->get_string(HX_("selector",1f,33,6d,b1)),null());
HXLINE( 217)				if ((found->length != 0)) {
HXLINE( 219)					compressed = compressed->concat(found);
HXLINE( 220)					done->set(HX_("selector",1f,33,6d,b1),true);
            				}
            			}
            		}
HXLINE( 224)		return compressed;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CSSParser_obj,compress,return )

 ::haxe::ds::StringMap CSSParser_obj::diff( ::haxe::ds::StringMap object1, ::haxe::ds::StringMap object2){
            	HX_GC_STACKFRAME(&_hx_pos_ca3ccb00e898dca3_243_diff)
HXLINE( 244)		 ::Dynamic _hx_tmp = object1->get(HX_("selector",1f,33,6d,b1));
HXDLIN( 244)		if (::hx::IsEq( _hx_tmp,object2->get(HX_("selector",1f,33,6d,b1)) )) {
HXLINE( 246)			return null();
            		}
HXLINE( 250)		bool _hx_tmp1;
HXDLIN( 250)		if (::hx::IsNotEq( object1->get(HX_("type",ba,f2,08,4d)),HX_("media",e4,04,bc,05) )) {
HXLINE( 250)			_hx_tmp1 = ::hx::IsEq( object2->get(HX_("type",ba,f2,08,4d)),HX_("media",e4,04,bc,05) );
            		}
            		else {
HXLINE( 250)			_hx_tmp1 = true;
            		}
HXDLIN( 250)		if (_hx_tmp1) {
HXLINE( 252)			return null();
            		}
HXLINE( 255)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 255)		_g->set(HX_("selector",1f,33,6d,b1),object1->get(HX_("selector",1f,33,6d,b1)));
HXDLIN( 255)		_g->set(HX_("rules",f7,63,56,f1),::Array_obj< ::Dynamic>::__new());
HXDLIN( 255)		 ::haxe::ds::StringMap diff = _g;
HXLINE( 260)		 ::haxe::ds::StringMap rule1 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 261)		 ::haxe::ds::StringMap rule2 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 263)		int _length = ::hx::TCast< ::cpp::VirtualArray >::cast(object1->get(HX_("rules",f7,63,56,f1)))->get_length();
HXLINE( 264)		int _length2 = ::hx::TCast< ::cpp::VirtualArray >::cast(object2->get(HX_("rules",f7,63,56,f1)))->get_length();
HXLINE( 266)		{
HXLINE( 266)			int _g1 = 0;
HXDLIN( 266)			int _g2 = _length;
HXDLIN( 266)			while((_g1 < _g2)){
HXLINE( 266)				_g1 = (_g1 + 1);
HXDLIN( 266)				int i = (_g1 - 1);
HXLINE( 268)				rule1 = ( ( ::haxe::ds::StringMap)(object1->get(HX_("rules",f7,63,56,f1))->__GetItem(1)) );
HXLINE( 270)				 ::Dynamic rule21 = object2->get(HX_("rules",f7,63,56,f1));
HXDLIN( 270)				 ::Dynamic rule22 = object1->get(HX_("directive",4f,68,40,10));
HXDLIN( 270)				rule2 = this->findCorrespondingRule(( (::Array< ::Dynamic>)(rule21) ),( (::String)(rule22) ),object1->get(HX_("value",71,7f,b8,31)));
HXLINE( 272)				if (::hx::IsNull( rule2 )) {
HXLINE( 275)					::hx::TCast< ::cpp::VirtualArray >::cast(diff->get(HX_("rules",f7,63,56,f1)))->push(rule1);
            				}
            				else {
HXLINE( 280)					 ::Dynamic _hx_tmp = rule1->get(HX_("value",71,7f,b8,31));
HXDLIN( 280)					if (::hx::IsNotEq( _hx_tmp,rule2->get(HX_("value",71,7f,b8,31)) )) {
HXLINE( 282)						::hx::TCast< ::cpp::VirtualArray >::cast(diff->get(HX_("rules",f7,63,56,f1)))->push(rule1);
            					}
            				}
            			}
            		}
HXLINE( 289)		{
HXLINE( 289)			int _g3 = 0;
HXDLIN( 289)			int _g4 = _length2;
HXDLIN( 289)			while((_g3 < _g4)){
HXLINE( 289)				_g3 = (_g3 + 1);
HXDLIN( 289)				int i = (_g3 - 1);
HXLINE( 291)				rule2 = ( ( ::haxe::ds::StringMap)(object1->get(HX_("rules",f7,63,56,f1))->__GetItem(1)) );
HXLINE( 293)				 ::Dynamic rule11 = object1->get(HX_("rules",f7,63,56,f1));
HXDLIN( 293)				rule1 = this->findCorrespondingRule(( (::Array< ::Dynamic>)(rule11) ),object2->get_string(HX_("directive",4f,68,40,10)),null());
HXLINE( 295)				if (::hx::IsNull( rule1 )) {
HXLINE( 298)					rule2->set(HX_("type",ba,f2,08,4d),HX_("DELETED",b9,39,a3,92));
HXLINE( 299)					::hx::TCast< ::cpp::VirtualArray >::cast(diff->get(HX_("rules",f7,63,56,f1)))->push(rule2);
            				}
            			}
            		}
HXLINE( 303)		if ((::hx::TCast< ::cpp::VirtualArray >::cast(diff->get(HX_("rules",f7,63,56,f1)))->get_length() == 0)) {
HXLINE( 305)			return null();
            		}
HXLINE( 307)		return diff;
            	}


HX_DEFINE_DYNAMIC_FUNC2(CSSParser_obj,diff,return )

void CSSParser_obj::intelligentMerge(::Array< ::Dynamic> objectArray,::Array< ::Dynamic> newArray,::hx::Null< bool >  __o_reverse){
            		bool reverse = __o_reverse.Default(false);
            	HX_STACKFRAME(&_hx_pos_ca3ccb00e898dca3_319_intelligentMerge)
HXLINE( 320)		{
HXLINE( 320)			int _g = 0;
HXDLIN( 320)			int _g1 = newArray->length;
HXDLIN( 320)			while((_g < _g1)){
HXLINE( 320)				_g = (_g + 1);
HXDLIN( 320)				int i = (_g - 1);
HXLINE( 322)				this->intelligentCSSPush(objectArray,newArray->__get(i).StaticCast<  ::haxe::ds::StringMap >(),reverse);
            			}
            		}
HXLINE( 324)		{
HXLINE( 324)			int _g2 = 0;
HXDLIN( 324)			int _g3 = objectArray->length;
HXDLIN( 324)			while((_g2 < _g3)){
HXLINE( 324)				_g2 = (_g2 + 1);
HXDLIN( 324)				int i = (_g2 - 1);
HXLINE( 326)				 ::haxe::ds::StringMap cobj = objectArray->__get(i).StaticCast<  ::haxe::ds::StringMap >();
HXLINE( 327)				bool _hx_tmp;
HXDLIN( 327)				if (::hx::IsNotEq( cobj->get(HX_("type",ba,f2,08,4d)),HX_("media",e4,04,bc,05) )) {
HXLINE( 327)					_hx_tmp = ::hx::IsEq( cobj->get(HX_("type",ba,f2,08,4d)),HX_("keyframes",85,ba,f8,0f) );
            				}
            				else {
HXLINE( 327)					_hx_tmp = true;
            				}
HXDLIN( 327)				if (_hx_tmp) {
HXLINE( 329)					continue;
            				}
HXLINE( 331)				cobj->set(HX_("rules",f7,63,56,f1),this->compactRules(( (::Array< ::Dynamic>)(cobj->get(HX_("rules",f7,63,56,f1))) )));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(CSSParser_obj,intelligentMerge,(void))

void CSSParser_obj::intelligentCSSPush(::Array< ::Dynamic> objectArray, ::haxe::ds::StringMap minimalObject,::hx::Null< bool >  __o_reverse){
            		bool reverse = __o_reverse.Default(false);
            	HX_STACKFRAME(&_hx_pos_ca3ccb00e898dca3_344_intelligentCSSPush)
HXLINE( 345)		 ::Dynamic pushSelector = minimalObject->get(HX_("selector",1f,33,6d,b1));
HXLINE( 347)		 ::haxe::ds::StringMap cssObject = null();
HXLINE( 348)		if ((reverse == false)) {
HXLINE( 350)			int _g = 0;
HXDLIN( 350)			int _g1 = objectArray->length;
HXDLIN( 350)			while((_g < _g1)){
HXLINE( 350)				_g = (_g + 1);
HXDLIN( 350)				int i = (_g - 1);
HXLINE( 352)				 ::Dynamic _hx_tmp = objectArray->__get(i).StaticCast<  ::haxe::ds::StringMap >()->get(HX_("selector",1f,33,6d,b1));
HXDLIN( 352)				if (::hx::IsEq( _hx_tmp,minimalObject->get(HX_("selector",1f,33,6d,b1)) )) {
HXLINE( 354)					cssObject = objectArray->__get(i).StaticCast<  ::haxe::ds::StringMap >();
HXLINE( 355)					goto _hx_goto_19;
            				}
            			}
            			_hx_goto_19:;
            		}
            		else {
HXLINE( 361)			int j = (objectArray->length - 1);
HXLINE( 362)			while((j > -1)){
HXLINE( 364)				 ::Dynamic _hx_tmp = objectArray->__get(j).StaticCast<  ::haxe::ds::StringMap >()->get(HX_("selector",1f,33,6d,b1));
HXDLIN( 364)				if (::hx::IsEq( _hx_tmp,minimalObject->get(HX_("selector",1f,33,6d,b1)) )) {
HXLINE( 366)					cssObject = objectArray->__get(j).StaticCast<  ::haxe::ds::StringMap >();
HXLINE( 367)					goto _hx_goto_20;
            				}
HXLINE( 369)				j = (j - 1);
            			}
            			_hx_goto_20:;
            		}
HXLINE( 372)		if (::hx::IsNull( cssObject )) {
HXLINE( 374)			objectArray->push(minimalObject);
            		}
            		else {
HXLINE( 378)			if (::hx::IsNotEq( minimalObject->get(HX_("type",ba,f2,08,4d)),HX_("media",e4,04,bc,05) )) {
HXLINE( 380)				::Array< ::Dynamic> mRules = ( (::Array< ::Dynamic>)(minimalObject->get(HX_("rules",f7,63,56,f1))) );
HXLINE( 381)				{
HXLINE( 381)					int _g = 0;
HXDLIN( 381)					int _g1 = mRules->length;
HXDLIN( 381)					while((_g < _g1)){
HXLINE( 381)						_g = (_g + 1);
HXDLIN( 381)						int i = (_g - 1);
HXLINE( 383)						 ::haxe::ds::StringMap rule = mRules->__get(i).StaticCast<  ::haxe::ds::StringMap >();
HXLINE( 385)						 ::Dynamic oldRule = cssObject->get(HX_("rules",f7,63,56,f1));
HXDLIN( 385)						 ::haxe::ds::StringMap oldRule1 = this->findCorrespondingRule(( (::Array< ::Dynamic>)(oldRule) ),rule->get_string(HX_("directive",4f,68,40,10)),null());
HXLINE( 386)						if (::hx::IsNull( oldRule1 )) {
HXLINE( 388)							::Array< ::Dynamic> cRules = ( (::Array< ::Dynamic>)(cssObject->get(HX_("rules",f7,63,56,f1))) );
HXLINE( 389)							cRules->push(rule);
            						}
            						else {
HXLINE( 391)							if (::hx::IsEq( rule->get(HX_("type",ba,f2,08,4d)),HX_("DELETED",b9,39,a3,92) )) {
HXLINE( 393)								oldRule1->set(HX_("type",ba,f2,08,4d),HX_("DELETED",b9,39,a3,92));
            							}
            							else {
HXLINE( 399)								oldRule1->set(HX_("value",71,7f,b8,31),rule->get(HX_("value",71,7f,b8,31)));
            							}
            						}
            					}
            				}
            			}
            			else {
HXLINE( 406)				::cpp::VirtualArray _hx_tmp = ::hx::TCast< ::cpp::VirtualArray >::cast(cssObject->get(HX_("subStyles",c2,23,1f,1c)));
HXLINE( 405)				cssObject->set(HX_("value",71,7f,b8,31),_hx_tmp->concat(( (::cpp::VirtualArray)(minimalObject->get(HX_("subStyles",c2,23,1f,1c))) )));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(CSSParser_obj,intelligentCSSPush,(void))

::Array< ::Dynamic> CSSParser_obj::compactRules(::Array< ::Dynamic> rules){
            	HX_STACKFRAME(&_hx_pos_ca3ccb00e898dca3_417_compactRules)
HXLINE( 418)		::Array< ::Dynamic> newRules = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 419)		{
HXLINE( 419)			int _g = 0;
HXDLIN( 419)			int _g1 = rules->length;
HXDLIN( 419)			while((_g < _g1)){
HXLINE( 419)				_g = (_g + 1);
HXDLIN( 419)				int i = (_g - 1);
HXLINE( 421)				if (::hx::IsNotEq( rules->__get(i).StaticCast<  ::haxe::ds::StringMap >()->get(HX_("type",ba,f2,08,4d)),HX_("DELETED",b9,39,a3,92) )) {
HXLINE( 423)					newRules->push(rules->__get(i).StaticCast<  ::haxe::ds::StringMap >());
            				}
            			}
            		}
HXLINE( 427)		return newRules;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CSSParser_obj,compactRules,return )

::cpp::VirtualArray CSSParser_obj::getImports(::Array< ::Dynamic> objectArray){
            	HX_STACKFRAME(&_hx_pos_ca3ccb00e898dca3_435_getImports)
HXLINE( 436)		::cpp::VirtualArray imps = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 437)		{
HXLINE( 437)			int _g = 0;
HXDLIN( 437)			int _g1 = objectArray->length;
HXDLIN( 437)			while((_g < _g1)){
HXLINE( 437)				_g = (_g + 1);
HXDLIN( 437)				int i = (_g - 1);
HXLINE( 439)				if (::hx::IsEq( objectArray->__get(i).StaticCast<  ::haxe::ds::StringMap >()->get(HX_("type",ba,f2,08,4d)),HX_("imports",6e,97,ca,69) )) {
HXLINE( 441)					imps->push(objectArray->__get(i).StaticCast<  ::haxe::ds::StringMap >()->get(HX_("styles",22,e6,d2,15)));
            				}
            			}
            		}
HXLINE( 444)		return imps;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CSSParser_obj,getImports,return )

 ::haxe::ds::StringMap CSSParser_obj::parse(::String source){
            	HX_GC_STACKFRAME(&_hx_pos_ca3ccb00e898dca3_455_parse)
HXLINE( 456)		if (::hx::IsNull( source )) {
HXLINE( 458)			return null();
            		}
HXLINE( 461)		source =  ::EReg_obj::__alloc( HX_CTX ,HX_("^\\s+|\\s+$",96,66,19,85),HX_("g",67,00,00,00))->replace(source,HX_("",00,00,00,00));
HXLINE( 465)		::Array< ::Dynamic> css = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 467)		bool m = this->importRegex->match(source);
HXLINE( 468)		while(m){
HXLINE( 470)			::String imports = this->importRegex->matched(0);
HXLINE( 471)			if (::hx::IsNotNull( imports )) {
HXLINE( 473)				this->importStatements->push(imports);
HXLINE( 474)				 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 474)				_g->set(HX_("selector",1f,33,6d,b1),HX_("@imports",2e,1f,67,b6));
HXDLIN( 474)				_g->set(HX_("type",ba,f2,08,4d),HX_("imports",6e,97,ca,69));
HXDLIN( 474)				_g->set(HX_("styles",22,e6,d2,15),imports);
HXDLIN( 474)				css->push(_g);
            			}
            			else {
HXLINE( 478)				goto _hx_goto_27;
            			}
            		}
            		_hx_goto_27:;
HXLINE( 482)		source = this->importRegex->replace(source,HX_("",00,00,00,00));
HXLINE( 486)		 ::EReg keyframesRegex =  ::EReg_obj::__alloc( HX_CTX ,this->keyframeRegex,HX_("gi",22,5a,00,00));
HXLINE( 488)		::Array< ::String > arr = null();
HXLINE( 490)		while(keyframesRegex->match(source)){
HXLINE( 492)			arr = this->getMatches(keyframesRegex,source,null());
HXLINE( 493)			if (::hx::IsNull( arr )) {
HXLINE( 495)				goto _hx_goto_28;
            			}
HXLINE( 497)			 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 497)			_g->set(HX_("selectors",74,88,1f,8e),HX_("@keyframes",45,b2,96,22));
HXDLIN( 497)			_g->set(HX_("type",ba,f2,08,4d),HX_("keyframes",85,ba,f8,0f));
HXDLIN( 497)			_g->set(HX_("styles",22,e6,d2,15),keyframesRegex->matchedRight());
HXDLIN( 497)			css->push(_g);
            		}
            		_hx_goto_28:;
HXLINE( 504)		source = keyframesRegex->replace(source,HX_("",00,00,00,00));
HXLINE( 507)		 ::EReg unified =  ::EReg_obj::__alloc( HX_CTX ,this->combinedCSSRegex,HX_("gi",22,5a,00,00));
HXLINE( 509)		while(unified->match(source)){
HXLINE( 511)			arr = this->getMatches(unified,source,null());
HXLINE( 513)			if (::hx::IsNull( arr )) {
HXLINE( 515)				goto _hx_goto_29;
            			}
HXLINE( 517)			::String selector = HX_("",00,00,00,00);
HXLINE( 522)			{
HXLINE( 522)				int _g = 0;
HXDLIN( 522)				int _g1 = arr->length;
HXDLIN( 522)				while((_g < _g1)){
HXLINE( 522)					_g = (_g + 1);
HXDLIN( 522)					int i = (_g - 1);
HXLINE( 524)					 ::EReg selReg =  ::EReg_obj::__alloc( HX_CTX ,HX_("^([^{]+)",4d,c8,98,53),HX_("",00,00,00,00));
HXLINE( 526)					if (selReg->match(arr->__get(i))) {
HXLINE( 531)						if (::hx::IsNotNull( selReg->matched(0) )) {
HXLINE( 533)							selector = ::StringTools_obj::trim(selReg->matched(0).split(HX_("\r\n",5d,0b,00,00))->join(HX_("\n",0a,00,00,00)));
            						}
HXLINE( 540)						 ::EReg commentsRegex =  ::EReg_obj::__alloc( HX_CTX ,this->commentRegex,HX_("gi",22,5a,00,00));
HXLINE( 541)						::Array< ::String > comments = this->getMatches(commentsRegex,selector,null());
HXLINE( 543)						if (::hx::IsNotNull( comments )) {
HXLINE( 545)							selector = ::StringTools_obj::trim(commentsRegex->replace(selector,HX_("",00,00,00,00)));
            						}
HXLINE( 550)						selector =  ::EReg_obj::__alloc( HX_CTX ,HX_("\n+",e1,08,00,00),HX_("",00,00,00,00))->replace(selector,HX_("\n",0a,00,00,00));
HXLINE( 553)						if ((selector.indexOf(HX_("@media",a4,1c,93,9c),null()) != -1)) {
HXLINE( 557)							 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 557)							_g->set(HX_("selectors",74,88,1f,8e),selector);
HXDLIN( 557)							_g->set(HX_("type",ba,f2,08,4d),HX_("media",e4,04,bc,05));
HXDLIN( 557)							_g->set(HX_("subStyles",c2,23,1f,1c),this->parse((selReg->matchedRight() + HX_("\n}",33,09,00,00))));
HXDLIN( 557)							 ::haxe::ds::StringMap object = _g;
HXLINE( 563)							if (::hx::IsNotNull( comments )) {
HXLINE( 565)								object->set(HX_("comments",34,99,fa,c0),comments->__get(0));
            							}
HXLINE( 568)							css->push(object);
            						}
            						else {
HXLINE( 573)							if (::hx::IsNotNull( selReg->matchedRight() )) {
HXLINE( 575)								::Array< ::Dynamic> rules = this->parseRules(selReg->matchedRight());
HXLINE( 577)								 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 577)								_g->set(HX_("selectors",74,88,1f,8e),selector);
HXDLIN( 577)								_g->set(HX_("type",ba,f2,08,4d),HX_("rule",fc,78,b3,4b));
HXDLIN( 577)								_g->set(HX_("declarations",39,36,ad,ea),rules);
HXDLIN( 577)								 ::haxe::ds::StringMap styleObject = _g;
HXLINE( 578)								if ((selector == HX_("@font-face",db,fa,09,58))) {
HXLINE( 580)									styleObject->set(HX_("type",ba,f2,08,4d),HX_("font-face",1b,03,6c,45));
            								}
HXLINE( 583)								if (::hx::IsNotNull( comments )) {
HXLINE( 585)									styleObject->set(HX_("comments",34,99,fa,c0),comments->__get(0));
            								}
HXLINE( 588)								css->push(styleObject);
            							}
            						}
            					}
            					else {
HXLINE( 595)						goto _hx_goto_30;
            					}
            				}
            				_hx_goto_30:;
            			}
HXLINE( 599)			goto _hx_goto_29;
            		}
            		_hx_goto_29:;
HXLINE( 601)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 601)		_g->set(HX_("type",ba,f2,08,4d),HX_("stylesheet",ce,cb,e8,68));
HXDLIN( 601)		_g->set(HX_("rules",f7,63,56,f1),css);
HXDLIN( 601)		_g->set(HX_("parsingErrors",fb,e7,0f,8c),::cpp::VirtualArray_obj::__new(0));
HXDLIN( 601)		 ::haxe::ds::StringMap ret = _g;
HXLINE( 603)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CSSParser_obj,parse,return )

::Array< ::String > CSSParser_obj::getMatches( ::EReg ereg,::String input,::hx::Null< int >  __o_index){
            		int index = __o_index.Default(0);
            	HX_STACKFRAME(&_hx_pos_ca3ccb00e898dca3_607_getMatches)
HXLINE( 608)		::Array< ::String > matches = ::Array_obj< ::String >::__new(0);
HXLINE( 609)		while(ereg->match(input)){
HXLINE( 611)			::String match = ::StringTools_obj::trim(ereg->matched(index));
HXLINE( 613)			matches->push(match);
HXLINE( 614)			input = ::StringTools_obj::trim(ereg->matchedRight());
            		}
HXLINE( 616)		if ((matches->length == 0)) {
HXLINE( 618)			return null();
            		}
HXLINE( 620)		return matches;
            	}


HX_DEFINE_DYNAMIC_FUNC3(CSSParser_obj,getMatches,return )


::hx::ObjectPtr< CSSParser_obj > CSSParser_obj::__new( ::haxe::ds::StringMap options) {
	::hx::ObjectPtr< CSSParser_obj > __this = new CSSParser_obj();
	__this->__construct(options);
	return __this;
}

::hx::ObjectPtr< CSSParser_obj > CSSParser_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ds::StringMap options) {
	CSSParser_obj *__this = (CSSParser_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CSSParser_obj), true, "openfl.text._internal.CSSParser"));
	*(void **)__this = CSSParser_obj::_hx_vtable;
	__this->__construct(options);
	return __this;
}

CSSParser_obj::CSSParser_obj()
{
}

void CSSParser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CSSParser);
	HX_MARK_MEMBER_NAME(source,"source");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(importStatements,"importStatements");
	HX_MARK_MEMBER_NAME(keyframeStatements,"keyframeStatements");
	HX_MARK_MEMBER_NAME(cssRegex,"cssRegex");
	HX_MARK_MEMBER_NAME(mediaQueryRegex,"mediaQueryRegex");
	HX_MARK_MEMBER_NAME(keyframeRegex,"keyframeRegex");
	HX_MARK_MEMBER_NAME(combinedCSSRegex,"combinedCSSRegex");
	HX_MARK_MEMBER_NAME(commentRegex,"commentRegex");
	HX_MARK_MEMBER_NAME(importRegex,"importRegex");
	HX_MARK_END_CLASS();
}

void CSSParser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(source,"source");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(importStatements,"importStatements");
	HX_VISIT_MEMBER_NAME(keyframeStatements,"keyframeStatements");
	HX_VISIT_MEMBER_NAME(cssRegex,"cssRegex");
	HX_VISIT_MEMBER_NAME(mediaQueryRegex,"mediaQueryRegex");
	HX_VISIT_MEMBER_NAME(keyframeRegex,"keyframeRegex");
	HX_VISIT_MEMBER_NAME(combinedCSSRegex,"combinedCSSRegex");
	HX_VISIT_MEMBER_NAME(commentRegex,"commentRegex");
	HX_VISIT_MEMBER_NAME(importRegex,"importRegex");
}

::hx::Val CSSParser_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"diff") ) { return ::hx::Val( diff_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { return ::hx::Val( source ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return ::hx::Val( options ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cssRegex") ) { return ::hx::Val( cssRegex ); }
		if (HX_FIELD_EQ(inName,"compress") ) { return ::hx::Val( compress_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parseRules") ) { return ::hx::Val( parseRules_dyn() ); }
		if (HX_FIELD_EQ(inName,"getImports") ) { return ::hx::Val( getImports_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMatches") ) { return ::hx::Val( getMatches_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"importRegex") ) { return ::hx::Val( importRegex ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"commentRegex") ) { return ::hx::Val( commentRegex ); }
		if (HX_FIELD_EQ(inName,"compactRules") ) { return ::hx::Val( compactRules_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"keyframeRegex") ) { return ::hx::Val( keyframeRegex ); }
		if (HX_FIELD_EQ(inName,"stripComments") ) { return ::hx::Val( stripComments_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"findBySelector") ) { return ::hx::Val( findBySelector_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mediaQueryRegex") ) { return ::hx::Val( mediaQueryRegex ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"importStatements") ) { return ::hx::Val( importStatements ); }
		if (HX_FIELD_EQ(inName,"combinedCSSRegex") ) { return ::hx::Val( combinedCSSRegex ); }
		if (HX_FIELD_EQ(inName,"deleteBySelector") ) { return ::hx::Val( deleteBySelector_dyn() ); }
		if (HX_FIELD_EQ(inName,"intelligentMerge") ) { return ::hx::Val( intelligentMerge_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"keyframeStatements") ) { return ::hx::Val( keyframeStatements ); }
		if (HX_FIELD_EQ(inName,"intelligentCSSPush") ) { return ::hx::Val( intelligentCSSPush_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"findCorrespondingRule") ) { return ::hx::Val( findCorrespondingRule_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CSSParser_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { source=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cssRegex") ) { cssRegex=inValue.Cast<  ::EReg >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"importRegex") ) { importRegex=inValue.Cast<  ::EReg >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"commentRegex") ) { commentRegex=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"keyframeRegex") ) { keyframeRegex=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mediaQueryRegex") ) { mediaQueryRegex=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"importStatements") ) { importStatements=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"combinedCSSRegex") ) { combinedCSSRegex=inValue.Cast< ::String >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"keyframeStatements") ) { keyframeStatements=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CSSParser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("source",db,b0,31,32));
	outFields->push(HX_("options",5e,33,fe,df));
	outFields->push(HX_("importStatements",29,c7,64,11));
	outFields->push(HX_("keyframeStatements",32,09,8b,aa));
	outFields->push(HX_("cssRegex",04,98,9d,41));
	outFields->push(HX_("mediaQueryRegex",a3,a4,f6,78));
	outFields->push(HX_("keyframeRegex",b9,c9,00,cb));
	outFields->push(HX_("combinedCSSRegex",29,02,30,f0));
	outFields->push(HX_("commentRegex",e8,2b,69,48));
	outFields->push(HX_("importRegex",22,cf,4d,31));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CSSParser_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(CSSParser_obj,source),HX_("source",db,b0,31,32)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(CSSParser_obj,options),HX_("options",5e,33,fe,df)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(CSSParser_obj,importStatements),HX_("importStatements",29,c7,64,11)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(CSSParser_obj,keyframeStatements),HX_("keyframeStatements",32,09,8b,aa)},
	{::hx::fsObject /*  ::EReg */ ,(int)offsetof(CSSParser_obj,cssRegex),HX_("cssRegex",04,98,9d,41)},
	{::hx::fsString,(int)offsetof(CSSParser_obj,mediaQueryRegex),HX_("mediaQueryRegex",a3,a4,f6,78)},
	{::hx::fsString,(int)offsetof(CSSParser_obj,keyframeRegex),HX_("keyframeRegex",b9,c9,00,cb)},
	{::hx::fsString,(int)offsetof(CSSParser_obj,combinedCSSRegex),HX_("combinedCSSRegex",29,02,30,f0)},
	{::hx::fsString,(int)offsetof(CSSParser_obj,commentRegex),HX_("commentRegex",e8,2b,69,48)},
	{::hx::fsObject /*  ::EReg */ ,(int)offsetof(CSSParser_obj,importRegex),HX_("importRegex",22,cf,4d,31)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CSSParser_obj_sStaticStorageInfo = 0;
#endif

static ::String CSSParser_obj_sMemberFields[] = {
	HX_("source",db,b0,31,32),
	HX_("options",5e,33,fe,df),
	HX_("importStatements",29,c7,64,11),
	HX_("keyframeStatements",32,09,8b,aa),
	HX_("cssRegex",04,98,9d,41),
	HX_("mediaQueryRegex",a3,a4,f6,78),
	HX_("keyframeRegex",b9,c9,00,cb),
	HX_("combinedCSSRegex",29,02,30,f0),
	HX_("commentRegex",e8,2b,69,48),
	HX_("importRegex",22,cf,4d,31),
	HX_("stripComments",2c,40,17,46),
	HX_("parseRules",c4,aa,37,1b),
	HX_("findCorrespondingRule",96,94,82,2a),
	HX_("findBySelector",af,29,92,96),
	HX_("deleteBySelector",21,3c,11,b1),
	HX_("compress",a2,47,bf,83),
	HX_("diff",05,5c,69,42),
	HX_("intelligentMerge",c1,b0,18,b4),
	HX_("intelligentCSSPush",86,a5,60,b5),
	HX_("compactRules",54,b9,9e,1d),
	HX_("getImports",78,1d,2c,b9),
	HX_("parse",33,90,55,bd),
	HX_("getMatches",fd,c2,dd,d8),
	::String(null()) };

::hx::Class CSSParser_obj::__mClass;

void CSSParser_obj::__register()
{
	CSSParser_obj _hx_dummy;
	CSSParser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.text._internal.CSSParser",ed,9a,1d,6b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CSSParser_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CSSParser_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CSSParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CSSParser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace text
} // end namespace _internal
