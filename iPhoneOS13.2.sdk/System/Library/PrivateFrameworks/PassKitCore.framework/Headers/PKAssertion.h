//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSString;

@interface PKAssertion : NSObject
{
    NSLock *_invalidationLock;
    BOOL _invalidateWhenBackgrounded;
    NSString *_reason;
    NSUInteger _type;
    id /* CDUnknownBlockType */ _invalidationHandler;
    NSString *_identifier;
}

+ (void)isAssertionValid:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)acquireAssertionOfType:(NSUInteger)arg1 withReason:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)preheatConnection;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(nonatomic) BOOL invalidateWhenBackgrounded; // @synthesize invalidateWhenBackgrounded=_invalidateWhenBackgrounded;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
// - (void).cxx_destruct;
- (id)description;
- (void)markAsInvalidatedAndNotify;
- (void)invalidate;
- (void)dealloc;
- (id)initWithType:(NSUInteger)arg1 identifier:(id)arg2 reason:(id)arg3;

@end

