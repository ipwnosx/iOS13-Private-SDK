//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReminderKit/REMStoreInvocation.h>


@class NSDate, NSNumber, NSString;

@interface REMSiriSearchLimitedDataViewInvocation_fetchReminders : REMStoreInvocation <NSSecureCoding>
{
    NSString *_title;
    NSDate *_dueAfter;
    NSDate *_dueBefore;
    NSNumber *_completed;
    NSNumber *_hasLocation;
    NSString *_location;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *location; // @synthesize location=_location;
@property(readonly, nonatomic) NSNumber *hasLocation; // @synthesize hasLocation=_hasLocation;
@property(readonly, nonatomic) NSNumber *completed; // @synthesize completed=_completed;
@property(readonly, nonatomic) NSDate *dueBefore; // @synthesize dueBefore=_dueBefore;
@property(readonly, nonatomic) NSDate *dueAfter; // @synthesize dueAfter=_dueAfter;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 dueAfter:(id)arg2 dueBefore:(id)arg3 isCompleted:(id)arg4 hasLocation:(id)arg5 location:(id)arg6;

@end

