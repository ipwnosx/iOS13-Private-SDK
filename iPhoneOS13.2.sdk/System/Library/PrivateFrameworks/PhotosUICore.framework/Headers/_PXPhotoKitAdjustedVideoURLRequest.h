//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/_PXPhotoKitAdjustedUIMediaRequest.h>

@class NSString, PHVideoRequestOptions, PLPhotoEditRenderer;

@interface _PXPhotoKitAdjustedVideoURLRequest : _PXPhotoKitAdjustedUIMediaRequest
{
    PLPhotoEditRenderer *_renderer;
    PHVideoRequestOptions *_options;
    NSString *_pairingIdentifier;
    id /* CDUnknownBlockType */ _resultHandler;
}

@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ resultHandler; // @synthesize resultHandler=_resultHandler;
@property(readonly, copy, nonatomic) NSString *pairingIdentifier; // @synthesize pairingIdentifier=_pairingIdentifier;
@property(readonly, nonatomic) PHVideoRequestOptions *options; // @synthesize options=_options;
// - (void).cxx_destruct;
- (void)_handleExportFinished:(BOOL)arg1 error:(id)arg2 videoURL:(id)arg3;
- (void)_renderIfNeeded;
- (void)progressDidChange;
- (void)editSourceDidChange;
- (void)start;
- (id)initWithRenderQueue:(id)arg1 asset:(id)arg2 pairingIdentifier:(id)arg3 imageManager:(id)arg4 options:(id)arg5 resultHandler:(CDUnknownBlockType)arg6;

@end

