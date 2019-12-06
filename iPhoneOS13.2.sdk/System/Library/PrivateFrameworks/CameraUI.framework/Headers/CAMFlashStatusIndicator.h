//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMControlStatusIndicator.h>

@interface CAMFlashStatusIndicator : CAMControlStatusIndicator
{
    BOOL _flashActive;
    BOOL _flashUnavailable;
    long long _flashMode;
}

@property(nonatomic, getter=isFlashUnavailable) BOOL flashUnavailable; // @synthesize flashUnavailable=_flashUnavailable;
@property(nonatomic, getter=isFlashActive) BOOL flashActive; // @synthesize flashActive=_flashActive;
@property(nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
- (BOOL)shouldUseOutline;
- (BOOL)shouldUseActiveTintForCurrentState;
- (id)imageNameForCurrentState;

@end

