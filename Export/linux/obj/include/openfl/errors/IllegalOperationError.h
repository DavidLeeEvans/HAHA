#ifndef INCLUDED_openfl_errors_IllegalOperationError
#define INCLUDED_openfl_errors_IllegalOperationError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
HX_DECLARE_CLASS1(haxe,Exception)
HX_DECLARE_CLASS2(openfl,errors,Error)
HX_DECLARE_CLASS2(openfl,errors,IllegalOperationError)

namespace openfl{
namespace errors{


class HXCPP_CLASS_ATTRIBUTES IllegalOperationError_obj : public  ::openfl::errors::Error_obj
{
	public:
		typedef  ::openfl::errors::Error_obj super;
		typedef IllegalOperationError_obj OBJ_;
		IllegalOperationError_obj();

	public:
		enum { _hx_ClassId = 0x5e851dfc };

		void __construct(::String __o_message);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.errors.IllegalOperationError")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.errors.IllegalOperationError"); }
		static ::hx::ObjectPtr< IllegalOperationError_obj > __new(::String __o_message);
		static ::hx::ObjectPtr< IllegalOperationError_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o_message);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~IllegalOperationError_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("IllegalOperationError",17,ce,c0,9e); }

};

} // end namespace openfl
} // end namespace errors

#endif /* INCLUDED_openfl_errors_IllegalOperationError */ 
