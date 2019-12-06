//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StorageSettings/STStorageTip.h>

@class NSObject, NSString;
@protocol STStorageOptionTipDelegate;

@interface STStorageOptionTip : STStorageTip
{
    BOOL _mayCauseDataLoss;
    NSObject<STStorageOptionTipDelegate> *_delegate;
    NSString *_confirmationText;
    NSString *_confirmationButtonTitle;
}

@property(retain) NSString *confirmationButtonTitle; // @synthesize confirmationButtonTitle=_confirmationButtonTitle;
@property(retain) NSString *confirmationText; // @synthesize confirmationText=_confirmationText;
@property BOOL mayCauseDataLoss; // @synthesize mayCauseDataLoss=_mayCauseDataLoss;
@property __weak NSObject<STStorageOptionTipDelegate> *delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
@property(nonatomic) long long eventualGain;
@property(nonatomic) long long immediateGain;
@property(retain, nonatomic) NSString *activatingString;
@property(nonatomic) float activationPercent;
@property(retain) NSString *enableButtonTitle;
- (id)getValue:(id)arg1;
- (void)setValue:(id)arg1 specifier:(id)arg2;
- (void)enableOption;
- (id)init;

@end

