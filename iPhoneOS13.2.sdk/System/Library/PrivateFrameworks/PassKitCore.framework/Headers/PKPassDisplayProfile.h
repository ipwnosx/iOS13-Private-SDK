//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKDisplayProfile.h>


@class NSData, PKColor;

@interface PKPassDisplayProfile : PKDisplayProfile <NSSecureCoding, NSCopying>
{
    BOOL _tallCode;
    BOOL _hasBackgroundImage;
    BOOL _hasStripImage;
    long long _passStyle;
    PKColor *_backgroundColor;
    PKColor *_secondaryBackgroundColor;
    PKColor *_foregroundColor;
    PKColor *_labelColor;
    PKColor *_stripColor;
    NSData *_manifestHash;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL hasStripImage; // @synthesize hasStripImage=_hasStripImage;
@property(nonatomic) BOOL hasBackgroundImage; // @synthesize hasBackgroundImage=_hasBackgroundImage;
@property(nonatomic) BOOL tallCode; // @synthesize tallCode=_tallCode;
@property(retain, nonatomic) NSData *manifestHash; // @synthesize manifestHash=_manifestHash;
@property(retain, nonatomic) PKColor *stripColor; // @synthesize stripColor=_stripColor;
@property(retain, nonatomic) PKColor *labelColor; // @synthesize labelColor=_labelColor;
@property(retain, nonatomic) PKColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(retain, nonatomic) PKColor *secondaryBackgroundColor; // @synthesize secondaryBackgroundColor=_secondaryBackgroundColor;
@property(retain, nonatomic) PKColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) long long passStyle; // @synthesize passStyle=_passStyle;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)type;
@property(readonly, nonatomic) long long layoutMode;
@property(readonly, nonatomic) BOOL showsStripImage;
@property(readonly, nonatomic) BOOL showsBackgroundImage;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;

@end

