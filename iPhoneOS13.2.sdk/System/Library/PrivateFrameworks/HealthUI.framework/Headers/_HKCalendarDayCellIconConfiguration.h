//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class UIColor;

@interface _HKCalendarDayCellIconConfiguration : NSObject <NSCopying>
{
    long long _dateIndex;
    UIColor *_color;
    long long _style;
}

+ (id)configurationWithDateIndex:(long long)arg1 color:(id)arg2 style:(long long)arg3;
// - (void).cxx_destruct;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;

@end

