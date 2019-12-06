//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTViewCarouselLayout-Protocol.h>

@interface AVTViewCarouselLayout : NSObject <AVTViewCarouselLayout>
{
    BOOL _fillContainer;
    CGSize _avtViewAspectRatio;
}

+ (CGSize)fullSizeForBounds:(CGSize)arg1;
+ (CGSize)severalItemsSizeForBounds:(CGSize)arg1 aspectRatio:(CGSize)arg2;
+ (id)adaptativeLayoutWithAVTViewAspectRatio:(CGSize)arg1;
@property(readonly, nonatomic) CGSize avtViewAspectRatio; // @synthesize avtViewAspectRatio=_avtViewAspectRatio;
@property(nonatomic) BOOL fillContainer; // @synthesize fillContainer=_fillContainer;
- (CGSize)contentViewSizeForSize:(CGSize)arg1;
- (CGSize)avatarViewSizeForAvailableContentSize:(CGSize)arg1;
- (id)initWithAVTViewAspectRatio:(CGSize)arg1;

@end

