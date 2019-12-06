//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OIXMLNode.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OIXMLElement : OIXMLNode
{
    NSString *_name;
    id _attributes;
    id _children;
    BOOL _hasMultipleAttributes;
    BOOL _hasMultipleChildren;
    unsigned char _type;
}

+ (id)elementWithType:(unsigned char)arg1 stringValue:(id)arg2;
+ (id)elementWithType:(unsigned char)arg1;
// - (void).cxx_destruct;
- (id)closingTagString;
- (id)contentString;
- (id)openingTagString;
//  (void)_appendXMLStringToString:(struct __CFString )arg1 level:(int)arg2;
- (long long)attributeCount;
- (long long)childrenCount;
- (id)stringValue;
- (void)setStringValue:(id)arg1;
- (void)insertChild:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)addChild:(id)arg1;
- (void)addAttribute:(id)arg1;
- (BOOL)isEmptyHTMLElement;
- (id)name;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithType:(unsigned char)arg1 stringValue:(id)arg2;
- (id)initWithType:(unsigned char)arg1;

@end

