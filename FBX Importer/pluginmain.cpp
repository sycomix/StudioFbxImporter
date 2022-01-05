/**********************************************************************
	Copyright (C) 2012-2021 Daz 3D, Inc. All Rights Reserved.

	This is UNPUBLISHED PROPRIETARY SOURCE CODE of Daz 3D, Inc;
	the contents of this file may not be disclosed to third parties,
	copied or duplicated in any form, in whole or in part, without the
	prior written permission of Daz 3D, Inc.
**********************************************************************/

/*****************************
	Include files
*****************************/
#include "dzplugin.h"
#include "dzapp.h"

#include "version.h"
#include "dzfbximporter.h"

/*****************************
   Plugin Definition
*****************************/

/**
	This macro creates the plugin definition, and the functions that are needed
	for Daz Studio to load the plugin.
**/
DZ_PLUGIN_DEFINITION( "FBX Importer" );

/**
	This macro sets the author string for the plugin
**/
DZ_PLUGIN_AUTHOR( "Daz 3D, Inc" );

/**
	This macro sets the version number for the plugin
**/
DZ_PLUGIN_VERSION( PLUGIN_MAJOR, PLUGIN_MINOR, PLUGIN_REV, PLUGIN_BUILD );

/**
	This macro sets the description string for the plugin. This is a good place
	to provide specific information about the plugin, including an HTML link to
	any external documentation. Links are shown in the system default browser.
**/
DZ_PLUGIN_DESCRIPTION(
	"Imports the Autodesk FBX format. "
	"<p>This software contains Autodesk&reg; FBX&reg; code developed by Autodesk, Inc. "
	"Copyright 2013 Autodesk, Inc. All rights, reserved. Such code is provided \"as is\" "
	"and Autodesk, Inc. disclaims any and all warranties, whether express or implied, including "
	"without limitation the implied warranties of merchantability, fitness for a particular "
	"purpose or non-infringement of third party rights. In no event shall Autodesk, Inc. be liable "
	"for any direct, indirect, incidental, special, exemplary, or consequential damages (including, "
	"but not limited to, procurement of substitute goods or services; loss of use, data, or profits; "
	"or business interruption) however caused and on any theory of liability, whether in contract, "
	"strict liability, or tort (including negligence or otherwise) arising in any way out of such code.</p>"
);

/**
	This macro adds this plugin's classes to the objects exported by the plugin, and specifies the
	GUID (Globally Unique Identifier) that makes this class unique from any other class
	that is available from Daz Studio or one of it's plug-ins. DO NOT USE the GUID below
	in your plug-in. Make sure that you generate a new GUID for every class that you export
	from your plug-in. To avoid potential conflicts, DO NOT USE the same class name in your own
	plugin.
**/
DZ_PLUGIN_CLASS_GUID( DzFbxImporter,	4E0BDC3A-2B5C-4E21-A250-1327D5D6A92B );
