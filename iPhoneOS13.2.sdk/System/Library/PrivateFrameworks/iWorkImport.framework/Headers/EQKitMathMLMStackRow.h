//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/EQKitMathMLNode.h>

#import <iWorkImport/EQKitLayoutSchemataStackRow-Protocol.h>
#import <iWorkImport/EQKitMathMLNode-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface EQKitMathMLMStackRow : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataStackRow>
{
    NSArray *mChildren;
}

- (id)schemataChildren;
- (BOOL)isBaseFontNameUsed;
//  (struct Schemata)layoutSchemata;
- (void)dealloc;
- (id)initWithChildren:(id)arg1;
- (const set_25e6ba53 )mathMLAttributes;
//  (id)initFromXMLNode:(struct _xmlNode )arg1 parser:(id)arg2;

@end

