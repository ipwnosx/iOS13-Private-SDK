//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface WFWidgetExplanationSettings : NSObject
{
    NSString *_campaignIdentifier;
    NSURL *_videoURL;
    NSString *_navigationBarText;
    NSString *_sloganText;
    NSString *_detailText;
    NSString *_buttonText;
    NSString *_completedSloganText;
    NSString *_completedDetailText;
    NSString *_completedButtonText;
}

+ (id)defaultSettings;
@property(copy, nonatomic) NSString *completedButtonText; // @synthesize completedButtonText=_completedButtonText;
@property(copy, nonatomic) NSString *completedDetailText; // @synthesize completedDetailText=_completedDetailText;
@property(copy, nonatomic) NSString *completedSloganText; // @synthesize completedSloganText=_completedSloganText;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(copy, nonatomic) NSString *sloganText; // @synthesize sloganText=_sloganText;
@property(copy, nonatomic) NSString *navigationBarText; // @synthesize navigationBarText=_navigationBarText;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(copy, nonatomic) NSString *campaignIdentifier; // @synthesize campaignIdentifier=_campaignIdentifier;
// - (void).cxx_destruct;

@end

