//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIStyledImageDataConsumer.h>

@interface SKUIScreenshotDataConsumer : SKUIStyledImageDataConsumer
{
    BOOL _forcesPortrait;
}

+ (id)consumerWithScreenshotSize:(CGSize)arg1;
+ (id)consumer;
@property(nonatomic) BOOL forcesPortrait; // @synthesize forcesPortrait=_forcesPortrait;
- (id)imageForImage:(id)arg1;
- (id)imageForColor:(id)arg1 size:(CGSize)arg2;

@end

