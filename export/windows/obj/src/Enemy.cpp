// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Enemy
#include <Enemy.h>
#endif
#ifndef INCLUDED_EnemyType
#include <EnemyType.h>
#endif
#ifndef INCLUDED_FSM
#include <FSM.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_math_FlxVelocity
#include <flixel/math/FlxVelocity.h>
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
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c595a05c1c7a687d_31_new,"Enemy","new",0x35d4571a,"Enemy.new","Enemy.hx",31,0xbda88996)
static const int _hx_array_data_03a88228_1[] = {
	(int)0,(int)1,(int)0,(int)2,
};
static const int _hx_array_data_03a88228_2[] = {
	(int)3,(int)4,(int)3,(int)5,
};
static const int _hx_array_data_03a88228_3[] = {
	(int)6,(int)7,(int)6,(int)8,
};
HX_LOCAL_STACK_FRAME(_hx_pos_c595a05c1c7a687d_57_update,"Enemy","update",0xcf0e6f8f,"Enemy.update","Enemy.hx",57,0xbda88996)
HX_LOCAL_STACK_FRAME(_hx_pos_c595a05c1c7a687d_105_idle,"Enemy","idle",0xe0a9031a,"Enemy.idle","Enemy.hx",105,0xbda88996)
HX_LOCAL_STACK_FRAME(_hx_pos_c595a05c1c7a687d_130_chase,"Enemy","chase",0x416ec6e8,"Enemy.chase","Enemy.hx",130,0xbda88996)
HX_LOCAL_STACK_FRAME(_hx_pos_c595a05c1c7a687d_142_changeType,"Enemy","changeType",0x98354cd0,"Enemy.changeType","Enemy.hx",142,0xbda88996)
HX_LOCAL_STACK_FRAME(_hx_pos_c595a05c1c7a687d_19_boot,"Enemy","boot",0xdc10e038,"Enemy.boot","Enemy.hx",19,0xbda88996)

void Enemy_obj::__construct(Float x,Float y, ::EnemyType type){
            	HX_GC_STACKFRAME(&_hx_pos_c595a05c1c7a687d_31_new)
HXLINE(  32)		super::__construct(x,y,null());
HXLINE(  33)		this->type = type;
HXLINE(  34)		::String graphic;
HXDLIN(  34)		if (::hx::IsEq( type,::EnemyType_obj::BOSS_dyn() )) {
HXLINE(  34)			graphic = HX_("assets/images/boss.png",13,fa,25,fc);
            		}
            		else {
HXLINE(  34)			graphic = HX_("assets/images/enemy.png",78,ee,d4,3b);
            		}
HXLINE(  35)		this->loadGraphic(graphic,true,16,16,null(),null());
HXLINE(  36)		this->_facingFlip->set(1, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),false)
            			->setFixed(1,HX_("y",79,00,00,00),false)));
HXLINE(  37)		this->_facingFlip->set(16, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),true)
            			->setFixed(1,HX_("y",79,00,00,00),false)));
HXLINE(  38)		this->animation->add(HX_("d",64,00,00,00),::Array_obj< int >::fromData( _hx_array_data_03a88228_1,4),6,false,null(),null());
HXLINE(  39)		this->animation->add(HX_("lr",86,5e,00,00),::Array_obj< int >::fromData( _hx_array_data_03a88228_2,4),6,false,null(),null());
HXLINE(  40)		this->animation->add(HX_("u",75,00,00,00),::Array_obj< int >::fromData( _hx_array_data_03a88228_3,4),6,false,null(),null());
HXLINE(  41)		 ::flixel::math::FlxPoint _hx_tmp = this->drag;
HXDLIN(  41)		_hx_tmp->set_x(this->drag->set_y(( (Float)(10) )));
HXLINE(  42)		this->set_width(( (Float)(8) ));
HXLINE(  43)		this->set_height(( (Float)(14) ));
HXLINE(  44)		this->offset->set_x(( (Float)(4) ));
HXLINE(  45)		this->offset->set_y(( (Float)(2) ));
HXLINE(  47)		this->brain =  ::FSM_obj::__alloc( HX_CTX ,this->idle_dyn());
HXLINE(  48)		this->idleTimer = ( (Float)(0) );
HXLINE(  49)		this->seesPlayer = false;
HXLINE(  50)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  50)		point->_inPool = false;
HXDLIN(  50)		this->playerPosition = point;
HXLINE(  52)		this->stepSound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/step.wav",29,a0,d3,5a),((Float)0.4),null(),null(),null(),null(),null(),null(),null());
HXLINE(  53)		this->stepSound->proximity(x,y,::flixel::FlxG_obj::camera->target,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.6)),null());
            	}

