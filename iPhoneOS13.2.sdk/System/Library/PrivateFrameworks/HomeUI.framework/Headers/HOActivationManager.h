//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface HOActivationManager : NSObject
{
    NSDate *_lastEnteredForegroundDate;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDate *lastEnteredForegroundDate; // @synthesize lastEnteredForegroundDate=_lastEnteredForegroundDate;
// - (void).cxx_destruct;
- (void)_enteredForeground:(id)arg1;
- (id)init;

@end

