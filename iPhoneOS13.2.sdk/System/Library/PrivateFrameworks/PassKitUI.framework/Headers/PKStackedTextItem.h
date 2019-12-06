//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKStackedTextItem : NSObject
{
    BOOL _significantPrimary;
    BOOL _deemphasizedPrimary;
    BOOL _strikethroughPrimary;
    NSString *_groupingIdentifier;
    NSUInteger _numberOfContentRows;
    NSString *_title;
    NSString *_primary;
    NSString *_secondary;
    NSString *_tertiary;
}

@property(nonatomic, getter=isStrikethroughPrimary) BOOL strikethroughPrimary; // @synthesize strikethroughPrimary=_strikethroughPrimary;
@property(nonatomic, getter=isDeemphasizedPrimary) BOOL deemphasizedPrimary; // @synthesize deemphasizedPrimary=_deemphasizedPrimary;
@property(nonatomic, getter=isSignificantPrimary) BOOL significantPrimary; // @synthesize significantPrimary=_significantPrimary;
@property(copy, nonatomic) NSString *tertiary; // @synthesize tertiary=_tertiary;
@property(copy, nonatomic) NSString *secondary; // @synthesize secondary=_secondary;
@property(copy, nonatomic) NSString *primary; // @synthesize primary=_primary;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSUInteger numberOfContentRows; // @synthesize numberOfContentRows=_numberOfContentRows;
@property(readonly, copy, nonatomic) NSString *groupingIdentifier; // @synthesize groupingIdentifier=_groupingIdentifier;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithNumberOfContentRows:(NSUInteger)arg1 groupingIdentifier:(id)arg2;
- (id)init;

@end

