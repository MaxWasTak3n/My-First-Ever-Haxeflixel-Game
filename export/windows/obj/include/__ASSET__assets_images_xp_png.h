// Generated by Haxe 4.1.5
#ifndef INCLUDED___ASSET__assets_images_xp_png
#define INCLUDED___ASSET__assets_images_xp_png

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
HX_DECLARE_CLASS0(__ASSET__assets_images_xp_png)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,graphics,ImageBuffer)
HX_DECLARE_CLASS2(lime,graphics,ImageType)



class HXCPP_CLASS_ATTRIBUTES __ASSET__assets_images_xp_png_obj : public  ::lime::graphics::Image_obj
{
	public:
		typedef  ::lime::graphics::Image_obj super;
		typedef __ASSET__assets_images_xp_png_obj OBJ_;
		__ASSET__assets_images_xp_png_obj();

	public:
		enum { _hx_ClassId = 0x7c855d9d };

		void __construct( ::lime::graphics::ImageBuffer buffer, ::Dynamic offsetX, ::Dynamic offsetY, ::Dynamic width, ::Dynamic height, ::Dynamic color, ::lime::graphics::ImageType type);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="__ASSET__assets_images_xp_png")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"__ASSET__assets_images_xp_png"); }
		static ::hx::ObjectPtr< __ASSET__assets_images_xp_png_obj > __new( ::lime::graphics::ImageBuffer buffer, ::Dynamic offsetX, ::Dynamic offsetY, ::Dynamic width, ::Dynamic height, ::Dynamic color, ::lime::graphics::ImageType type);
		static ::hx::ObjectPtr< __ASSET__assets_images_xp_png_obj > __alloc(::hx::Ctx *_hx_ctx, ::lime::graphics::ImageBuffer buffer, ::Dynamic offsetX, ::Dynamic offsetY, ::Dynamic width, ::Dynamic height, ::Dynamic color, ::lime::graphics::ImageType type);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~__ASSET__assets_images_xp_png_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("__ASSET__assets_images_xp_png",5d,c8,0f,a5); }

		static void __boot();
		static ::String resourceName;
};


#endif /* INCLUDED___ASSET__assets_images_xp_png */ 
