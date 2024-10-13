#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_zip_ExtraField
#include <haxe/zip/ExtraField.h>
#endif
#ifndef INCLUDED_haxe_zip_InflateImpl
#include <haxe/zip/InflateImpl.h>
#endif
#ifndef INCLUDED_haxe_zip_Reader
#include <haxe/zip/Reader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fdeef4cfd6d0a442_33_new,"haxe.zip.Reader","new",0xf101338a,"haxe.zip.Reader.new","/home/david/bin/haxe/std/haxe/zip/Reader.hx",33,0x238451f5)
HX_LOCAL_STACK_FRAME(_hx_pos_fdeef4cfd6d0a442_36_readZipDate,"haxe.zip.Reader","readZipDate",0xa6a02623,"haxe.zip.Reader.readZipDate","/home/david/bin/haxe/std/haxe/zip/Reader.hx",36,0x238451f5)
HX_LOCAL_STACK_FRAME(_hx_pos_fdeef4cfd6d0a442_48_readExtraFields,"haxe.zip.Reader","readExtraFields",0x48ea639d,"haxe.zip.Reader.readExtraFields","/home/david/bin/haxe/std/haxe/zip/Reader.hx",48,0x238451f5)
HX_LOCAL_STACK_FRAME(_hx_pos_fdeef4cfd6d0a442_78_readEntryHeader,"haxe.zip.Reader","readEntryHeader",0x28765213,"haxe.zip.Reader.readEntryHeader","/home/david/bin/haxe/std/haxe/zip/Reader.hx",78,0x238451f5)
HX_LOCAL_STACK_FRAME(_hx_pos_fdeef4cfd6d0a442_121_read,"haxe.zip.Reader","read",0xf2b0acec,"haxe.zip.Reader.read","/home/david/bin/haxe/std/haxe/zip/Reader.hx",121,0x238451f5)
HX_LOCAL_STACK_FRAME(_hx_pos_fdeef4cfd6d0a442_194_readZip,"haxe.zip.Reader","readZip",0x2845d555,"haxe.zip.Reader.readZip","/home/david/bin/haxe/std/haxe/zip/Reader.hx",194,0x238451f5)
namespace haxe{
namespace zip{

void Reader_obj::__construct( ::haxe::io::Input i){
            	HX_STACKFRAME(&_hx_pos_fdeef4cfd6d0a442_33_new)
HXDLIN(  33)		this->i = i;
            	}

Dynamic Reader_obj::__CreateEmpty() { return new Reader_obj; }

void *Reader_obj::_hx_vtable = 0;

Dynamic Reader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Reader_obj > _hx_result = new Reader_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Reader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x77d0ba9e;
}

