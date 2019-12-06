//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVMediaSelectionOption, NSString;

@interface TVPAudioOption : NSObject
{
    int _trackID;
    AVMediaSelectionOption *_avMediaSelectionOption;
    NSString *_localizedDisplayString;
    NSString *_title;
    NSString *_languageCodeFromLocale;
    NSString *_languageCodeBCP47;
    id _propertyListRepresentation;
    NSString *_savedLocaleLanguageCode;
}

@property(copy, nonatomic) NSString *savedLocaleLanguageCode; // @synthesize savedLocaleLanguageCode=_savedLocaleLanguageCode;
@property(nonatomic) int trackID; // @synthesize trackID=_trackID;
@property(retain, nonatomic) id propertyListRepresentation; // @synthesize propertyListRepresentation=_propertyListRepresentation;
@property(copy, nonatomic) NSString *languageCodeBCP47; // @synthesize languageCodeBCP47=_languageCodeBCP47;
@property(copy, nonatomic) NSString *languageCodeFromLocale; // @synthesize languageCodeFromLocale=_languageCodeFromLocale;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *localizedDisplayString; // @synthesize localizedDisplayString=_localizedDisplayString;
@property(retain, nonatomic) AVMediaSelectionOption *avMediaSelectionOption; // @synthesize avMediaSelectionOption=_avMediaSelectionOption;
// - (void).cxx_destruct;
- (void)_currentLocaleDidChange:(id)arg1;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithOption:(id)arg1;
- (id)initWithSavedTrackID:(int)arg1 savedLocaleLanguageCode:(id)arg2;
- (id)initWithPropertyListRepresentation:(id)arg1;

@end

