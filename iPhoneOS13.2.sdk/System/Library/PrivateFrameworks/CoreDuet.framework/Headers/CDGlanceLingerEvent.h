//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface CDGlanceLingerEvent : NSObject
{
    NSString *_bundle;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property(retain) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain) NSString *bundle; // @synthesize bundle=_bundle;
// - (void).cxx_destruct;
- (id)description;

@end