 ::Date Reader_obj::readZipDate(){
            	HX_GC_STACKFRAME(&_hx_pos_fdeef4cfd6d0a442_36_readZipDate)
HXLINE(  37)		int t = this->i->readUInt16();
HXLINE(  38)		int hour = ((t >> 11) & 31);
HXLINE(  39)		int min = ((t >> 5) & 63);
HXLINE(  40)		int sec = (t & 31);
HXLINE(  41)		int d = this->i->readUInt16();
HXLINE(  42)		int year = (d >> 9);
HXLINE(  43)		int month = ((d >> 5) & 15);
HXLINE(  44)		int day = (d & 31);
HXLINE(  45)		return  ::Date_obj::__alloc( HX_CTX ,(year + 1980),(month - 1),day,hour,min,(sec << 1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readZipDate,return )

 ::haxe::ds::List Reader_obj::readExtraFields(int length){
            	HX_GC_STACKFRAME(&_hx_pos_fdeef4cfd6d0a442_48_readExtraFields)
HXLINE(  49)		 ::haxe::ds::List fields =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE(  50)		while((length > 0)){
HXLINE(  51)			if ((length < 4)) {
HXLINE(  52)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid extra fields data",18,88,a4,23)));
            			}
HXLINE(  53)			int tag = this->i->readUInt16();
HXLINE(  54)			int len = this->i->readUInt16();
HXLINE(  55)			if ((length < len)) {
HXLINE(  56)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid extra fields data",18,88,a4,23)));
            			}
HXLINE(  57)			if ((tag == 28789)) {
HXLINE(  59)				int version = this->i->readByte();
HXLINE(  60)				if ((version != 1)) {
HXLINE(  61)					 ::haxe::io::BytesBuffer data =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
HXLINE(  62)					data->b->push(version);
HXLINE(  63)					{
HXLINE(  63)						 ::haxe::io::Bytes src = this->i->read((len - 1));
HXDLIN(  63)						::Array< unsigned char > b1 = data->b;
HXDLIN(  63)						::Array< unsigned char > b2 = src->b;
HXDLIN(  63)						{
HXLINE(  63)							int _g = 0;
HXDLIN(  63)							int _g1 = src->length;
HXDLIN(  63)							while((_g < _g1)){
HXLINE(  63)								_g = (_g + 1);
HXDLIN(  63)								int i = (_g - 1);
HXDLIN(  63)								data->b->push(b2->__get(i));
            							}
            						}
            					}
HXLINE(  64)					fields->add(::haxe::zip::ExtraField_obj::FUnknown(tag,data->getBytes()));
            				}
            				else {
HXLINE(  66)					int crc = this->i->readInt32();
HXLINE(  67)					::String name = this->i->read((len - 5))->toString();
HXLINE(  68)					fields->add(::haxe::zip::ExtraField_obj::FInfoZipUnicodePath(name,crc));
            				}
            			}
            			else {
HXLINE(  71)				fields->add(::haxe::zip::ExtraField_obj::FUnknown(tag,this->i->read(len)));
            			}
HXLINE(  73)			length = (length - (4 + len));
            		}
HXLINE(  75)		return fields;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readExtraFields,return )

 ::Dynamic Reader_obj::readEntryHeader(){
            	HX_STACKFRAME(&_hx_pos_fdeef4cfd6d0a442_78_readEntryHeader)
HXLINE(  79)		 ::haxe::io::Input i = this->i;
HXLINE(  80)		int h = i->readInt32();
HXLINE(  81)		bool _hx_tmp;
HXDLIN(  81)		if ((h != 33639248)) {
HXLINE(  81)			_hx_tmp = (h == 101010256);
            		}
            		else {
HXLINE(  81)			_hx_tmp = true;
            		}
HXDLIN(  81)		if (_hx_tmp) {
HXLINE(  82)			return null();
            		}
HXLINE(  83)		if ((h != 67324752)) {
HXLINE(  84)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid Zip Data",72,da,ff,99)));
            		}
HXLINE(  85)		int version = i->readUInt16();
HXLINE(  86)		int flags = i->readUInt16();
HXLINE(  87)		bool utf8 = ((flags & 2048) != 0);
HXLINE(  88)		if (((flags & 63473) != 0)) {
HXLINE(  89)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported flags ",24,93,26,a4) + flags)));
            		}
HXLINE(  90)		int compression = i->readUInt16();
HXLINE(  91)		bool compressed = (compression != 0);
HXLINE(  92)		bool _hx_tmp1;
HXDLIN(  92)		if (compressed) {
HXLINE(  92)			_hx_tmp1 = (compression != 8);
            		}
            		else {
HXLINE(  92)			_hx_tmp1 = false;
            		}
HXDLIN(  92)		if (_hx_tmp1) {
HXLINE(  93)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported compression ",65,94,24,90) + compression)));
            		}
HXLINE(  94)		 ::Date mtime = this->readZipDate();
HXLINE(  95)		 ::Dynamic crc32 = i->readInt32();
HXLINE(  96)		int csize = i->readInt32();
HXLINE(  97)		int usize = i->readInt32();
HXLINE(  98)		int fnamelen = i->readInt16();
HXLINE(  99)		int elen = i->readInt16();
HXLINE( 100)		::String fname = i->readString(fnamelen,null());
HXLINE( 101)		 ::haxe::ds::List fields = this->readExtraFields(elen);
HXLINE( 102)		if (utf8) {
HXLINE( 103)			fields->push(::haxe::zip::ExtraField_obj::FUtf8_dyn());
            		}
HXLINE( 104)		 ::haxe::io::Bytes data = null();
HXLINE( 107)		if (((flags & 8) != 0)) {
HXLINE( 108)			crc32 = null();
            		}
HXLINE( 109)		return  ::Dynamic(::hx::Anon_obj::Create(8)
            			->setFixed(0,HX_("dataSize",0b,80,c7,8b),csize)
            			->setFixed(1,HX_("data",2a,56,63,42),data)
            			->setFixed(2,HX_("crc32",73,0c,51,4c),crc32)
            			->setFixed(3,HX_("fileName",e7,5a,43,62),fname)
            			->setFixed(4,HX_("fileSize",5d,89,97,65),usize)
            			->setFixed(5,HX_("fileTime",a9,b4,40,66),mtime)
            			->setFixed(6,HX_("compressed",81,4c,da,67),compressed)
            			->setFixed(7,HX_("extraFields",29,e9,47,7f),fields));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readEntryHeader,return )

 ::haxe::ds::List Reader_obj::read(){
            	HX_GC_STACKFRAME(&_hx_pos_fdeef4cfd6d0a442_121_read)
HXLINE( 122)		 ::haxe::ds::List l =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE( 123)		 ::Dynamic buf = null();
HXLINE( 124)		 ::haxe::io::Bytes tmp = null();
HXLINE( 125)		while(true){
HXLINE( 126)			 ::Dynamic e = this->readEntryHeader();
HXLINE( 127)			if (::hx::IsNull( e )) {
HXLINE( 128)				goto _hx_goto_6;
            			}
HXLINE( 130)			if (::hx::IsNull( e->__Field(HX_("crc32",73,0c,51,4c),::hx::paccDynamic) )) {
HXLINE( 131)				if (( (bool)(e->__Field(HX_("compressed",81,4c,da,67),::hx::paccDynamic)) )) {
HXLINE( 164)					int bufSize = 65536;
HXLINE( 165)					if (::hx::IsNull( tmp )) {
HXLINE( 166)						tmp = ::haxe::io::Bytes_obj::alloc(bufSize);
            					}
HXLINE( 167)					 ::haxe::io::BytesBuffer out =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
HXLINE( 168)					 ::haxe::zip::InflateImpl z =  ::haxe::zip::InflateImpl_obj::__alloc( HX_CTX ,this->i,false,false);
HXLINE( 169)					while(true){
HXLINE( 170)						int n = z->readBytes(tmp,0,bufSize);
HXLINE( 171)						{
HXLINE( 171)							bool _hx_tmp;
HXDLIN( 171)							if ((n >= 0)) {
HXLINE( 171)								_hx_tmp = (n > tmp->length);
            							}
            							else {
HXLINE( 171)								_hx_tmp = true;
            							}
HXDLIN( 171)							if (_hx_tmp) {
HXLINE( 171)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            							}
HXDLIN( 171)							::Array< unsigned char > b1 = out->b;
HXDLIN( 171)							::Array< unsigned char > b2 = tmp->b;
HXDLIN( 171)							{
HXLINE( 171)								int _g = 0;
HXDLIN( 171)								int _g1 = n;
HXDLIN( 171)								while((_g < _g1)){
HXLINE( 171)									_g = (_g + 1);
HXDLIN( 171)									int i = (_g - 1);
HXDLIN( 171)									out->b->push(b2->__get(i));
            								}
            							}
            						}
HXLINE( 172)						if ((n < bufSize)) {
HXLINE( 173)							goto _hx_goto_7;
            						}
            					}
            					_hx_goto_7:;
HXLINE( 175)					e->__SetField(HX_("data",2a,56,63,42),out->getBytes(),::hx::paccDynamic);
            				}
            				else {
HXLINE( 178)					e->__SetField(HX_("data",2a,56,63,42),this->i->read(( (int)(e->__Field(HX_("dataSize",0b,80,c7,8b),::hx::paccDynamic)) )),::hx::paccDynamic);
            				}
HXLINE( 179)				e->__SetField(HX_("crc32",73,0c,51,4c),this->i->readInt32(),::hx::paccDynamic);
HXLINE( 180)				if (::hx::IsEq( e->__Field(HX_("crc32",73,0c,51,4c),::hx::paccDynamic),134695760 )) {
HXLINE( 181)					e->__SetField(HX_("crc32",73,0c,51,4c),this->i->readInt32(),::hx::paccDynamic);
            				}
HXLINE( 182)				e->__SetField(HX_("dataSize",0b,80,c7,8b),this->i->readInt32(),::hx::paccDynamic);
HXLINE( 183)				e->__SetField(HX_("fileSize",5d,89,97,65),this->i->readInt32(),::hx::paccDynamic);
HXLINE( 185)				e->__SetField(HX_("dataSize",0b,80,c7,8b),e->__Field(HX_("fileSize",5d,89,97,65),::hx::paccDynamic),::hx::paccDynamic);
HXLINE( 186)				e->__SetField(HX_("compressed",81,4c,da,67),false,::hx::paccDynamic);
            			}
            			else {
HXLINE( 188)				e->__SetField(HX_("data",2a,56,63,42),this->i->read(( (int)(e->__Field(HX_("dataSize",0b,80,c7,8b),::hx::paccDynamic)) )),::hx::paccDynamic);
            			}
HXLINE( 189)			l->add(e);
            		}
            		_hx_goto_6:;
HXLINE( 191)		return l;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,read,return )

 ::haxe::ds::List Reader_obj::readZip( ::haxe::io::Input i){
            	HX_GC_STACKFRAME(&_hx_pos_fdeef4cfd6d0a442_194_readZip)
HXLINE( 195)		 ::haxe::zip::Reader r =  ::haxe::zip::Reader_obj::__alloc( HX_CTX ,i);
HXLINE( 196)		return r->read();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readZip,return )


::hx::ObjectPtr< Reader_obj > Reader_obj::__new( ::haxe::io::Input i) {
	::hx::ObjectPtr< Reader_obj > __this = new Reader_obj();
	__this->__construct(i);
	return __this;
}

::hx::ObjectPtr< Reader_obj > Reader_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Input i) {
	Reader_obj *__this = (Reader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Reader_obj), true, "haxe.zip.Reader"));
	*(void **)__this = Reader_obj::_hx_vtable;
	__this->__construct(i);
	return __this;
}

