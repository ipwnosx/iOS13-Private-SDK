//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <AppSSO/SOHostExtensionContextProtocol-Protocol.h>

@class SOExtension;

__attribute__((visibility("hidden")))
@interface SOHostExtensionContext : NSExtensionContext <SOHostExtensionContextProtocol>
{
    SOExtension *_contextExtension;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
@property __weak SOExtension *contextExtension; // @synthesize contextExtension=_contextExtension;
// - (void).cxx_destruct;
- (void)authorizationDidCompleteWithCredential:(id)arg1 error:(id)arg2;
- (void)presentAuthorizationViewControllerWithHints:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)canOpenURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)remoteContextWithError:(id )arg1;

@end

