//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSDMatchingAlgorithmMatch-Protocol.h>

@class NSString, TSDMagicMoveMatchObject, TSDTextureDescription;

__attribute__((visibility("hidden")))
@interface TSDMagicMoveMatch : NSObject <TSDMatchingAlgorithmMatch>
{
    TSDMagicMoveMatchObject *_outgoingObject;
    TSDMagicMoveMatchObject *_incomingObject;
    long long _matchType;
    double _distance;
    double _zOrderDistance;
    double _attributeMatchPercent;
    TSDTextureDescription *_textureDescription;
    long long _matchCost;
    NSString *_name;
}

+ (id)matchWithOutgoingObject:(id)arg1 incomingObject:(id)arg2 matchType:(long long)arg3 attributeMatchPercent:(double)arg4 textureDescription:(id)arg5;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) long long matchCost; // @synthesize matchCost=_matchCost;
@property(retain, nonatomic) TSDTextureDescription *textureDescription; // @synthesize textureDescription=_textureDescription;
@property(nonatomic) double attributeMatchPercent; // @synthesize attributeMatchPercent=_attributeMatchPercent;
@property(nonatomic) double zOrderDistance; // @synthesize zOrderDistance=_zOrderDistance;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(nonatomic) long long matchType; // @synthesize matchType=_matchType;
@property(readonly, nonatomic) TSDMagicMoveMatchObject *incomingObject; // @synthesize incomingObject=_incomingObject;
@property(readonly, nonatomic) TSDMagicMoveMatchObject *outgoingObject; // @synthesize outgoingObject=_outgoingObject;
- (BOOL)conflictsWithMatch:(id)arg1;
- (id)description;
- (void)p_updateMagicMoveCost;
- (void)dealloc;
@property(readonly, nonatomic) BOOL isTextMatch;
@property(readonly, nonatomic) id incomingMatchObject;
@property(readonly, nonatomic) id outgoingMatchObject;

@end

