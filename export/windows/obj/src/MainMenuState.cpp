// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_AssetPaths
#include <AssetPaths.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_14_new,"MainMenuState","new",0x83a7c9cb,"MainMenuState.new","MainMenuState.hx",14,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_24_create,"MainMenuState","create",0x6b76e271,"MainMenuState.create","MainMenuState.hx",24,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_54_update,"MainMenuState","update",0x766d017e,"MainMenuState.update","MainMenuState.hx",54,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_57_onClick,"MainMenuState","onClick",0x69c0a594,"MainMenuState.onClick","MainMenuState.hx",57,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_63_upDownLoop,"MainMenuState","upDownLoop",0x581af356,"MainMenuState.upDownLoop","MainMenuState.hx",63,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_16_boot,"MainMenuState","boot",0xa741c867,"MainMenuState.boot","MainMenuState.hx",16,0x0e5db805)

void MainMenuState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_14_new)
HXDLIN(  14)		super::__construct(MaxSize);
            	}

Dynamic MainMenuState_obj::__CreateEmpty() { return new MainMenuState_obj; }

void *MainMenuState_obj::_hx_vtable = 0;

Dynamic MainMenuState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MainMenuState_obj > _hx_result = new MainMenuState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MainMenuState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6915cded) {
		if (inClassId<=(int)0x62817b24) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x62817b24;
		} else {
			return inClassId==(int)0x6915cded;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void MainMenuState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_24_create)
HXLINE(  26)		if (::hx::IsNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE(  28)			::flixel::FlxG_obj::sound->playMusic(HX_("assets/music/mainMusic.ogg",97,4f,95,d2),((Float)0.8),true,null());
            		}
HXLINE(  31)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  32)		bg->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16744448,true,null());
HXLINE(  33)		this->add(bg);
HXLINE(  35)		this->super::create();
HXLINE(  36)		this->logo =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  37)		 ::flixel::FlxSprite _hx_tmp = this->logo;
HXDLIN(  37)		_hx_tmp->loadGraphic(::AssetPaths_obj::image(HX_("logo",6b,9f,b7,47)),null(),null(),null(),null(),null());
HXLINE(  38)		 ::flixel::FlxSprite _hx_tmp1 = this->logo;
HXDLIN(  38)		Float _hx_tmp2 = (( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) ));
HXDLIN(  38)		_hx_tmp1->set_x((_hx_tmp2 - (this->logo->get_width() / ( (Float)(2) ))));
HXLINE(  39)		this->logo->set_y(( (Float)((::flixel::FlxG_obj::height + 500)) ));
HXLINE(  40)		this->introTween = ::flixel::tweens::FlxTween_obj::tween(this->logo, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("y",79,00,00,00),(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.3)))),2, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::circOut_dyn())
            			->setFixed(1,HX_("onComplete",f8,d4,7e,5d),this->upDownLoop_dyn())));
HXLINE(  42)		this->logo->scale->set(10,10);
HXLINE(  43)		this->add(this->logo);
HXLINE(  46)		this->playButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,0,HX_("Play",14,5a,33,35),this->onClick_dyn());
HXLINE(  47)		 ::flixel::ui::FlxButton _hx_tmp3 = this->playButton;
HXDLIN(  47)		Float _hx_tmp4 = (( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) ));
HXDLIN(  47)		_hx_tmp3->set_x((_hx_tmp4 - this->playButton->get_width()));
HXLINE(  48)		 ::flixel::ui::FlxButton _hx_tmp5 = this->playButton;
HXDLIN(  48)		int _hx_tmp6 = ::flixel::FlxG_obj::height;
HXDLIN(  48)		_hx_tmp5->set_y(((( (Float)(_hx_tmp6) ) - this->playButton->get_height()) - ( (Float)(10) )));
HXLINE(  49)		this->add(this->playButton);
            	}


void MainMenuState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_54_update)
HXDLIN(  54)		this->super::update(elapsed);
            	}


void MainMenuState_obj::onClick(){
            	HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_57_onClick)
HXLINE(  58)		{
HXLINE(  58)			 ::flixel::FlxState nextState =  ::PlayState_obj::__alloc( HX_CTX ,null());
HXDLIN(  58)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  58)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE(  59)		::flixel::FlxG_obj::sound->play(HX_("assets/sounds/select.ogg",bc,24,e6,2e),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(MainMenuState_obj,onClick,(void))

void MainMenuState_obj::upDownLoop( ::flixel::tweens::FlxTween tween){
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_63_upDownLoop)
HXDLIN(  63)		::flixel::tweens::FlxTween_obj::tween(this->logo, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("y",79,00,00,00),(this->logo->y + 50))),((Float)0.6), ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.1))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            			->setFixed(2,HX_("type",ba,f2,08,4d),4)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainMenuState_obj,upDownLoop,(void))

