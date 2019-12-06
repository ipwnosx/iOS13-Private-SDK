//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVMLKit/_TVMLKitApplication-Protocol.h>

@class IKAppDataStorage, NSDictionary, TVApplicationControllerContext, UIViewController, UIWindow;
@protocol TVAppRootViewController, UITraitEnvironment;

__attribute__((visibility("hidden")))
@interface _TVMLKitApplication : NSObject <_TVMLKitApplication>
{
    BOOL _headless;
    TVApplicationControllerContext *_launchContext;
    IKAppDataStorage *_localDataStorage;
    UIViewController<TVAppRootViewController> *_appRootViewController;
    UIWindow *_keyWindow;
    id <UITraitEnvironment> _keyTraitEnvironment;
    NSDictionary *_javaScriptLaunchOptions;
}

@property(nonatomic) BOOL headless; // @synthesize headless=_headless;
@property(copy, nonatomic) NSDictionary *javaScriptLaunchOptions; // @synthesize javaScriptLaunchOptions=_javaScriptLaunchOptions;
@property(nonatomic) __weak id <UITraitEnvironment> keyTraitEnvironment; // @synthesize keyTraitEnvironment=_keyTraitEnvironment;
@property(nonatomic) __weak UIWindow *keyWindow; // @synthesize keyWindow=_keyWindow;
@property(nonatomic) __weak UIViewController<TVAppRootViewController> *appRootViewController; // @synthesize appRootViewController=_appRootViewController;
@property(nonatomic) __weak IKAppDataStorage *localDataStorage; // @synthesize localDataStorage=_localDataStorage;
@property(nonatomic) __weak TVApplicationControllerContext *launchContext; // @synthesize launchContext=_launchContext;
// - (void).cxx_destruct;
- (id)appTraitCollection;
- (BOOL)appIsPrivileged;
- (BOOL)appIsTrusted;
- (id)userDefaultsStorage;
- (id)vendorStorage;
- (id)vendorIdentifier;
- (BOOL)shouldIgnoreJSValidation;
- (id)localStorage;
- (id)appLaunchParams;
- (id)bagBootURLKey;
- (id)offlineJSURL;
- (id)appJSCachePath;
- (id)appLocalJSURL;
- (id)appJSURL;
- (id)appIdentifier;
- (id)activeDocument;
- (id)initWithLaunchContext:(id)arg1;

@end

