//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface TSCHChartAxisID : NSObject <NSCopying>
{
    int mType;
    NSUInteger mOrdinal;
}

+ (id)axisIDWithType:(int)arg1 ordinal:(NSUInteger)arg2;
@property(readonly) NSUInteger ordinal; // @synthesize ordinal=mOrdinal;
@property(readonly) int type; // @synthesize type=mType;
// - (void)saveToArchive:(struct ChartAxisIDArchive )arg1;
// - (id)initWithArchive:(const struct ChartAxisIDArchive )arg1;
- (id)description;
- (id)debuggingName;
- (id)displayNameWithOrdinal:(BOOL)arg1;
- (BOOL)intersectsAxisID:(id)arg1;
- (long long)compare:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithType:(int)arg1 ordinal:(NSUInteger)arg2;

@end

