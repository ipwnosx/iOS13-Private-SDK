//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PTOutlet : NSObject
{
    NSUInteger _nextToken;
    NSMutableDictionary *_actionsByToken;
}

// - (void).cxx_destruct;
- (void)_invokeActions;
- (id)_init;
- (void)removeActionForToken:(NSNumber *)arg1;
- (NSNumber *)addAction:(id /* CDUnknownBlockType */)arg1;

@end

