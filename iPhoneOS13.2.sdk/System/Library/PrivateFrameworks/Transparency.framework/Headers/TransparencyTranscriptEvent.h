//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface TransparencyTranscriptEvent : NSObject
{
    BOOL _success;
    NSDate *_timestamp;
    NSString *_name;
}

@property BOOL success; // @synthesize success=_success;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSDate *timestamp; // @synthesize timestamp=_timestamp;
// - (void).cxx_destruct;
- (id)serialize;
- (id)initWithName:(id)arg1;

@end

