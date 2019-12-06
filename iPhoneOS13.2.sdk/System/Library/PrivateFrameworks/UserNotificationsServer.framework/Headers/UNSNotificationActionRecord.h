//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface UNSNotificationActionRecord : NSObject
{
    BOOL _authenticationRequired;
    BOOL _destructive;
    BOOL _foreground;
    BOOL _shouldPreventNotificationDismiss;
    NSString *_actionType;
    NSString *_identifier;
    NSString *_textInputButtonTitle;
    NSArray *_textInputButtonTitleLocalizationArguments;
    NSString *_textInputButtonTitleLocalizationKey;
    NSString *_textInputPlaceholder;
    NSArray *_textInputPlaceholderLocalizationArguments;
    NSString *_textInputPlaceholderLocalizationKey;
    NSString *_title;
    NSArray *_titleLocalizationArguments;
    NSString *_titleLocalizationKey;
    NSURL *_url;
}

@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *titleLocalizationKey; // @synthesize titleLocalizationKey=_titleLocalizationKey;
@property(copy, nonatomic) NSArray *titleLocalizationArguments; // @synthesize titleLocalizationArguments=_titleLocalizationArguments;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *textInputPlaceholderLocalizationKey; // @synthesize textInputPlaceholderLocalizationKey=_textInputPlaceholderLocalizationKey;
@property(copy, nonatomic) NSArray *textInputPlaceholderLocalizationArguments; // @synthesize textInputPlaceholderLocalizationArguments=_textInputPlaceholderLocalizationArguments;
@property(copy, nonatomic) NSString *textInputPlaceholder; // @synthesize textInputPlaceholder=_textInputPlaceholder;
@property(copy, nonatomic) NSString *textInputButtonTitleLocalizationKey; // @synthesize textInputButtonTitleLocalizationKey=_textInputButtonTitleLocalizationKey;
@property(copy, nonatomic) NSArray *textInputButtonTitleLocalizationArguments; // @synthesize textInputButtonTitleLocalizationArguments=_textInputButtonTitleLocalizationArguments;
@property(copy, nonatomic) NSString *textInputButtonTitle; // @synthesize textInputButtonTitle=_textInputButtonTitle;
@property(nonatomic) BOOL shouldPreventNotificationDismiss; // @synthesize shouldPreventNotificationDismiss=_shouldPreventNotificationDismiss;
@property(nonatomic, getter=isForeground) BOOL foreground; // @synthesize foreground=_foreground;
@property(nonatomic, getter=isDestructive) BOOL destructive; // @synthesize destructive=_destructive;
@property(nonatomic, getter=isAuthenticationRequired) BOOL authenticationRequired; // @synthesize authenticationRequired=_authenticationRequired;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end

