// Copyright (c) 2012-2014 The CEF Python authors. All rights reserved.
// License: New BSD License.
// Website: http://code.google.com/p/cefpython/

// ClientHandler code is running only in the Browser process.

#pragma once

#if defined(_WIN32)
#include "../windows/stdint.h"
#endif

#include "common/cefpython_public_api.h"

#include "context_menu_handler.h"
#include "display_handler.h"
#include "download_handler.h"
#include "focus_handler.h"
#include "js_dialog_handler.h"
#include "keyboard_handler.h"
#include "lifespan_handler.h"
#include "load_handler.h"
#include "render_handler.h"
#include "request_handler.h"


class ClientHandler : public CefClient,
                      public ContextMenuHandler,
                      public DisplayHandler,
                      public DownloadHandler,
                      public FocusHandler,
                      public JSDialogHandler,
                      public KeyboardHandler,
                      public LifespanHandler,
                      public LoadHandler,
                      public RenderHandler,
                      public RequestHandler
{
public:
    ClientHandler(){}
    virtual ~ClientHandler(){}

    CefRefPtr<CefContextMenuHandler> GetContextMenuHandler() override {
        return this;
    }

    CefRefPtr<CefDisplayHandler> GetDisplayHandler() override {
        return this;
    }

    CefRefPtr<CefDownloadHandler> GetDownloadHandler() override {
        return this;
    }

    CefRefPtr<CefFocusHandler> GetFocusHandler() override {
        return this;
    }

    CefRefPtr<CefJSDialogHandler> GetJSDialogHandler() override {
        return this;
    }

    CefRefPtr<CefKeyboardHandler> GetKeyboardHandler() override {
        return this;
    }

    CefRefPtr<CefLifeSpanHandler> GetLifeSpanHandler() override {
        return this;
    }

    CefRefPtr<CefLoadHandler> GetLoadHandler() override {
        return this;
    }

    CefRefPtr<CefRenderHandler> GetRenderHandler() override {
        return this;
    }

    CefRefPtr<CefRequestHandler> GetRequestHandler() override {
        return this;
    }

    bool OnProcessMessageReceived(CefRefPtr<CefBrowser> browser,
                                  CefProcessId source_process,
                                  CefRefPtr<CefProcessMessage> message
                                  ) override;

private:
  IMPLEMENT_REFCOUNTING(ClientHandler);
};
