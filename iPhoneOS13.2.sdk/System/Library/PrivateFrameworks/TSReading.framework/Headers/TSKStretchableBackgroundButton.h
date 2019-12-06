//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface TSKStretchableBackgroundButton : UIButton
{
    long long mBackgroundTopCapHeight;
    long long mBackgroundLeftCapWidth;
}

@property(nonatomic) long long backgroundLeftCapWidth; // @synthesize backgroundLeftCapWidth=mBackgroundLeftCapWidth;
@property(nonatomic) long long backgroundTopCapHeight; // @synthesize backgroundTopCapHeight=mBackgroundTopCapHeight;
- (void)p_resetBackgroundImage;
- (void)p_resetBackgroundImageForState:(NSUInteger)arg1;
- (void)awakeFromNib;
- (void)guessBackgroundTopLeftCapSize;
- (void)setBackgroundTopLeftCapHeight:(long long)arg1 width:(long long)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(NSUInteger)arg2;

@end

