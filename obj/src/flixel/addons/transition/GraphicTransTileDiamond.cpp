// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_transition_GraphicTransTileDiamond
#include <flixel/addons/transition/GraphicTransTileDiamond.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_69f5c42c4cdafd80_47_new,"flixel.addons.transition.GraphicTransTileDiamond","new",0xc69d8d48,"flixel.addons.transition.GraphicTransTileDiamond.new","openfl/utils/_internal/AssetsMacro.hx",47,0xfdd54705)
HX_LOCAL_STACK_FRAME(_hx_pos_4254a9971902ea36_16_boot,"flixel.addons.transition.GraphicTransTileDiamond","boot",0xfb57124a,"flixel.addons.transition.GraphicTransTileDiamond.boot","flixel/addons/transition/FlxTransitionSprite.hx",16,0xd14f1ac3)
namespace flixel{
namespace addons{
namespace transition{

void GraphicTransTileDiamond_obj::__construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA){
            		 ::Dynamic transparent = __o_transparent;
            		if (::hx::IsNull(__o_transparent)) transparent = true;
            		 ::Dynamic fillRGBA = __o_fillRGBA;
            		if (::hx::IsNull(__o_fillRGBA)) fillRGBA = -1;
            	HX_STACKFRAME(&_hx_pos_69f5c42c4cdafd80_47_new)
HXLINE(  71)		super::__construct(0,0,transparent,fillRGBA);
HXLINE(  73)		 ::openfl::utils::ByteArrayData byteArray = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(::haxe::Resource_obj::getBytes(::flixel::addons::transition::GraphicTransTileDiamond_obj::resourceName));
HXLINE(  74)		{
HXLINE(  74)			 ::openfl::utils::ByteArrayData rawAlpha = null();
HXDLIN(  74)			 ::lime::graphics::Image image = ::lime::graphics::Image_obj::fromBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(byteArray));
HXDLIN(  74)			this->_hx___fromImage(image);
HXDLIN(  74)			if (::hx::IsNotNull( rawAlpha )) {
HXLINE(  74)				this->_hx___applyAlpha(rawAlpha);
            			}
            		}
            	}

Dynamic GraphicTransTileDiamond_obj::__CreateEmpty() { return new GraphicTransTileDiamond_obj; }

void *GraphicTransTileDiamond_obj::_hx_vtable = 0;

Dynamic GraphicTransTileDiamond_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicTransTileDiamond_obj > _hx_result = new GraphicTransTileDiamond_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicTransTileDiamond_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x15209c42;
	}
}

::String GraphicTransTileDiamond_obj::resourceName;


::hx::ObjectPtr< GraphicTransTileDiamond_obj > GraphicTransTileDiamond_obj::__new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	::hx::ObjectPtr< GraphicTransTileDiamond_obj > __this = new GraphicTransTileDiamond_obj();
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

::hx::ObjectPtr< GraphicTransTileDiamond_obj > GraphicTransTileDiamond_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	GraphicTransTileDiamond_obj *__this = (GraphicTransTileDiamond_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicTransTileDiamond_obj), true, "flixel.addons.transition.GraphicTransTileDiamond"));
	*(void **)__this = GraphicTransTileDiamond_obj::_hx_vtable;
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

GraphicTransTileDiamond_obj::GraphicTransTileDiamond_obj()
{
}

bool GraphicTransTileDiamond_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool GraphicTransTileDiamond_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicTransTileDiamond_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo GraphicTransTileDiamond_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &GraphicTransTileDiamond_obj::resourceName,HX_("resourceName",39,7a,62,90)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void GraphicTransTileDiamond_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicTransTileDiamond_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicTransTileDiamond_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicTransTileDiamond_obj::resourceName,"resourceName");
};

#endif

::hx::Class GraphicTransTileDiamond_obj::__mClass;

static ::String GraphicTransTileDiamond_obj_sStaticFields[] = {
	HX_("resourceName",39,7a,62,90),
	::String(null())
};

void GraphicTransTileDiamond_obj::__register()
{
	GraphicTransTileDiamond_obj _hx_dummy;
	GraphicTransTileDiamond_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.transition.GraphicTransTileDiamond",56,89,73,88);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicTransTileDiamond_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicTransTileDiamond_obj::__SetStatic;
	__mClass->mMarkFunc = GraphicTransTileDiamond_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GraphicTransTileDiamond_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GraphicTransTileDiamond_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicTransTileDiamond_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicTransTileDiamond_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicTransTileDiamond_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GraphicTransTileDiamond_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4254a9971902ea36_16_boot)
HXDLIN(  16)		resourceName = HX_("__ASSET__:bitmap_flixel_addons_transition_GraphicTransTileDiamond",cb,79,c6,30);
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace transition
