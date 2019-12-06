//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSNumber;

@interface IDSQRParticipantStreams : NSObject
{
    NSNumber *_participantID;
    NSMutableArray *_streamArray;
    BOOL _anyParticipant;
    BOOL _anyStream;
}

+ (id)streamWithParticipantID:(id)arg1 streamArray:(id)arg2 anyParticipant:(BOOL)arg3 anyStream:(BOOL)arg4;
@property(readonly, nonatomic) BOOL anyStream; // @synthesize anyStream=_anyStream;
@property(readonly, nonatomic) BOOL anyParticipant; // @synthesize anyParticipant=_anyParticipant;
@property(readonly) NSMutableArray *streamArray; // @synthesize streamArray=_streamArray;
@property(readonly) NSNumber *participantID; // @synthesize participantID=_participantID;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithParticipantID:(id)arg1 streamArray:(id)arg2 anyParticipant:(BOOL)arg3 anyStream:(BOOL)arg4;

@end

