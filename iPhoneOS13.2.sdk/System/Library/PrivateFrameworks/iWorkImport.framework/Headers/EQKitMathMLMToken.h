//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/EQKitMathMLNode.h>

#import <iWorkImport/EQKitFontStyling-Protocol.h>
#import <iWorkImport/EQKitLayoutSchemataToken-Protocol.h>
#import <iWorkImport/EQKitMathMLNode-Protocol.h>

@class EQKitMathMLTokenContent, NSString;

__attribute__((visibility("hidden")))
@interface EQKitMathMLMToken : EQKitMathMLNode <EQKitMathMLNode, EQKitFontStyling, EQKitLayoutSchemataToken>
{
    struct {
        unsigned int mType:2;
    } mFlags;
    union {
        unsigned int mChar;
        NSString *mString;
        EQKitMathMLTokenContent *mContent;
    } mContent;
}

- (id)schemataTokenString;
- (id)schemataFontStyling;
- (BOOL)isNumber;
- (id)fontStyling;
@property(readonly, copy) NSString *description;
- (unsigned int)schemataUnicharOrNul;
- (int)scriptContext;
- (int)scriptVariant;
- (void)dealloc;
- (const set_25e6ba53 )mathMLAttributes;
// - (id)initFromXMLNode:(struct _xmlNode )arg1 parser:(id)arg2;
- (id)initWithContent:(id)arg1;
- (id)initWithString:(id)arg1 environment:(id)arg2;
- (id)init;

@end

