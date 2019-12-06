//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CoreTelephonyClient;

@interface TSCoreTelephonyClientCache : NSObject
{
    CoreTelephonyClient *_client;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)installPendingPlan:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pendingInstallItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)setDataFallbackEnabled:(BOOL)arg1 forIccid:(id)arg2;
- (BOOL)getTransferCapability:(NSUInteger)arg1;
- (void)isAnyPlanOfTransferCapability:(NSUInteger)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)bootstrapPlanTransferUsingMessageSession:(id)arg1;
- (void)transferPlansWithIdentifier:(id)arg1 fromDevice:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)transferPlanWithIdentifier:(id)arg1 fromDevice:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)transferPlanListWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

