// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_ManifestResources
#include <ManifestResources.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED___ASSET__OPENFL__assets_fonts_font_ttf
#include <__ASSET__OPENFL__assets_fonts_font_ttf.h>
#endif
#ifndef INCLUDED___ASSET__OPENFL__flixel_fonts_monsterrat_ttf
#include <__ASSET__OPENFL__flixel_fonts_monsterrat_ttf.h>
#endif
#ifndef INCLUDED___ASSET__OPENFL__flixel_fonts_nokiafc22_ttf
#include <__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_AssetManifest
#include <lime/utils/AssetManifest.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6b0b98c45b3017d4_25_init,"ManifestResources","init",0xc8e10c68,"ManifestResources.init","ManifestResources.hx",25,0xf77aa668)

void ManifestResources_obj::__construct() { }

Dynamic ManifestResources_obj::__CreateEmpty() { return new ManifestResources_obj; }

void *ManifestResources_obj::_hx_vtable = 0;

Dynamic ManifestResources_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ManifestResources_obj > _hx_result = new ManifestResources_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ManifestResources_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f5bd976;
}

::Array< ::Dynamic> ManifestResources_obj::preloadLibraries;

::Array< ::String > ManifestResources_obj::preloadLibraryNames;

::String ManifestResources_obj::rootPath;

void ManifestResources_obj::init( ::Dynamic config){
            	HX_STACKFRAME(&_hx_pos_6b0b98c45b3017d4_25_init)
HXLINE(  27)		::ManifestResources_obj::preloadLibraries = ::Array_obj< ::Dynamic>::__new();
HXLINE(  28)		::ManifestResources_obj::preloadLibraryNames = ::Array_obj< ::String >::__new();
HXLINE(  30)		::ManifestResources_obj::rootPath = null();
HXLINE(  32)		bool _hx_tmp;
HXDLIN(  32)		if (::hx::IsNotNull( config )) {
HXLINE(  32)			_hx_tmp = ::Reflect_obj::hasField(config,HX_("rootPath",e7,b8,88,e1));
            		}
            		else {
HXLINE(  32)			_hx_tmp = false;
            		}
HXDLIN(  32)		if (_hx_tmp) {
HXLINE(  34)			::ManifestResources_obj::rootPath = ( (::String)(::Reflect_obj::field(config,HX_("rootPath",e7,b8,88,e1))) );
            		}
HXLINE(  38)		if (::hx::IsNull( ::ManifestResources_obj::rootPath )) {
HXLINE(  47)			::ManifestResources_obj::rootPath = HX_("./",41,28,00,00);
            		}
HXLINE(  53)		::openfl::text::Font_obj::registerFont(::hx::ClassOf< ::__ASSET__OPENFL__assets_fonts_font_ttf >());
HXLINE(  54)		::openfl::text::Font_obj::registerFont(::hx::ClassOf< ::__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf >());
HXLINE(  55)		::openfl::text::Font_obj::registerFont(::hx::ClassOf< ::__ASSET__OPENFL__flixel_fonts_monsterrat_ttf >());
HXLINE(  59)		 ::Dynamic bundle;
HXDLIN(  59)		::String data = HX_("{\"name\":null,\"assets\":\"aoy4:sizei5293y4:typey4:TEXTy9:classNamey31:__ASSET__assets_data_room1_jsony2:idy26:assets%2Fdata%2Froom1.jsongoR0i7042R1R2R3y31:__ASSET__assets_data_room1_ogmoR5y26:assets%2Fdata%2Froom1.ogmogoR0i47604R1y4:FONTR3y30:__ASSET__assets_fonts_font_ttfR5y25:assets%2Ffonts%2Ffont.ttfgoR0i1302R1y5:IMAGER3y32:__ASSET__assets_icons_iconog_pngR5y27:assets%2Ficons%2FiconOG.pnggoR0i792R1R12R3y40:__ASSET__assets_images_bighousefront_pngR5y35:assets%2Fimages%2FBigHouseFront.pnggoR0i1126R1R12R3y33:__ASSET__assets_images_button_pngR5y28:assets%2Fimages%2Fbutton.pnggoR0i1040R1R12R3y31:__ASSET__assets_images_coin_pngR5y26:assets%2Fimages%2Fcoin.pnggoR0i1019R1R12R3y33:__ASSET__assets_images_health_pngR5y28:assets%2Fimages%2Fhealth.pnggoR0i956R1R12R3y37:__ASSET__assets_images_housesmall_pngR5y32:assets%2Fimages%2FhouseSmall.pnggoR0i336R1R12R3y31:__ASSET__assets_images_logo_pngR5y26:assets%2Fimages%2Flogo.pnggoR0i528R1R12R3y33:__ASSET__assets_images_player_pngR5y28:assets%2Fimages%2Fplayer.pnggoR0i354R1R12R3y31:__ASSET__assets_images_sign_pngR5y26:assets%2Fimages%2Fsign.pnggoR0i1553R1R12R3y32:__ASSET__assets_images_tiles_pngR5y27:assets%2Fimages%2Ftiles.pnggoR0i149R1R12R3y29:__ASSET__assets_images_xp_pngR5y24:assets%2Fimages%2Fxp.pnggoR0i1480231R1y5:MUSICR3y35:__ASSET__assets_music_mainmusic_oggR5y30:assets%2Fmusic%2FmainMusic.ogggoR0i4504R1y5:SOUNDR3y33:__ASSET__assets_sounds_select_oggR5y28:assets%2Fsounds%2Fselect.ogggoR0i5794R1R38R3y31:__ASSET__flixel_sounds_beep_oggR5y26:flixel%2Fsounds%2Fbeep.ogggoR0i33629R1R38R3y33:__ASSET__flixel_sounds_flixel_oggR5y28:flixel%2Fsounds%2Fflixel.ogggoR0i15744R1R9R3y35:__ASSET__flixel_fonts_nokiafc22_ttfR5y30:flixel%2Ffonts%2Fnokiafc22.ttfgoR0i29724R1R9R3y36:__ASSET__flixel_fonts_monsterrat_ttfR5y31:flixel%2Ffonts%2Fmonsterrat.ttfgoR0i519R1R12R3y36:__ASSET__flixel_images_ui_button_pngR5y33:flixel%2Fimages%2Fui%2Fbutton.pnggoR0i3280R1R12R3y39:__ASSET__flixel_images_logo_default_pngR5y36:flixel%2Fimages%2Flogo%2Fdefault.pnggh\",\"rootPath\":null,\"version\":2,\"libraryArgs\":[],\"libraryType\":null}",f0,77,04,78);
HXDLIN(  59)		 ::lime::utils::AssetManifest manifest = ::lime::utils::AssetManifest_obj::parse(data,::ManifestResources_obj::rootPath);
HXDLIN(  59)		 ::lime::utils::AssetLibrary library = ::lime::utils::AssetLibrary_obj::fromManifest(manifest);
HXLINE(  75)		::lime::utils::Assets_obj::registerLibrary(HX_("default",c1,d8,c3,9b),library);
HXLINE(  78)		library = ::lime::utils::Assets_obj::getLibrary(HX_("default",c1,d8,c3,9b));
HXLINE(  79)		if (::hx::IsNotNull( library )) {
HXLINE(  79)			::ManifestResources_obj::preloadLibraries->push(library);
            		}
            		else {
HXLINE(  80)			::ManifestResources_obj::preloadLibraryNames->push(HX_("default",c1,d8,c3,9b));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ManifestResources_obj,init,(void))


ManifestResources_obj::ManifestResources_obj()
{
}

bool ManifestResources_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rootPath") ) { outValue = ( rootPath ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"preloadLibraries") ) { outValue = ( preloadLibraries ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"preloadLibraryNames") ) { outValue = ( preloadLibraryNames ); return true; }
	}
	return false;
}

