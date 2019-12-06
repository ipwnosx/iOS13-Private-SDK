//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSPObject.h>

#import <TSReading/TSKModel-Protocol.h>
#import <TSReading/TSSPreset-Protocol.h>
#import <TSReading/TSSStyleClient-Protocol.h>

@class NSString, TSTTableStyleNetwork;

@interface TSTTableStylePreset : TSPObject <TSSPreset, TSSStyleClient, TSKModel>
{
    NSUInteger mIndex;
    TSTTableStyleNetwork *mStyleNetwork;
}

- (void)replaceReferencedStylesUsingBlock:(CDUnknownBlockType)arg1;
- (id)referencedStyles;
- (void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef )arg2;
- (id)styleNetworkInStylesheet:(id)arg1;
- (id)swatchImage;
@property(readonly, nonatomic) NSString *presetKind;
- (BOOL)isThemeEquivalent:(id)arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)initWithStyleNetwork:(id)arg1 index:(NSUInteger)arg2;
- (id)p_documentRoot;
@property(copy, nonatomic) TSTTableStyleNetwork *styleNetwork;
@property(nonatomic) NSUInteger index;

@end