Dynamic Enemy_obj::__CreateEmpty() { return new Enemy_obj; }

void *Enemy_obj::_hx_vtable = 0;

Dynamic Enemy_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Enemy_obj > _hx_result = new Enemy_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Enemy_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4fa17fa0) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x4fa17fa0;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Enemy_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_c595a05c1c7a687d_57_update)
HXLINE(  58)		if (::flixel::effects::FlxFlicker_obj::isFlickering(::hx::ObjectPtr<OBJ_>(this))) {
HXLINE(  59)			return;
            		}
HXLINE(  61)		bool _hx_tmp;
HXDLIN(  61)		bool _hx_tmp1;
HXDLIN(  61)		if ((this->velocity->x == 0)) {
HXLINE(  61)			_hx_tmp1 = (this->velocity->y != 0);
            		}
            		else {
HXLINE(  61)			_hx_tmp1 = true;
            		}
HXDLIN(  61)		if (_hx_tmp1) {
HXLINE(  61)			_hx_tmp = (this->touching == 0);
            		}
            		else {
HXLINE(  61)			_hx_tmp = false;
            		}
HXDLIN(  61)		if (_hx_tmp) {
HXLINE(  63)			if ((::Math_obj::abs(this->velocity->x) > ::Math_obj::abs(this->velocity->y))) {
HXLINE(  65)				if ((this->velocity->x < 0)) {
HXLINE(  66)					this->set_facing(1);
            				}
            				else {
HXLINE(  68)					this->set_facing(16);
            				}
            			}
            			else {
HXLINE(  72)				if ((this->velocity->y < 0)) {
HXLINE(  73)					this->set_facing(256);
            				}
            				else {
HXLINE(  75)					this->set_facing(4096);
            				}
            			}
HXLINE(  78)			switch((int)(this->facing)){
            				case (int)1: case (int)16: {
HXLINE(  81)					this->animation->play(HX_("lr",86,5e,00,00),null(),null(),null());
            				}
            				break;
            				case (int)256: {
HXLINE(  84)					this->animation->play(HX_("u",75,00,00,00),null(),null(),null());
            				}
            				break;
            				case (int)4096: {
HXLINE(  87)					this->animation->play(HX_("d",64,00,00,00),null(),null(),null());
            				}
            				break;
            				default:{
            				}
            			}
            		}
HXLINE(  93)		bool _hx_tmp2;
HXDLIN(  93)		bool _hx_tmp3;
HXDLIN(  93)		if ((this->velocity->x == 0)) {
HXLINE(  93)			_hx_tmp3 = (this->velocity->y != 0);
            		}
            		else {
HXLINE(  93)			_hx_tmp3 = true;
            		}
HXDLIN(  93)		if (_hx_tmp3) {
HXLINE(  93)			_hx_tmp2 = (this->touching == 0);
            		}
            		else {
HXLINE(  93)			_hx_tmp2 = false;
            		}
HXDLIN(  93)		if (_hx_tmp2) {
HXLINE(  95)			{
HXLINE(  95)				 ::flixel::_hx_system::FlxSound _this = this->stepSound;
HXDLIN(  95)				Float X = (this->x + (( (Float)(this->frameWidth) ) / ( (Float)(2) )));
HXDLIN(  95)				Float Y = this->y;
HXDLIN(  95)				Float Y1 = (Y + this->get_height());
HXDLIN(  95)				_this->x = X;
HXDLIN(  95)				_this->y = Y1;
            			}
HXLINE(  96)			this->stepSound->play(null(),null(),null());
            		}
