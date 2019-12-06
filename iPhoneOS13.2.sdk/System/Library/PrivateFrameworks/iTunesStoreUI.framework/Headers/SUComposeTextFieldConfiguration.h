//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SUComposeTextFieldConfiguration : NSObject
{
    UIEdgeInsets _borderInsets;
    BOOL _isRequired;
    NSString *_label;
    NSUInteger _maxLength;
    NSString *_placeholder;
    NSString *_value;
}

@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) NSUInteger maxLength; // @synthesize maxLength=_maxLength;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic, getter=isRequired) BOOL required; // @synthesize required=_isRequired;
@property(nonatomic) UIEdgeInsets borderInsets; // @synthesize borderInsets=_borderInsets;
- (void)dealloc;

@end

