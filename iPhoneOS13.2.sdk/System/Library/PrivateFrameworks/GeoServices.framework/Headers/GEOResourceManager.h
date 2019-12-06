//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOResourceManifestConfiguration;

@interface GEOResourceManager : NSObject
{
    GEOResourceManifestConfiguration *_configuration;
}

+ (id)sharedManagerForConfiguration:(id)arg1;
+ (id)sharedManagerForTileGroupIdentifier:(unsigned int)arg1;
+ (id)sharedManager;
// - (void).cxx_destruct;
- (id)allResourceNames;
- (id)dataForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(CDUnknownBlockType)arg3;
- (BOOL)isDevResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(CDUnknownBlockType)arg3;
- (id)pathForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(CDUnknownBlockType)arg3;
- (id)dataForResourceWithName:(id)arg1 fallbackBundle:(id)arg2;
- (id)pathForResourceWithName:(id)arg1 fallbackBundle:(id)arg2;
- (id)initWithConfiguration:(id)arg1;

@end

