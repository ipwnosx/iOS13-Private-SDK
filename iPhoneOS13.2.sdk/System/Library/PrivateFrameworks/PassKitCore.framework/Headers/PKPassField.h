//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSString;

@interface PKPassField : NSObject <NSSecureCoding>
{
    NSString *_value;
    long long _type;
    NSString *_key;
    NSString *_label;
    id _unformattedValue;
    NSString *_changeMessage;
    long long _textAlignment;
    long long _cellStyle;
    NSUInteger _row;
    NSUInteger _dataDetectorTypes;
    NSDictionary *_semantics;
    long long _foreignReferenceType;
    NSString *_foreignReferenceIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *foreignReferenceIdentifier; // @synthesize foreignReferenceIdentifier=_foreignReferenceIdentifier;
@property(nonatomic) long long foreignReferenceType; // @synthesize foreignReferenceType=_foreignReferenceType;
@property(copy, nonatomic) NSDictionary *semantics; // @synthesize semantics=_semantics;
@property(nonatomic) NSUInteger dataDetectorTypes; // @synthesize dataDetectorTypes=_dataDetectorTypes;
@property(nonatomic) NSUInteger row; // @synthesize row=_row;
@property(nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(copy, nonatomic) NSString *changeMessage; // @synthesize changeMessage=_changeMessage;
@property(copy, nonatomic) id unformattedValue; // @synthesize unformattedValue=_unformattedValue;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) long long type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)description;
- (void)flushCachedValue;
@property(readonly) __weak NSString *value;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

