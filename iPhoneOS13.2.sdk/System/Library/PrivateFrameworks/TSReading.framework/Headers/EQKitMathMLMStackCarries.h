//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/EQKitMathMLNode.h>

#import <TSReading/EQKitLayoutSchemataStackCarries-Protocol.h>
#import <TSReading/EQKitMathMLNode-Protocol.h>

@class NSArray;

@interface EQKitMathMLMStackCarries : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataStackCarries>
{
    NSArray *mChildren;
}

- (id)schemataChildren;
- (BOOL)isBaseFontNameUsed;
// - (struct Schemata)layoutSchemata;
- (void)dealloc;
- (const set_25e6ba53 )mathMLAttributes;
// - (id)initFromXMLNode:(struct _xmlNode )arg1 parser:(id)arg2;

@end

