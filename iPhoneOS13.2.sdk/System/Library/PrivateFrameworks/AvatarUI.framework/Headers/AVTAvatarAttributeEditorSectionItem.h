//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarAttributeEditorSectionItem-Protocol.h>
#import <AvatarUI/AVTAvatarAttributeEditorSectionItemPrefetching-Protocol.h>
#import <AvatarUI/AVTDiscardableContent-Protocol.h>

@class NSString, UIImage;

@interface AVTAvatarAttributeEditorSectionItem : NSObject <AVTAvatarAttributeEditorSectionItem, AVTDiscardableContent, AVTAvatarAttributeEditorSectionItemPrefetching>
{
    BOOL _selected;
    NSString *_localizedName;
    id /* CDUnknownBlockType */ _avatarUpdater;
    id /* CDUnknownBlockType */ discardableContentHandler;
    NSString *_identifier;
    UIImage *_cachedThumbnail;
    double _heightRatio;
    id /* CDUnknownBlockType */ _thumbnailProvider;
    id /* CDUnknownBlockType */ _presetResourcesProvider;
}

@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ presetResourcesProvider; // @synthesize presetResourcesProvider=_presetResourcesProvider;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ thumbnailProvider; // @synthesize thumbnailProvider=_thumbnailProvider;
@property(readonly, nonatomic) double heightRatio; // @synthesize heightRatio=_heightRatio;
@property(retain, nonatomic) UIImage *cachedThumbnail; // @synthesize cachedThumbnail=_cachedThumbnail;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) id /* CDUnknownBlockType */ discardableContentHandler; // @synthesize discardableContentHandler;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ avatarUpdater; // @synthesize avatarUpdater=_avatarUpdater;
@property(readonly, copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
// - (void).cxx_destruct;
- (void)discardContent;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *prefetchingIdentifier;
- (id)initWithIdentifier:(id)arg1 localizedName:(id)arg2 thumbnailProvider:(CDUnknownBlockType)arg3 presetResourcesProvider:(CDUnknownBlockType)arg4 avatarUpdater:(CDUnknownBlockType)arg5 heightRatio:(double)arg6 selected:(BOOL)arg7;

@end