HXLINE(  99)		this->brain->update(elapsed);
HXLINE( 100)		this->super::update(elapsed);
            	}


void Enemy_obj::idle(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_c595a05c1c7a687d_105_idle)
HXDLIN( 105)		if (this->seesPlayer) {
HXLINE( 107)			this->brain->activeState = this->chase_dyn();
            		}
            		else {
HXLINE( 109)			if ((this->idleTimer <= 0)) {
HXLINE( 111)				if ((::flixel::FlxG_obj::random->_hx_float(0,100,null()) < 1)) {
HXLINE( 113)					this->moveDirection = ( (Float)(-1) );
HXLINE( 114)					 ::flixel::math::FlxPoint _hx_tmp = this->velocity;
HXDLIN( 114)					_hx_tmp->set_x(this->velocity->set_y(( (Float)(0) )));
            				}
            				else {
HXLINE( 118)					this->moveDirection = ( (Float)((::flixel::FlxG_obj::random->_hx_int(0,8,null()) * 45)) );
            				}
HXLINE( 122)				this->idleTimer = ( (Float)(::flixel::FlxG_obj::random->_hx_int(1,4,null())) );
            			}
            			else {
HXLINE( 125)				 ::Enemy _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 125)				_hx_tmp->idleTimer = (_hx_tmp->idleTimer - elapsed);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Enemy_obj,idle,(void))

void Enemy_obj::chase(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_c595a05c1c7a687d_130_chase)
HXDLIN( 130)		if (!(this->seesPlayer)) {
HXLINE( 132)			this->brain->activeState = this->idle_dyn();
            		}
            		else {
HXLINE( 136)			::flixel::math::FlxVelocity_obj::moveTowardsPoint(::hx::ObjectPtr<OBJ_>(this),this->playerPosition,140,null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Enemy_obj,chase,(void))

void Enemy_obj::changeType( ::EnemyType type){
            	HX_STACKFRAME(&_hx_pos_c595a05c1c7a687d_142_changeType)
HXDLIN( 142)		if (::hx::IsNotEq( this->type,type )) {
HXLINE( 144)			this->type = type;
HXLINE( 145)			::String graphic;
HXDLIN( 145)			if (::hx::IsEq( type,::EnemyType_obj::BOSS_dyn() )) {
HXLINE( 145)				graphic = HX_("assets/images/boss.png",13,fa,25,fc);
            			}
            			else {
HXLINE( 145)				graphic = HX_("assets/images/enemy.png",78,ee,d4,3b);
            			}
HXLINE( 146)			this->loadGraphic(graphic,true,16,16,null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Enemy_obj,changeType,(void))

Float Enemy_obj::SPEED;


::hx::ObjectPtr< Enemy_obj > Enemy_obj::__new(Float x,Float y, ::EnemyType type) {
	::hx::ObjectPtr< Enemy_obj > __this = new Enemy_obj();
	__this->__construct(x,y,type);
	return __this;
}

::hx::ObjectPtr< Enemy_obj > Enemy_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y, ::EnemyType type) {
	Enemy_obj *__this = (Enemy_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Enemy_obj), true, "Enemy"));
	*(void **)__this = Enemy_obj::_hx_vtable;
	__this->__construct(x,y,type);
	return __this;
}

Enemy_obj::Enemy_obj()
{
}

