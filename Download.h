// Download.h

#pragma once

#include <windows.h>
#include <commctrl.h>

#include "Resource.h"

#include "..\Common\Ascii.h"
#include "..\Common\Common.h"

#include "..\Classes\ArgumentListClass.h"
#include "..\Classes\ButtonWindowClass.h"
#include "..\Classes\ClipboardClass.h"
#include "..\Classes\DownloadListViewWindowClass.h"
#include "..\Classes\DroppedFilesClass.h"
#include "..\Classes\EditWindowClass.h"
#include "..\Classes\FontClass.h"
#include "..\Classes\HtmlFileClass.h"
#include "..\Classes\InternetClass.h"
#include "..\Classes\ListBoxWindowClass.h"
#include "..\Classes\MessageClass.h"
#include "..\Classes\MenuClass.h"
#include "..\Classes\StatusBarWindowClass.h"
#include "..\Classes\WindowClass.h"
#include "..\Classes\WindowClassClass.h"

#define MAIN_WINDOW_CLASS_NAME													"Main Download Window Class"

#define MAIN_WINDOW_CLASS_MENU_NAME												MAKEINTRESOURCE( IDR_MAIN_MENU )

#define MAIN_WINDOW_TEXT														"Download"

#define BUTTON_WINDOW_TEXT														"Go"
#define BUTTON_WINDOW_WIDTH														30
#define BUTTON_WINDOW_HEIGHT													25
#define BUTTON_WINDOW_ID														WM_USER

#define STATUS_LIST_BOX_WINDOW_HEIGHT											100

#define EDIT_WINDOW_DEFAULT_URL													"https://news.sky.com/uk"

#define DEFAULT_STRING_MUST_CONTAIN_VALUE										".jpg"

#define ABOUT_MESSAGE_TEXT														"Download\r\n"						\
																				"\r\n"								\
																				"Written by Jim Smith\r\n"			\
																				"\r\n"								\
																				"February 2025"

#define SUCCESSFULLY_DOWNLOADED_ITEMS_STATUS_MESSAGE_FORMAT_STRING				"Successfully downloaded %d items"
#define SUCCESSFULLY_DOWNLOADED_ITEM_STATUS_MESSAGE								"Successfully downloaded item"
#define UNABLE_TO_DOWNLOAD_ITEM_STATUS_MESSAGE									"Unable to download item"