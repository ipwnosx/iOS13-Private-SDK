//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarKit/AVTStickerProp.h>

@class UIImage;

@interface AVTStickerImageProp : AVTStickerProp
{
    UIImage _image;
}

@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
// - (void).cxx_destruct;
- (void)buildNodeForAvatar:(id)arg1 withCamera:(id)arg2 forExport:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
// - (id)copyWithZone:(_NSZone )arg1;
// - (id)initWithImage:(UIImage )arg1 size:(CGSize)arg2 scale:(struct SCNVector3)arg3 position:(struct SCNVector3)arg4 renderLast:(BOOL)arg5 orientToCamera:(BOOL)arg6 rotation:(struct SCNVector3)arg7 palettesDescriptions:(id)arg8 modifiers:(id)arg9;

@end

