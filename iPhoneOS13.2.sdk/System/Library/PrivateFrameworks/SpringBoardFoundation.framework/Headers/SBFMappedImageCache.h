//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoardUI/BSUIMappedImageCache.h>

@interface SBFMappedImageCache : BSUIMappedImageCache
{
}

+ (id)systemAppPersistenteCache;
- (void)warmupImageForKey:(id)arg1;
- (id)imageForKey:(id)arg1 cacheOptions:(NSUInteger)arg2 generateImageWithBlockIfNecessary:(CDUnknownBlockType)arg3;
- (id)imageForKey:(id)arg1 options:(int)arg2;
- (id)imageForKey:(id)arg1 options:(int)arg2 generateImageWithBlockIfNecessary:(CDUnknownBlockType)arg3;
- (id)imageForKey:(id)arg1 generateImageWithBlockIfNecessary:(CDUnknownBlockType)arg2;
- (id)initWithDescription:(id)arg1;

@end

