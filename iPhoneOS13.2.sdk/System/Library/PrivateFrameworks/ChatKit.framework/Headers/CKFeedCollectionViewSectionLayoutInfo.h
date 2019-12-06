//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKFeedCollectionViewSectionLayoutInfo : NSObject
{
    BOOL _hidden;
    NSArray *_fixedLayoutAttributes;
    NSArray *_tileLayoutAttributes;
    NSArray *_floatingLayoutAttributes;
    long long _sectionType;
    long long _previousVisibleSection;
    long long _nextVisibleSection;
    long long _firstJoinedSection;
    long long _lastJoinedSection;
    id _groupID;
    long long _numberOfTilesOmitted;
    CGPoint _origin;
    CGSize _size;
    CGSize _headerSize;
    CGSize _footerSize;
    UIEdgeInsets _margins;
}

@property(nonatomic) long long numberOfTilesOmitted; // @synthesize numberOfTilesOmitted=_numberOfTilesOmitted;
@property(retain, nonatomic) id groupID; // @synthesize groupID=_groupID;
@property(nonatomic) long long lastJoinedSection; // @synthesize lastJoinedSection=_lastJoinedSection;
@property(nonatomic) long long firstJoinedSection; // @synthesize firstJoinedSection=_firstJoinedSection;
@property(nonatomic) long long nextVisibleSection; // @synthesize nextVisibleSection=_nextVisibleSection;
@property(nonatomic) long long previousVisibleSection; // @synthesize previousVisibleSection=_previousVisibleSection;
@property(nonatomic) long long sectionType; // @synthesize sectionType=_sectionType;
@property(nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property(retain, nonatomic) NSArray *floatingLayoutAttributes; // @synthesize floatingLayoutAttributes=_floatingLayoutAttributes;
@property(retain, nonatomic) NSArray *tileLayoutAttributes; // @synthesize tileLayoutAttributes=_tileLayoutAttributes;
@property(retain, nonatomic) NSArray *fixedLayoutAttributes; // @synthesize fixedLayoutAttributes=_fixedLayoutAttributes;
@property(nonatomic) UIEdgeInsets margins; // @synthesize margins=_margins;
@property(nonatomic) CGSize footerSize; // @synthesize footerSize=_footerSize;
@property(nonatomic) CGSize headerSize; // @synthesize headerSize=_headerSize;
@property(nonatomic) CGSize size; // @synthesize size=_size;
@property(nonatomic) CGPoint origin; // @synthesize origin=_origin;
// - (void).cxx_destruct;
@property(readonly, nonatomic) CGRect frame;
- (id)init;

@end

