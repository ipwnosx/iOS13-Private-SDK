//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle;

@interface VKResourceManager : NSObject
{
    NSBundle *_vkBundle;
}

- (BOOL)isDevResourceWithName:(id)arg1;
- (id)pathForResourceWithName:(id)arg1;
- (id)dataForResourceWithName:(id)arg1;
- (id)_localNameForResourceName:(id)arg1;
- (void)dealloc;
- (id)init;

@end

