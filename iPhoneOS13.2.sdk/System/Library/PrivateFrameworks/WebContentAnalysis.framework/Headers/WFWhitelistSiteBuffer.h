//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WFWhitelistSiteBuffer : NSObject
{
    NSMutableDictionary *_siteTree;
    NSUInteger _maxSize;
}

@property NSUInteger maxSize; // @synthesize maxSize=_maxSize;
@property(retain) NSMutableDictionary *siteTree; // @synthesize siteTree=_siteTree;
- (BOOL)containsURLString:(id)arg1;
- (BOOL)treeContainsURLString:(id)arg1;
- (void)addURLString:(id)arg1;
- (void)dealloc;
- (id)init;

@end