::String MainMenuState_obj::ver;


::hx::ObjectPtr< MainMenuState_obj > MainMenuState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< MainMenuState_obj > __this = new MainMenuState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< MainMenuState_obj > MainMenuState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	MainMenuState_obj *__this = (MainMenuState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MainMenuState_obj), true, "MainMenuState"));
	*(void **)__this = MainMenuState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

MainMenuState_obj::MainMenuState_obj()
{
}

void MainMenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainMenuState);
	HX_MARK_MEMBER_NAME(playButton,"playButton");
	HX_MARK_MEMBER_NAME(introText,"introText");
	HX_MARK_MEMBER_NAME(introTween,"introTween");
	HX_MARK_MEMBER_NAME(logo,"logo");
	HX_MARK_MEMBER_NAME(infiniteTween,"infiniteTween");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainMenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(playButton,"playButton");
	HX_VISIT_MEMBER_NAME(introText,"introText");
	HX_VISIT_MEMBER_NAME(introTween,"introTween");
	HX_VISIT_MEMBER_NAME(logo,"logo");
	HX_VISIT_MEMBER_NAME(infiniteTween,"infiniteTween");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MainMenuState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"logo") ) { return ::hx::Val( logo ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onClick") ) { return ::hx::Val( onClick_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"introText") ) { return ::hx::Val( introText ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playButton") ) { return ::hx::Val( playButton ); }
		if (HX_FIELD_EQ(inName,"introTween") ) { return ::hx::Val( introTween ); }
		if (HX_FIELD_EQ(inName,"upDownLoop") ) { return ::hx::Val( upDownLoop_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"infiniteTween") ) { return ::hx::Val( infiniteTween ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MainMenuState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ver") ) { outValue = ( ver ); return true; }
	}
	return false;
}

::hx::Val MainMenuState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"logo") ) { logo=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"introText") ) { introText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playButton") ) { playButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"introTween") ) { introTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"infiniteTween") ) { infiniteTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MainMenuState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ver") ) { ver=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void MainMenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("playButton",06,f3,a3,80));
	outFields->push(HX_("introText",39,69,67,a6));
	outFields->push(HX_("introTween",5f,08,ec,ff));
	outFields->push(HX_("logo",6b,9f,b7,47));
	outFields->push(HX_("infiniteTween",f7,c2,2d,13));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MainMenuState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(MainMenuState_obj,playButton),HX_("playButton",06,f3,a3,80)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(MainMenuState_obj,introText),HX_("introText",39,69,67,a6)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(MainMenuState_obj,introTween),HX_("introTween",5f,08,ec,ff)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,logo),HX_("logo",6b,9f,b7,47)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(MainMenuState_obj,infiniteTween),HX_("infiniteTween",f7,c2,2d,13)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MainMenuState_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &MainMenuState_obj::ver,HX_("ver",63,e2,59,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MainMenuState_obj_sMemberFields[] = {
	HX_("playButton",06,f3,a3,80),
	HX_("introText",39,69,67,a6),
	HX_("introTween",5f,08,ec,ff),
	HX_("logo",6b,9f,b7,47),
	HX_("infiniteTween",f7,c2,2d,13),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("onClick",a9,1a,9c,de),
	HX_("upDownLoop",61,19,f8,81),
	::String(null()) };

static void MainMenuState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainMenuState_obj::ver,"ver");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MainMenuState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainMenuState_obj::ver,"ver");
};

#endif

::hx::Class MainMenuState_obj::__mClass;

static ::String MainMenuState_obj_sStaticFields[] = {
	HX_("ver",63,e2,59,00),
	::String(null())
};

void MainMenuState_obj::__register()
{
	MainMenuState_obj _hx_dummy;
	MainMenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MainMenuState",59,88,5e,20);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MainMenuState_obj::__GetStatic;
	__mClass->mSetStaticField = &MainMenuState_obj::__SetStatic;
	__mClass->mMarkFunc = MainMenuState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MainMenuState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MainMenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MainMenuState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MainMenuState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MainMenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MainMenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MainMenuState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_16_boot)
HXDLIN(  16)		ver = HX_("0.1",73,94,24,00);
            	}
}