void Enemy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Enemy);
	HX_MARK_MEMBER_NAME(brain,"brain");
	HX_MARK_MEMBER_NAME(idleTimer,"idleTimer");
	HX_MARK_MEMBER_NAME(moveDirection,"moveDirection");
	HX_MARK_MEMBER_NAME(stepSound,"stepSound");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(seesPlayer,"seesPlayer");
	HX_MARK_MEMBER_NAME(playerPosition,"playerPosition");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Enemy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(brain,"brain");
	HX_VISIT_MEMBER_NAME(idleTimer,"idleTimer");
	HX_VISIT_MEMBER_NAME(moveDirection,"moveDirection");
	HX_VISIT_MEMBER_NAME(stepSound,"stepSound");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(seesPlayer,"seesPlayer");
	HX_VISIT_MEMBER_NAME(playerPosition,"playerPosition");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Enemy_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		if (HX_FIELD_EQ(inName,"idle") ) { return ::hx::Val( idle_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"brain") ) { return ::hx::Val( brain ); }
		if (HX_FIELD_EQ(inName,"chase") ) { return ::hx::Val( chase_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"idleTimer") ) { return ::hx::Val( idleTimer ); }
		if (HX_FIELD_EQ(inName,"stepSound") ) { return ::hx::Val( stepSound ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"seesPlayer") ) { return ::hx::Val( seesPlayer ); }
		if (HX_FIELD_EQ(inName,"changeType") ) { return ::hx::Val( changeType_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"moveDirection") ) { return ::hx::Val( moveDirection ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"playerPosition") ) { return ::hx::Val( playerPosition ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Enemy_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::EnemyType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"brain") ) { brain=inValue.Cast<  ::FSM >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"idleTimer") ) { idleTimer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stepSound") ) { stepSound=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"seesPlayer") ) { seesPlayer=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"moveDirection") ) { moveDirection=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"playerPosition") ) { playerPosition=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Enemy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("brain",b6,22,e9,b8));
	outFields->push(HX_("idleTimer",11,60,35,6d));
	outFields->push(HX_("moveDirection",ee,f4,ef,2a));
	outFields->push(HX_("stepSound",e3,21,38,f1));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("seesPlayer",01,05,0b,46));
	outFields->push(HX_("playerPosition",2a,11,41,dd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Enemy_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::FSM */ ,(int)offsetof(Enemy_obj,brain),HX_("brain",b6,22,e9,b8)},
	{::hx::fsFloat,(int)offsetof(Enemy_obj,idleTimer),HX_("idleTimer",11,60,35,6d)},
	{::hx::fsFloat,(int)offsetof(Enemy_obj,moveDirection),HX_("moveDirection",ee,f4,ef,2a)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(Enemy_obj,stepSound),HX_("stepSound",e3,21,38,f1)},
	{::hx::fsObject /*  ::EnemyType */ ,(int)offsetof(Enemy_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsBool,(int)offsetof(Enemy_obj,seesPlayer),HX_("seesPlayer",01,05,0b,46)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(Enemy_obj,playerPosition),HX_("playerPosition",2a,11,41,dd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Enemy_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &Enemy_obj::SPEED,HX_("SPEED",67,cf,57,ff)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Enemy_obj_sMemberFields[] = {
	HX_("brain",b6,22,e9,b8),
	HX_("idleTimer",11,60,35,6d),
	HX_("moveDirection",ee,f4,ef,2a),
	HX_("stepSound",e3,21,38,f1),
	HX_("type",ba,f2,08,4d),
	HX_("seesPlayer",01,05,0b,46),
	HX_("playerPosition",2a,11,41,dd),
	HX_("update",09,86,05,87),
	HX_("idle",14,a7,b3,45),
	HX_("chase",ae,9d,b3,45),
	HX_("changeType",4a,28,52,27),
	::String(null()) };

static void Enemy_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Enemy_obj::SPEED,"SPEED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Enemy_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Enemy_obj::SPEED,"SPEED");
};

#endif

::hx::Class Enemy_obj::__mClass;

static ::String Enemy_obj_sStaticFields[] = {
	HX_("SPEED",67,cf,57,ff),
	::String(null())
};

void Enemy_obj::__register()
{
	Enemy_obj _hx_dummy;
	Enemy_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Enemy",28,82,a8,03);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Enemy_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Enemy_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Enemy_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Enemy_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Enemy_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Enemy_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Enemy_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Enemy_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c595a05c1c7a687d_19_boot)
HXDLIN(  19)		SPEED = ((Float)140);
            	}
}

