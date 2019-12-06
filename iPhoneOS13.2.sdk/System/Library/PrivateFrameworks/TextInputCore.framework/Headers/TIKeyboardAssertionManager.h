//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/TIKeyboardAssertionManaging-Protocol.h>

@class NSHashTable;
@protocol TIKeyboardAssertionManagerDelegate;

@interface TIKeyboardAssertionManager : NSObject <TIKeyboardAssertionManaging>
{
    BOOL _hasAssertions;
    BOOL _pendingUpdate;
    BOOL _hasBackgroundActivityAssertions;
    id <TIKeyboardAssertionManagerDelegate> _delegate;
    NSHashTable *_assertions;
    long long _backgroundActivityAssertions;
}

+ (id)singletonInstance;
+ (id)sharedAssertionManager;
+ (void)setSharedAssertionManager:(id)arg1;
@property(nonatomic) long long backgroundActivityAssertions; // @synthesize backgroundActivityAssertions=_backgroundActivityAssertions;
@property(nonatomic) BOOL hasBackgroundActivityAssertions; // @synthesize hasBackgroundActivityAssertions=_hasBackgroundActivityAssertions;
@property(readonly, nonatomic) NSHashTable *assertions; // @synthesize assertions=_assertions;
@property(nonatomic) BOOL pendingUpdate; // @synthesize pendingUpdate=_pendingUpdate;
@property(nonatomic) BOOL hasAssertions; // @synthesize hasAssertions=_hasAssertions;
@property(nonatomic) id <TIKeyboardAssertionManagerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)releaseBackgroundActivityAssertion;
- (void)retainBackgroundActivityAssertion;
- (void)removeAssertionForObject:(id)arg1;
- (void)addAssertionForObject:(id)arg1;
- (void)performBackgroundActivityUpdate;
- (void)performUpdate;
- (void)scheduleUpdate;
- (id)init;

@end

