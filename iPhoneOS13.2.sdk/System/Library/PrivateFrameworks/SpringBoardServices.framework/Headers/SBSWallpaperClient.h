//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSServiceFacilityClient.h>

@interface SBSWallpaperClient : FBSServiceFacilityClient
{
}

- (void)restoreDefaultWallpaperWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)setWallpaperGradient:(id)arg1 forVariants:(NSUInteger)arg2;
- (BOOL)setWallpaperColorName:(id)arg1 forVariants:(NSUInteger)arg2;
- (BOOL)setWallpaperWithVideoWithWallpaperMode:(id)arg1 cropRect:(CGRect)arg2 wallpaperMode:(unsigned char)arg3;
- (void)fetchThumbnailForVariant:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithCalloutQueue:(id)arg1;
- (id)initWithIdentifier:(id)arg1 calloutQueue:(id)arg2;

@end

