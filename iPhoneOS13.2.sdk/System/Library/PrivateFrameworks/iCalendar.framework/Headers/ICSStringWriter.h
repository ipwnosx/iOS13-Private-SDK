//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iCalendar/ICSAppendable-Protocol.h>

@class NSMutableString, NSString;

@interface ICSStringWriter : NSObject <ICSAppendable>
{
    NSMutableString *_result;
}

// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)mutableResult;
- (id)result;
- (void)appendFormat:(id)arg1;
- (void)appendString:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)init;

@end

