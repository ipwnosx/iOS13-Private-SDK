//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class BKSHIDEventDeferringEnvironment, BKSHIDEventDeferringToken, BKSHIDEventDisplay;

@interface BKSHIDEventDeferringPredicate : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>
{
    BKSHIDEventDeferringEnvironment *_environment;
    BKSHIDEventDisplay *_display;
    BKSHIDEventDeferringToken *_token;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) BKSHIDEventDeferringToken *token; // @synthesize token=_token;
@property(readonly, copy, nonatomic) BKSHIDEventDisplay *display; // @synthesize display=_display;
@property(readonly, nonatomic) BKSHIDEventDeferringEnvironment *environment; // @synthesize environment=_environment;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)_initWithEnvironment:(id)arg1 display:(id)arg2 token:(id)arg3;
- (id)init;

@end

