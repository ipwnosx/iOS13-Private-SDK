//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKLStreamObserver.h>

@class NSMutableDictionary;

@interface CKLStreamLogStatsObserver : CKLStreamObserver
{
    NSMutableDictionary *_totalSizeByLine;
    NSMutableDictionary *_totalCountByLine;
}

@property(retain) NSMutableDictionary *totalCountByLine; // @synthesize totalCountByLine=_totalCountByLine;
@property(retain) NSMutableDictionary *totalSizeByLine; // @synthesize totalSizeByLine=_totalSizeByLine;
// - (void).cxx_destruct;
- (void)finish;
- (void)eventMatched:(id)arg1;
- (id)initWithLogTypes:(NSUInteger)arg1;

@end

