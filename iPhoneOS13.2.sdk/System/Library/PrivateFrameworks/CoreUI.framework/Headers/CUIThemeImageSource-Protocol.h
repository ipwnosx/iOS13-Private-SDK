//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CUIImage;

@protocol CUIThemeImageSource <NSObject>
- (BOOL)hasValueSlices;
- (CGSize)imageSize;
- (CUIImage *)imageForState:(long long)arg1 withValue:(long long)arg2;
- (CUIImage *)imageForState:(long long)arg1;
@end

