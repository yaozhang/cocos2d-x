/****************************************************************************
 Copyright (c) 2013-2014 Chukong Technologies Inc.
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/
#ifndef COCOS_SCRIPTING_LUA_BINDINGS_LUA_COCOS2DX_SPINE_MANUAL_H
#define COCOS_SCRIPTING_LUA_BINDINGS_LUA_COCOS2DX_SPINE_MANUAL_H

#ifdef __cplusplus
extern "C" {
#endif
#include "tolua++.h"
#ifdef __cplusplus
}
#endif

/// @cond
TOLUA_API int register_all_cocos2dx_spine_manual(lua_State* L);
/// @endcond

/**
 * @addtogroup lua
 * @{
 */

/**@~english
 * Call this function can import the lua bindings for the spine module.
 * After registering, we could call the related spine code conveniently in the lua.eg,sp.SkeletonAnimation:create("spine/goblins-ffd.json", "spine/goblins-ffd.atlas", 1.5).
 * If you don't want to use the spine module in the lua, you only don't call this registering function.
 * If you don't register the spine module, the package size would become smaller .
 * The current mechanism,this registering function is called in the lua_module_register.h
 * @~chinese 
 * 调用这个函数可以将Spine模块绑定到Lua层。
 * 调用这个注册函数后，我们可以方便地在Lua层调用Spine的相关代码，例如：sp.SkeletonAnimation:create("spine/goblins-ffd.json", "spine/goblins-ffd.atlas", 1.5)。
 * 如果你不想使用Spine模块，那么你就无需调用这个注册函数。这种情况下，最终包的大小也会变得更小一些。
 * 目前的机制,这个函数在lua_module_register.h中被调用。
 */
TOLUA_API int register_spine_module(lua_State* L);

// end group
/// @}
#endif // #ifndef COCOS_SCRIPTING_LUA_BINDINGS_LUA_COCOS2DX_SPINE_MANUAL_H
