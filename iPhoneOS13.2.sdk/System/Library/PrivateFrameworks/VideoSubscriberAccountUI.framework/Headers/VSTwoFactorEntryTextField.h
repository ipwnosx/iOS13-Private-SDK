//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSTwoFactorEntryTextField : NSObject
{
    BOOL _autoShowKeyboard;
    NSString *_label;
    NSUInteger _expectedLength;
    NSString *_text;
    long long _keyboardType;
    long long _autocapitalizationType;
    long long _autocorrectionType;
    long long _returnKeyType;
}

@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(nonatomic) long long autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
@property(nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) BOOL autoShowKeyboard; // @synthesize autoShowKeyboard=_autoShowKeyboard;
@property(nonatomic) NSUInteger expectedLength; // @synthesize expectedLength=_expectedLength;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
// - (void).cxx_destruct;
- (id)init;

@end

