//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter;

@interface SiriUICardLogger : NSObject
{
    NSDateFormatter *_dateFormatter;
}

+ (id)logCard:(id)arg1 format:(NSUInteger)arg2;
+ (id)logCard:(id)arg1;
+ (id)logCardData:(id)arg1 format:(NSUInteger)arg2;
+ (id)logCardData:(id)arg1;
+ (id)_sharedInstance;
// - (void).cxx_destruct;
- (id)_nowString;
- (id)_dateFormatter;
- (id)_currentFilenameForFormat:(NSUInteger)arg1;
- (id)init;

@end

