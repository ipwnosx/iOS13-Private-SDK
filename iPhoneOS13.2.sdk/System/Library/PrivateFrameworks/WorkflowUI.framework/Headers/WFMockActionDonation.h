//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/VCActionDonation-Protocol.h>

@class INShortcut, NSData, NSDate, NSString;

@interface WFMockActionDonation : NSObject <VCActionDonation>
{
    NSString *_sourceAppIdentifier;
    NSString *_title;
    NSString *_subtitle;
    NSString *_sourceAppIdentifierForLaunching;
    id _uniqueProperty;
    NSData *_actionData;
}

@property(readonly, copy, nonatomic) NSData *actionData; // @synthesize actionData=_actionData;
@property(readonly, nonatomic) id uniqueProperty; // @synthesize uniqueProperty=_uniqueProperty;
@property(readonly, copy, nonatomic) NSString *sourceAppIdentifierForLaunching; // @synthesize sourceAppIdentifierForLaunching=_sourceAppIdentifierForLaunching;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *sourceAppIdentifier; // @synthesize sourceAppIdentifier=_sourceAppIdentifier;
// - (void).cxx_destruct;
@property(readonly, nonatomic) INShortcut *shortcut;
@property(readonly, copy, nonatomic) NSString *suggestedPhrase;
@property(readonly, copy, nonatomic) NSString *fullDescription;
@property(readonly, copy, nonatomic) NSString *sourceAppIdentifierForDisplay;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSDate *date;
- (id)initWithBundleIdentifier:(id)arg1 title:(id)arg2 subtitle:(id)arg3 actionData:(id)arg4;

@end

