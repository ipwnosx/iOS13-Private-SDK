//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface HDMCNotification : NSObject <NSCopying>
{
    long long _dayIndex;
    NSString *_category;
}

@property(readonly, copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(readonly, nonatomic) long long dayIndex; // @synthesize dayIndex=_dayIndex;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithDayIndex:(long long)arg1 category:(id)arg2;

@end