bool ManifestResources_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"rootPath") ) { rootPath=ioValue.Cast< ::String >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"preloadLibraries") ) { preloadLibraries=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"preloadLibraryNames") ) { preloadLibraryNames=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ManifestResources_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ManifestResources_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &ManifestResources_obj::preloadLibraries,HX_("preloadLibraries",10,27,df,e6)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &ManifestResources_obj::preloadLibraryNames,HX_("preloadLibraryNames",36,48,52,5c)},
	{::hx::fsString,(void *) &ManifestResources_obj::rootPath,HX_("rootPath",e7,b8,88,e1)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ManifestResources_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ManifestResources_obj::preloadLibraries,"preloadLibraries");
	HX_MARK_MEMBER_NAME(ManifestResources_obj::preloadLibraryNames,"preloadLibraryNames");
	HX_MARK_MEMBER_NAME(ManifestResources_obj::rootPath,"rootPath");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ManifestResources_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ManifestResources_obj::preloadLibraries,"preloadLibraries");
	HX_VISIT_MEMBER_NAME(ManifestResources_obj::preloadLibraryNames,"preloadLibraryNames");
	HX_VISIT_MEMBER_NAME(ManifestResources_obj::rootPath,"rootPath");
};

#endif

::hx::Class ManifestResources_obj::__mClass;

static ::String ManifestResources_obj_sStaticFields[] = {
	HX_("preloadLibraries",10,27,df,e6),
	HX_("preloadLibraryNames",36,48,52,5c),
	HX_("rootPath",e7,b8,88,e1),
	HX_("init",10,3b,bb,45),
	::String(null())
};

void ManifestResources_obj::__register()
{
	ManifestResources_obj _hx_dummy;
	ManifestResources_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ManifestResources",16,0e,30,56);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ManifestResources_obj::__GetStatic;
	__mClass->mSetStaticField = &ManifestResources_obj::__SetStatic;
	__mClass->mMarkFunc = ManifestResources_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ManifestResources_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ManifestResources_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ManifestResources_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ManifestResources_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ManifestResources_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

