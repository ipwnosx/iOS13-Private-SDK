//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, TSDDisplayLink;

@interface TSDDisplayLinkDispatch : NSObject
{
    TSDDisplayLink *_displayLink;
    NSMutableArray *_blocks;
}

- (void)performBlockNextFrame:(CDUnknownBlockType)arg1;
- (void)teardown;

@end

