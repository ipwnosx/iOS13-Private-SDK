//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDStroke.h>

@class NSString;

@interface TSDSmartStroke : TSDStroke
{
    NSString *mStrokeName;
}

+ (id)strokeWithName:(id)arg1 color:(id)arg2 width:(double)arg3;
+ (Class)classForName:(id)arg1;
@property(copy, nonatomic) NSString *strokeName; // @synthesize strokeName=mStrokeName;
- (BOOL)shouldAntialiasDefeat;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)canApplyDirectlyToRepCALayer;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(double)arg6;
- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6;
- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 miterLimit:(double)arg7;

@end