Reader_obj::Reader_obj()
{
}

void Reader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Reader);
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_END_CLASS();
}

void Reader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(i,"i");
}

::hx::Val Reader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return ::hx::Val( i ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return ::hx::Val( read_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readZipDate") ) { return ::hx::Val( readZipDate_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"readExtraFields") ) { return ::hx::Val( readExtraFields_dyn() ); }
		if (HX_FIELD_EQ(inName,"readEntryHeader") ) { return ::hx::Val( readEntryHeader_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Reader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"readZip") ) { outValue = readZip_dyn(); return true; }
	}
	return false;
}

::hx::Val Reader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast<  ::haxe::io::Input >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Reader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("i",69,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Reader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Input */ ,(int)offsetof(Reader_obj,i),HX_("i",69,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Reader_obj_sStaticStorageInfo = 0;
#endif

static ::String Reader_obj_sMemberFields[] = {
	HX_("i",69,00,00,00),
	HX_("readZipDate",f9,88,bc,c9),
	HX_("readExtraFields",73,e9,9f,a6),
	HX_("readEntryHeader",e9,d7,2b,86),
	HX_("read",56,4b,a7,4b),
	::String(null()) };

::hx::Class Reader_obj::__mClass;

static ::String Reader_obj_sStaticFields[] = {
	HX_("readZip",2b,95,d6,02),
	::String(null())
};

void Reader_obj::__register()
{
	Reader_obj _hx_dummy;
	Reader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.zip.Reader",98,66,32,ed);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Reader_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Reader_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Reader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Reader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Reader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Reader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace zip
