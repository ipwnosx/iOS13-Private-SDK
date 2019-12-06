//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKSosBase.h>


@class NSString, TSDPathSource, TSUColor;
@protocol NSObject;

__attribute__((visibility("hidden")))
@interface KNBuildAttributeValue : TSKSosBase <NSCopying>
{
    int _integerValue;
    double _doubleValue;
    BOOL _boolValue;
    NSString *_stringValue;
    TSDPathSource *_pathSourceValue;
    TSUColor *_colorValue;
    BOOL _definedIntegerValue;
    BOOL _definedDoubleValue;
    BOOL _definedBoolValue;
    BOOL _definedStringValue;
    BOOL _definedPathSourceValue;
    BOOL _definedColorValue;
}

+ (id)valueWithColor:(id)arg1;
+ (id)valueWithPathSource:(id)arg1;
+ (id)valueWithString:(id)arg1;
+ (id)valueWithBool:(BOOL)arg1;
+ (id)valueWithDouble:(double)arg1;
+ (id)valueWithInteger:(long long)arg1;
+ (id)emptyValue;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) TSUColor *colorValue;
@property(readonly, nonatomic) TSDPathSource *pathSourceValue;
@property(readonly, nonatomic) NSString *stringValue;
@property(readonly, nonatomic) BOOL boolValue;
@property(readonly, nonatomic) double doubleValue;
@property(readonly, nonatomic) long long integerValue;
- (BOOL)p_attributesAreEmpty;
@property(readonly, nonatomic) id <NSObject> objectValue;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, nonatomic) NSUInteger type;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithColorValue:(id)arg1;
- (id)initWithPathSourceValue:(id)arg1;
- (id)initWithStringValue:(id)arg1;
- (id)initWithBoolValue:(BOOL)arg1;
- (id)initWithDoubleValue:(double)arg1;
- (id)initWithIntegerValue:(long long)arg1;

@end

