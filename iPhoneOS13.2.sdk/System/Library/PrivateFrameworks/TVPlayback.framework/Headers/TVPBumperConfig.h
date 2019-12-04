//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, UIImage;
@protocol TVPMediaItem;

@interface TVPBumperConfig : NSObject
{
    NSObject<TVPMediaItem> *_mediaItem;
    UIImage *_logoImage;
    NSAttributedString *_attributedWarningText;
    NSAttributedString *_attributedAppleIDText;
    double _textDwellTime;
    double _maxTextWidth;
}

@property(nonatomic) double maxTextWidth; // @synthesize maxTextWidth=_maxTextWidth;
@property(nonatomic) double textDwellTime; // @synthesize textDwellTime=_textDwellTime;
@property(retain, nonatomic) NSAttributedString *attributedAppleIDText; // @synthesize attributedAppleIDText=_attributedAppleIDText;
@property(retain, nonatomic) NSAttributedString *attributedWarningText; // @synthesize attributedWarningText=_attributedWarningText;
@property(retain, nonatomic) UIImage *logoImage; // @synthesize logoImage=_logoImage;
@property(retain, nonatomic) NSObject<TVPMediaItem> *mediaItem; // @synthesize mediaItem=_mediaItem;
- (id)init;

@end
