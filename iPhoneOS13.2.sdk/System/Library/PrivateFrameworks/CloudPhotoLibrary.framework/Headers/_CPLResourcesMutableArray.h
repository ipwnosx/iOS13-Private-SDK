//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _CPLResourcesMutableArray : NSObject
{
    NSMutableDictionary *_resourcesPerType;
    NSMutableDictionary *_updatedResourcesPerType;
}

// - (void).cxx_destruct;
- (id)reallyUpdatedResources;
- (id)allResources;
- (void)addResource:(id)arg1;
- (id)initWithResources:(id)arg1;

@end

