//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFCardSection.h>

#import <SearchFoundation/SFMediaRemoteControlCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFColor;

@interface SFMediaRemoteControlCardSection : SFCardSection <SFMediaRemoteControlCardSection, NSSecureCoding, NSCopying>
{
   struct {
        unsigned int canBeHidden:1;
        unsigned int hasTopPadding:1;
        unsigned int hasBottomPadding:1;
        unsigned int separatorStyle:1;
        unsigned int playbackRouteUniqueIdentifierIsEncrypted:1;
    } _has;
    BOOL _canBeHidden;
    BOOL _hasTopPadding;
    BOOL _hasBottomPadding;
    BOOL _playbackRouteUniqueIdentifierIsEncrypted;
    int _separatorStyle;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    SFColor *_backgroundColor;
    NSString *_playbackRouteUniqueIdentifier;
    NSString *_playbackBundleIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *playbackBundleIdentifier; // @synthesize playbackBundleIdentifier=_playbackBundleIdentifier;
@property(nonatomic) BOOL playbackRouteUniqueIdentifierIsEncrypted; // @synthesize playbackRouteUniqueIdentifierIsEncrypted=_playbackRouteUniqueIdentifierIsEncrypted;
@property(copy, nonatomic) NSString *playbackRouteUniqueIdentifier; // @synthesize playbackRouteUniqueIdentifier=_playbackRouteUniqueIdentifier;
@property(retain, nonatomic) SFColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) BOOL hasBottomPadding;
@property(nonatomic) BOOL hasTopPadding;
@property(nonatomic) BOOL canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)hasPlaybackRouteUniqueIdentifierIsEncrypted;
- (BOOL)hasSeparatorStyle;
- (BOOL)hasHasBottomPadding;
- (BOOL)hasHasTopPadding;
- (BOOL)hasCanBeHidden;
- (id)initWithProtobuf:(id)arg1;

@end

