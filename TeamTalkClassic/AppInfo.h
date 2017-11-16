/*
 * Copyright (c) 2005-2017, BearWare.dk
 * 
 * Contact Information:
 *
 * Bjoern D. Rasmussen
 * Kirketoften 5
 * DK-8260 Viby J
 * Denmark
 * Email: contact@bearware.dk
 * Phone: +45 20 20 54 59
 * Web: http://www.bearware.dk
 *
 * This source code is part of the TeamTalk 5 SDK owned by
 * BearWare.dk. All copyright statements may not be removed 
 * or altered from any source distribution. If you use this
 * software in a product, an acknowledgment in the product 
 * documentation is required.
 *
 */

#pragma once

#define COMPANYNAME             _T("BearWare.dk")
#define APPVERSION_SHORT        _T("5.3.0")
#define APPVERSION              _T( TEAMTALK_VERSION ) _T(" - Unreleased")

#ifdef ENABLE_ENCRYPTION
#define APPTITLE                _T("TeamTalk 5 Classic Professional v. ") APPVERSION
#define APPNAME                 _T("TeamTalk 5 Classic Professional")
#define APPTITLE_SHORT          _T("TeamTalk5ClassicPro")
#define SETTINGS_FILE           "TeamTalk5ClassicPro.xml"
#define SETTINGS_DEFAULT_FILE   "TeamTalk5ClassicPro.xml.default"
#else
#define APPTITLE                _T("TeamTalk 5 Classic v. ") APPVERSION
#define APPNAME                 _T("TeamTalk 5 Classic")
#define APPTITLE_SHORT          _T("TeamTalk5Classic")
#define SETTINGS_FILE           "TeamTalk5Classic.xml"
#define SETTINGS_DEFAULT_FILE   "TeamTalk5Classic.xml.default"
#endif

#define MANUALFILE              _T("TeamTalk5.chm")
#define WEBSITE                 _T("http://www.bearware.dk")
#define TEAMTALK_INSTALLDIR     _T("BearWare.dk")
#define TTURL                   _T("tt://")
#define TT_XML_ROOTNAME         "teamtalk"
#define TTFILE_EXT              ".tt"

#define MP3ENCDLL_FILENAME      _T("lame_enc.dll")

#define URL_PUBLICSERVER        _T("http://www.bearware.dk/teamtalk/tt5servers.php?client=") APPTITLE_SHORT _T("&version=") APPVERSION_SHORT _T("&dllversion=") _T( TEAMTALK_VERSION ) _T("&os=Windows")
#define URL_APPUPDATE           _T("http://www.bearware.dk/teamtalk/tt5update.php?client=")  APPTITLE_SHORT _T("&version=") APPVERSION_SHORT _T("&dllversion=") _T( TEAMTALK_VERSION ) _T("&os=Windows")

#define WEBLOGIN_FACEBOOK                   _T("facebook")
#define WEBLOGIN_FACEBOOK_CLIENTID          _T("611833262539381")
#define WEBLOGIN_FACEBOOK_REDIRECT          _T("https://www.facebook.com/connect/login_success.html")
#define WEBLOGIN_FACEBOOK_PASSWDPREFIX      _T("code=")
#define WEBLOGIN_FACEBOOK_USERNAMEPOSTFIX   _T("@facebook.com")
#define WEBLOGIN_FACEBOOK_PROFILE_URL       _T("https://facebook.com/")
