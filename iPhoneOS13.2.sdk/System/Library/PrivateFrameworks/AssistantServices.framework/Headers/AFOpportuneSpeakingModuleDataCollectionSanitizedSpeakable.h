//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface AFOpportuneSpeakingModuleDataCollectionSanitizedSpeakable : NSObject
{
    NSString *_identifier;
    NSDate *_date;
}

@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (BOOL)isOlderThan:(id)arg1;
- (id)initWithDate:(id)arg1;

@end

