//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface CKDPrivacyManager : NSObject
{
    NSObject<OS_dispatch_queue> *_privacyManagerQueue;
    NSMutableSet *_operations;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableSet *operations; // @synthesize operations=_operations;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *privacyManagerQueue; // @synthesize privacyManagerQueue=_privacyManagerQueue;
// - (void).cxx_destruct;
- (void)_resetPrivacySettingsForAppContainerAccountTuple:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resetPrivacySettingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_init;
- (id)init;

@end

