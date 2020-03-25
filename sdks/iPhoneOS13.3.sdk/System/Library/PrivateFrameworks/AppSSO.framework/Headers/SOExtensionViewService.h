//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AppSSO/SORemoteExtensionViewProtocol-Protocol.h>

@class SORemoteExtensionContext;

__attribute__((visibility("hidden")))
@interface SOExtensionViewService : UIViewController <SORemoteExtensionViewProtocol>
{
    SORemoteExtensionContext *_extensionContext;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
@property __weak SORemoteExtensionContext *extensionContext; // @synthesize extensionContext=_extensionContext;
// - (void).cxx_destruct;
- (void)_connectChildView;
- (void)connectToContextWithSessionID:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)exportedInterface;
- (id)remoteViewControllerInterface;
- (void)loadView;

@end
