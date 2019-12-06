//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <QuickLookThumbnailing/QLThumbnailService-Protocol.h>
#import <QuickLookThumbnailing/QLThumbnailServiceSurfaceGeneratorProtocol-Protocol.h>

@class QLThumbnailProvider;

__attribute__((visibility("hidden")))
@interface QLThumbnailServiceContext : NSExtensionContext <QLThumbnailServiceSurfaceGeneratorProtocol, QLThumbnailService>
{
    QLThumbnailProvider *_thumbnailProvider;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property(retain, nonatomic) QLThumbnailProvider *thumbnailProvider; // @synthesize thumbnailProvider=_thumbnailProvider;
// - (void).cxx_destruct;
- (id)_thumbnailGenerationQueue;
- (void)generateThumbnailOfSize:(CGSize)arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(NSUInteger)arg4 withFileURLHandler:(id)arg5 additionalResourcesWrapper:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)generateThumbnailOfSize:(CGSize)arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(NSUInteger)arg4 withContents:(id)arg5 additionalResourcesWrapper:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)ioSurfaceForRequest:(id)arg1 withSize:(CGSize)arg2 completion:(CDUnknownBlockType)arg3;
- (id)protocolHostWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)protocolHost;

@end

