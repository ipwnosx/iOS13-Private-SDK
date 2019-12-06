//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface PLMomentCluster : NSObject
{
    NSArray *_moments;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDate *_localStartDate;
    NSDate *_localEndDate;
}

@property(readonly, nonatomic) NSDate *localEndDate; // @synthesize localEndDate=_localEndDate;
@property(readonly, nonatomic) NSDate *localStartDate; // @synthesize localStartDate=_localStartDate;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, copy, nonatomic) NSArray *moments; // @synthesize moments=_moments;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithMoments:(id)arg1;

@end

