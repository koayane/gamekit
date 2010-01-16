/*
-------------------------------------------------------------------------------
	This file is part of OgreKit.
	http://gamekit.googlecode.com/

	Copyright (c) 2009 Charlie C.
-------------------------------------------------------------------------------
 This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
	 claim that you wrote the original software. If you use this software
	 in a product, an acknowledgment in the product documentation would be
	 appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
	 misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
-------------------------------------------------------------------------------
*/
#ifndef _OgreKitPlugins_h_
#define _OgreKitPlugins_h_

#include "OgrePrerequisites.h"


typedef enum OgreRenderSystem
{
	OGRE_RS_GL,
	OGRE_RS_GLES,
	OGRE_RS_D3D9,
	OGRE_RS_D3D10,
	OGRE_RS_D3D11,
	OGRE_RS_UNKNOWN,
}OgreRenderSystem;

extern OgreRenderSystem OgreKitFindRenderSystem(OgreRenderSystem wanted);


// ----------------------------------------------------------------------------
class OgreKitPlugins
{
public:
	OgreKitPlugins();
	~OgreKitPlugins();

	void createRenderSystem(Ogre::Root *, OgreRenderSystem);

private:
	Ogre::Plugin *m_renderSystem;
};


#endif//_OgreKitPlugins_h_
