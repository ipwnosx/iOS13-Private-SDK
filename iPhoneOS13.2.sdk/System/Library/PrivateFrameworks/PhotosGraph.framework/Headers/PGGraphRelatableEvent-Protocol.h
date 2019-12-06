//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphFullMeaninglessEvent-Protocol.h>

@class NSDictionary, NSSet, NSString, PGGraphMomentNode;
@protocol PGGraphPhotoEvent;

@protocol PGGraphRelatableEvent <PGGraphFullMeaninglessEvent>
+ (NSString *)inclusivePathToTargetNodeDomain:(unsigned short)arg1 withName:(NSString *)arg2;
+ (NSString *)inclusivePathFromTargetNodeDomain:(unsigned short)arg1 withName:(NSString *)arg2;
+ (NSString *)pathToTargetNodeDomain:(unsigned short)arg1;
+ (NSString *)pathFromTargetNodeDomain:(unsigned short)arg1;
+ (NSString *)pathToMoment;
+ (NSString *)pathFromMoment;
- (NSDictionary *)keywordsForRelatedType:(NSUInteger)arg1 focusOnNodes:(NSSet *)arg2;
- (NSSet *)connectedEventsWithTargetDomain:(unsigned short)arg1;
- (id <PGGraphPhotoEvent>)photoEvent;
- (double)weightForMoment:(PGGraphMomentNode *)arg1;
@end

