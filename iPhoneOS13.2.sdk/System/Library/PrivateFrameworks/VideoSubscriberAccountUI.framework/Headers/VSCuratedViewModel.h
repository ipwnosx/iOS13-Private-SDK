//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccountUI/VSViewModel.h>

#import <VideoSubscriberAccountUI/VSLogoImageViewModel-Protocol.h>

@class NSItemProvider, NSString, UIImage, VSOptional;

__attribute__((visibility("hidden")))
@interface VSCuratedViewModel : VSViewModel <VSLogoImageViewModel>
{
    BOOL _beginValidationButtonEnabled;
    BOOL _showFooter;
    NSItemProvider *_logoProvider;
    UIImage *_logo;
    NSString *_logoAccessibilityLabel;
    NSString *_beginValidationButtonTitle;
    VSOptional *_identityProviderDisplayName;
    NSString *_message;
    NSString *_notice;
    NSString *_footerText;
}

@property(copy, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(nonatomic) BOOL showFooter; // @synthesize showFooter=_showFooter;
@property(copy, nonatomic) NSString *notice; // @synthesize notice=_notice;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) VSOptional *identityProviderDisplayName; // @synthesize identityProviderDisplayName=_identityProviderDisplayName;
@property(copy, nonatomic) NSString *beginValidationButtonTitle; // @synthesize beginValidationButtonTitle=_beginValidationButtonTitle;
@property(nonatomic, getter=isBeginValidationButtonEnabled) BOOL beginValidationButtonEnabled; // @synthesize beginValidationButtonEnabled=_beginValidationButtonEnabled;
@property(copy, nonatomic) NSString *logoAccessibilityLabel; // @synthesize logoAccessibilityLabel=_logoAccessibilityLabel;
@property(retain, nonatomic) UIImage *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) NSItemProvider *logoProvider; // @synthesize logoProvider=_logoProvider;
// - (void).cxx_destruct;
- (void)configureWithRequest:(id)arg1;
- (id)init;

@end

