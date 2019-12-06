//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DocumentManager/DOCRemoteAppearanceInterface-Protocol.h>

@class DOCConfiguration;
@protocol DOCHostDocumentBrowserViewControllerInterface, DOCHostTargetSelectionBrowserViewControllerProxy;

@protocol DOCServiceContextProtocol <DOCRemoteAppearanceInterface>
- (void)configureAsTargetSelectionBrowserWithHostProxy:(id <DOCHostTargetSelectionBrowserViewControllerProxy>)arg1 configuration:(DOCConfiguration *)arg2 completionBlock:(void (^)(id <DOCServiceTargetSelectionBrowserViewControllerProxy>))arg3;
- (void)configureAsDocumentBrowserWithHostProxy:(id <DOCHostDocumentBrowserViewControllerInterface>)arg1 configuration:(DOCConfiguration *)arg2 completionBlock:(void (^)(id <DOCServiceDocumentBrowserViewControllerInterface>))arg3;
@end

