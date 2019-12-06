//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CPLForceSyncTask : NSObject
{
    BOOL _cancelled;
    NSArray *_scopeIdentifiers;
    NSString *_taskIdentifier;
}

@property(readonly, nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(copy, nonatomic) NSString *taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property(readonly, copy, nonatomic) NSArray *scopeIdentifiers; // @synthesize scopeIdentifiers=_scopeIdentifiers;
// - (void).cxx_destruct;
- (id)description;
- (void)cancelTask;
- (void)launch;
- (id)initWithScopeIdentifiers:(id)arg1;

@end

