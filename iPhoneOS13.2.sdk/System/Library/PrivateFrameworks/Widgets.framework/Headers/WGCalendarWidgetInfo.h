//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Widgets/WGWidgetInfo.h>

@class NSDate;

@interface WGCalendarWidgetInfo : WGWidgetInfo
{
    NSDate *_date;
}

+ (BOOL)isCalendarExtension:(id)arg1;
@property(retain, nonatomic, setter=_setDate:) NSDate *date; // @synthesize date=_date;
// - (void).cxx_destruct;
- (void)_handleSignificantTimeChange:(id)arg1;
- (void)_resetIconsImpl;
- (id)_queue_iconWithOutlineForWidgetWithIdentifier:(id)arg1 extension:(id)arg2;
- (id)_queue_iconWithSize:(CGSize)arg1 scale:(double)arg2 forWidgetWithIdentifier:(id)arg3 extension:(id)arg4;
- (id)initWithExtension:(id)arg1;

@end

