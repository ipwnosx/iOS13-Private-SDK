//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface DNDSModeDetails : NSObject <NSCopying>
{
    NSUInteger _interruptionSuppression;
}

+ (id)detailsForInactiveDoNotDisturb;
@property(readonly, nonatomic) NSUInteger interruptionSuppression; // @synthesize interruptionSuppression=_interruptionSuppression;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)restrictedDetailsWithDetails:(id)arg1;
- (id)initWithInterruptionSuppression:(NSUInteger)arg1;

@end

