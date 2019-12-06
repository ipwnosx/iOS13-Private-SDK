//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface MSVLyricsSongInfo : NSObject
{
    long long _type;
    double _songDuration;
    NSArray *_songwriters;
    NSString *_lyricGenId;
    NSString *_language;
    NSArray *_lyricsLines;
    NSArray *_lyricsSections;
    NSDictionary *_translationsMap;
}

+ (id)_descriptionForLyricsInfoType:(long long)arg1;
+ (id)_elementsInArray:(id)arg1 atTimeOffset:(double)arg2 errorMargin:(double)arg3;
@property(retain, nonatomic) NSDictionary *translationsMap; // @synthesize translationsMap=_translationsMap;
@property(retain, nonatomic) NSArray *lyricsSections; // @synthesize lyricsSections=_lyricsSections;
@property(retain, nonatomic) NSArray *lyricsLines; // @synthesize lyricsLines=_lyricsLines;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(copy, nonatomic) NSString *lyricGenId; // @synthesize lyricGenId=_lyricGenId;
@property(retain, nonatomic) NSArray *songwriters; // @synthesize songwriters=_songwriters;
@property(nonatomic) double songDuration; // @synthesize songDuration=_songDuration;
@property(nonatomic) long long type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)_sortLyricsLinesByStartTime:(id)arg1;
- (void)setLyricsLinesSortedByStartTime:(id)arg1;
- (id)description;
- (id)translatedTextForLyricsLine:(id)arg1 language:(id)arg2;
@property(readonly, nonatomic) NSArray *availableTranslations;
- (id)lyricsLineStartingBeforeTimeOffset:(double)arg1;
- (id)lyricsWordsAtTimeOffset:(double)arg1 errorMargin:(double)arg2;
- (id)lyricsLinesAtTimeOffset:(double)arg1 errorMargin:(double)arg2;
- (id)init;

@end

