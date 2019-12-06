//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BookLibrary/BLM3U8ParserDelegate-Protocol.h>

@class BLHLSPlaylistState, NSArray, NSMutableSet, NSSet, NSString;

@interface BLHLSPlaylist : NSObject <BLM3U8ParserDelegate>
{
    BOOL _independentSegments;
    NSArray *_groups;
    NSArray *_streamInfs;
    NSArray *_segments;
    BLHLSPlaylistState *_state;
    NSMutableSet *_uniqueKeys;
    NSArray *_requestedBitrates;
}

+ (id)playlistParsingURL:(id)arg1 error:(id )arg2;
+ (id)playlistParsingData:(id)arg1 error:(id )arg2;
+ (id)_playlistUsingParser:(id)arg1 error:(id )arg2;
+ (BOOL)_rewritePlaylistWithParser:(id)arg1 toURL:(id)arg2 requestedBitrates:(id)arg3 error:(id )arg4;
+ (BOOL)rewritePlaylistURL:(id)arg1 toURL:(id)arg2 requestedBitrates:(id)arg3 error:(id )arg4;
+ (BOOL)rewritePlaylistData:(id)arg1 toURL:(id)arg2 requestedBitrates:(id)arg3 error:(id )arg4;
@property(retain, nonatomic) NSArray *requestedBitrates; // @synthesize requestedBitrates=_requestedBitrates;
@property(retain, nonatomic) NSMutableSet *uniqueKeys; // @synthesize uniqueKeys=_uniqueKeys;
@property(retain, nonatomic) BLHLSPlaylistState *state; // @synthesize state=_state;
@property(retain, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(nonatomic) BOOL independentSegments; // @synthesize independentSegments=_independentSegments;
@property(retain, nonatomic) NSArray *streamInfs; // @synthesize streamInfs=_streamInfs;
@property(retain, nonatomic) NSArray *groups; // @synthesize groups=_groups;
// - (void).cxx_destruct;
- (BOOL)parserShouldCollectLine:(id)arg1;
- (void)parser:(id)arg1 lineIsTag:(id)arg2 value:(id)arg3 attributeList:(id)arg4;
- (void)parser:(id)arg1 lineIsURL:(id)arg2;
- (void)parser:(id)arg1 lineIsComment:(id)arg2;
- (BOOL)_parseUsingParser:(id)arg1 error:(id )arg2;
@property(readonly, nonatomic) NSSet *keys;
@property(readonly, copy) NSString *description;
- (id)initWithRequestedBitrates:(id)arg1;

@end

