//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSWPSmartField.h>

@class NSString;

@interface TSWPRubyField : TSWPSmartField
{
    NSString *_rubyText;
}

@property(copy, nonatomic) NSString *rubyText; // @synthesize rubyText=_rubyText;
- (BOOL)canCopy:(NSRange *)arg1;
- (BOOL)allowsEditing;
- (int)styleAttributeArrayKind;
- (unsigned int)attributeArrayKind;
- (int)elementKind;
- (id)text;
@property(readonly, nonatomic) int baseTextScript;
@property(readonly, nonatomic) NSString *baseText;
- (void)dealloc;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 rubyText:(id)arg2;

@end

