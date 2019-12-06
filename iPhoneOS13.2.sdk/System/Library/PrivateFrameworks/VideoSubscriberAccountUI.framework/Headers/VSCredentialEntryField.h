//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSCredentialEntryField : NSObject
{
    BOOL _secure;
    BOOL _required;
    NSString *_title;
    NSString *_placeholder;
    long long _keyboardType;
    NSString *_text;
    long long _autocapitalizationType;
    long long _autocorrectionType;
    long long _returnKeyType;
    NSString *_identifier;
    NSString *_recentsTitle;
    NSString *_recentsMessage;
}

@property(copy, nonatomic) NSString *recentsMessage; // @synthesize recentsMessage=_recentsMessage;
@property(copy, nonatomic) NSString *recentsTitle; // @synthesize recentsTitle=_recentsTitle;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(nonatomic) long long autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
@property(nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(nonatomic, getter=isRequired) BOOL required; // @synthesize required=_required;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic, getter=isSecure) BOOL secure; // @synthesize secure=_secure;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (id)init;

@end

