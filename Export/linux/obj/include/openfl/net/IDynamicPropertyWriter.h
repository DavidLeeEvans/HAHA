#ifndef INCLUDED_openfl_net_IDynamicPropertyWriter
#define INCLUDED_openfl_net_IDynamicPropertyWriter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,net,IDynamicPropertyOutput)
HX_DECLARE_CLASS2(openfl,net,IDynamicPropertyWriter)

namespace openfl{
namespace net{


class HXCPP_CLASS_ATTRIBUTES IDynamicPropertyWriter_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_writeDynamicProperties)( ::Dynamic obj,::Dynamic output); 
		static inline void writeDynamicProperties( ::Dynamic _hx_, ::Dynamic obj,::Dynamic output) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::openfl::net::IDynamicPropertyWriter_obj *>(_hx_.mPtr->_hx_getInterface(0xe9c9e38b)))->_hx_writeDynamicProperties)(obj,output);
		}
};

} // end namespace openfl
} // end namespace net

#endif /* INCLUDED_openfl_net_IDynamicPropertyWriter */ 
