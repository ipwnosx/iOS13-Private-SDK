//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUTitleViewStyler-Protocol.h>

@class UIColor;

@interface NUTitleViewStyler : NSObject <NUTitleViewStyler>
{
    UIColor *_textColor;
}

@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
// - (void).cxx_destruct;
- (id)titleParagraphStyleWithWrapping:(BOOL)arg1;
- (id)titleSmallFont;
- (id)titleLargeFont;
- (id)messageParagraphStyle;
- (id)messageSmallFont;
- (id)messageLargeFont;
- (id)styleTextAsTitle:(id)arg1 boundingSize:(CGSize)arg2;
- (id)styleTextAsMessage:(id)arg1 boundingSize:(CGSize)arg2;
- (id)styleTitleText:(id)arg1 styleType:(NSUInteger)arg2 boundingSize:(CGSize)arg3;
- (id)initWithTextColor:(id)arg1;
- (id)init;

@end

