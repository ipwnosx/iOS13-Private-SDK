//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


__attribute__((visibility("hidden")))
@interface CKSpeakerButton : UIButton
{
    BOOL _orientation;
    BOOL _speakerEnabled;
    BOOL _shouldShowText;
}

+ (id)speakerImageWithOrientation:(BOOL)arg1 speakerEnabled:(BOOL)arg2 shouldShowText:(BOOL)arg3;
@property(nonatomic) BOOL shouldShowText; // @synthesize shouldShowText=_shouldShowText;
@property(nonatomic, getter=isSpeakerEnabled) BOOL speakerEnabled; // @synthesize speakerEnabled=_speakerEnabled;
@property(nonatomic) BOOL orientation; // @synthesize orientation=_orientation;
- (void)hideSpeakerText;
- (void)touchUpInside:(id)arg1;
- (void)updateSpeakerImage;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

