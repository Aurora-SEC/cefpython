// Copyright (c) 2016 CEF Python. See the Authors and License files.

#include "load_handler.h"


void LoadHandler::OnLoadingStateChange(CefRefPtr<CefBrowser> browser,
                                       bool isLoading,
                                       bool canGoBack,
                                       bool canGoForward)
{
    REQUIRE_UI_THREAD();
    LoadHandler_OnLoadingStateChange(browser, isLoading, canGoBack,
                                     canGoForward);
}


void LoadHandler::OnLoadStart(CefRefPtr<CefBrowser> browser,
                              CefRefPtr<CefFrame> frame,
                              TransitionType transition_type)
{
    REQUIRE_UI_THREAD();
    LoadHandler_OnLoadStart(browser, frame);
}


void LoadHandler::OnLoadEnd(CefRefPtr<CefBrowser> browser,
                            CefRefPtr<CefFrame> frame,
                            int httpStatusCode)
{
    REQUIRE_UI_THREAD();
    LoadHandler_OnLoadEnd(browser, frame, httpStatusCode);
}


void LoadHandler::OnLoadError(CefRefPtr<CefBrowser> browser,
                              CefRefPtr<CefFrame> frame,
                              cef_errorcode_t errorCode,
                              const CefString& errorText,
                              const CefString& failedUrl)
{
    REQUIRE_UI_THREAD();
    LoadHandler_OnLoadError(browser, frame, errorCode, errorText, failedUrl);
}
