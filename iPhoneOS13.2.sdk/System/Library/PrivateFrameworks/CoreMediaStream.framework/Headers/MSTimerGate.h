//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSTimerGate : NSObject
{
    BOOL _enabled;
}

@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (void)enable;
- (void)disable;
- (id)init;

@end

