//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/EQKitMathMLNode.h>

#import <TSReading/EQKitLayoutSchemataTd-Protocol.h>
#import <TSReading/EQKitMathMLNode-Protocol.h>

@class NSArray, NSString;

@interface EQKitMathMLMTd : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataTd>
{
    NSArray *mChildren;
}

// - (struct Schemata)layoutSchemata;
- (id)schemataChildren;
@property(readonly, copy) NSString *description;
- (BOOL)isBaseFontNameUsed;
- (int)isOperatorPaddingRequired;
- (void)dealloc;
- (const set_25e6ba53 )mathMLAttributes;
// - (id)initFromXMLNode:(struct _xmlNode )arg1 parser:(id)arg2;
// - (id)initWithChildren:(id)arg1 node:(struct _xmlNode )arg2;
- (id)initWithChildren:(id)arg1;
- (id)init;

@end

