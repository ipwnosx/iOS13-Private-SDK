//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;

@interface NSDate (IC)
+ (id)ic_modificationDateForNoteBeingEdited;
- (BOOL)ic_isLaterThanDate:(id)arg1;
- (BOOL)ic_isEarlierThanDate:(id)arg1;
- (id)ic_briefFormattedDate:(BOOL)arg1;
@property(readonly, nonatomic) NSString *ic_briefFormattedDateForAccessibility;
@property(readonly, nonatomic) NSString *ic_briefFormattedDate;
@property(readonly, nonatomic) NSString *ic_shortFormattedDate;
@property(readonly, nonatomic) NSString *ic_localDateWithSeconds;
@property(readonly, nonatomic) BOOL ic_isYesterday;
@property(readonly, nonatomic) BOOL ic_isToday;
@end

