//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TMLUIControlActionTarget : NSObject
{
    NSString *_signalName;
    NSUInteger _controlEvent;
}

// - (void).cxx_destruct;
- (void)controlAction:(id)arg1 forEvent:(id)arg2;
- (id)initWithSignal:(id)arg1 controlEvent:(NSUInteger)arg2;

@end

