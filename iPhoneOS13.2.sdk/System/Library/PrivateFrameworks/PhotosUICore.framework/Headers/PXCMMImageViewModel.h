//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

@protocol PXDisplayAsset, PXUIImageProvider;

@interface PXCMMImageViewModel : PXObservable
{
    _Bool _highlighted;
    id <PXDisplayAsset> _asset;
    id <PXUIImageProvider> _mediaProvider;
}

@property(readonly, nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(readonly, nonatomic) id <PXUIImageProvider> mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) id <PXDisplayAsset> asset; // @synthesize asset=_asset;
- (void)setHighlighted:(_Bool)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)performChanges:(id /* block */)arg1;

@end
