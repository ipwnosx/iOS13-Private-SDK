//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CCSModulePresentationOptions, NSString;

@protocol CCSRemoteServiceServerProtocol <NSObject>
- (void)presentModuleWithIdentifier:(NSString *)arg1 options:(CCSModulePresentationOptions *)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)requestEnableModuleWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)getEnabledStateOfModuleWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSUInteger))arg2;
- (void)requestAvailableModuleIdentifiersWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
@end

