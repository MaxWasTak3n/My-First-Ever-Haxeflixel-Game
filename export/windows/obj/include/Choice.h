// Generated by Haxe 4.1.5
#ifndef INCLUDED_Choice
#define INCLUDED_Choice

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Choice)


class Choice_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Choice_obj OBJ_;

	public:
		Choice_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("Choice",81,33,44,f5); }
		::String __ToString() const { return HX_("Choice.",8d,dd,68,a6) + _hx_tag; }

		static ::Choice FIGHT;
		static inline ::Choice FIGHT_dyn() { return FIGHT; }
		static ::Choice FLEE;
		static inline ::Choice FLEE_dyn() { return FLEE; }
};


#endif /* INCLUDED_Choice */ 
