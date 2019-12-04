//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray, NSString, TIWordEntry;

@interface TIWordEntryAligned : NSObject <NSSecureCoding>
{
    _Bool _isContinuousPathConversion;
    int _inSessionAlignmentConfidence;
    NSArray *_alignedKeyboardInputs;
    NSString *_expectedString;
    TIWordEntry *_originalWord;
    NSArray *_alignedTouches;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *alignedTouches; // @synthesize alignedTouches=_alignedTouches;
@property(nonatomic) int inSessionAlignmentConfidence; // @synthesize inSessionAlignmentConfidence=_inSessionAlignmentConfidence;
@property(nonatomic) _Bool isContinuousPathConversion; // @synthesize isContinuousPathConversion=_isContinuousPathConversion;
@property(retain, nonatomic) TIWordEntry *originalWord; // @synthesize originalWord=_originalWord;
@property(copy, nonatomic) NSString *expectedString; // @synthesize expectedString=_expectedString;
@property(retain, nonatomic) NSArray *alignedKeyboardInputs; // @synthesize alignedKeyboardInputs=_alignedKeyboardInputs;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
