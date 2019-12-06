//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClockKit/CLKTimelineEntry-Protocol.h>

@class CLKComplicationTemplate, NSDate, NSString;

@interface CLKComplicationTimelineEntry : NSObject <NSCopying, NSSecureCoding, CLKTimelineEntry>
{
    BOOL _finalized;
    NSDate *_date;
    CLKComplicationTemplate *_complicationTemplate;
    NSString *_timelineAnimationGroup;
}

+ (BOOL)supportsSecureCoding;
+ (id)entryWithDate:(id)arg1 complicationTemplate:(id)arg2 timelineAnimationGroup:(id)arg3;
+ (id)entryWithDate:(id)arg1 complicationTemplate:(id)arg2;
@property(copy, nonatomic) NSString *timelineAnimationGroup; // @synthesize timelineAnimationGroup=_timelineAnimationGroup;
@property(copy, nonatomic) CLKComplicationTemplate *complicationTemplate; // @synthesize complicationTemplate=_complicationTemplate;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)finalizedCopy;
- (void)finalize;
- (void)validate;
- (void)validateComplicationFamily:(long long)arg1;

@end

