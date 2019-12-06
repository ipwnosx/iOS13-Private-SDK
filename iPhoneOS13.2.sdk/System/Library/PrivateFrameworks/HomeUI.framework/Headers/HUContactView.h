//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CNAvatarView, CNContact, NSArray, NSAttributedString, NSMutableArray, NSString, UILabel;

@interface HUContactView : UIView
{
    double _avatarDiameter;
    CNContact *_contact;
    long long _contactNameFormatStyle;
    NSUInteger _numberOfLinesForMessage;
    NSArray *_accounts;
    NSString *_contactNameFontTextStyle;
    CNAvatarView *_avatarView;
    NSMutableArray *_constraints;
    UILabel *_nameLabel;
    UILabel *_messageLabel;
    UILabel *_appleIDAccountLabel;
    UILabel *_appleMusicAccountLabel;
}

@property(retain, nonatomic) UILabel *appleMusicAccountLabel; // @synthesize appleMusicAccountLabel=_appleMusicAccountLabel;
@property(retain, nonatomic) UILabel *appleIDAccountLabel; // @synthesize appleIDAccountLabel=_appleIDAccountLabel;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) NSString *contactNameFontTextStyle; // @synthesize contactNameFontTextStyle=_contactNameFontTextStyle;
@property(retain, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
@property(nonatomic) NSUInteger numberOfLinesForMessage; // @synthesize numberOfLinesForMessage=_numberOfLinesForMessage;
@property(nonatomic) long long contactNameFormatStyle; // @synthesize contactNameFormatStyle=_contactNameFormatStyle;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(nonatomic) double avatarDiameter; // @synthesize avatarDiameter=_avatarDiameter;
// - (void).cxx_destruct;
- (BOOL)_isPhoneNumberOnlyAccount;
- (void)_updateConstraints;
- (void)_updateNameLabelFont;
- (void)_setupViews;
@property(retain, nonatomic) NSAttributedString *message;
- (id)initWithFrame:(CGRect)arg1;

@end

