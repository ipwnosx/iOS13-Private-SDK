//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUIAppIconImage.h>

@class NSDate;

@interface SearchUICalendarIconImage : SearchUIAppIconImage
{
    NSDate *_date;
}

@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)loadImage;
- (id)initWithDate:(id)arg1 variant:(NSUInteger)arg2;

@end

