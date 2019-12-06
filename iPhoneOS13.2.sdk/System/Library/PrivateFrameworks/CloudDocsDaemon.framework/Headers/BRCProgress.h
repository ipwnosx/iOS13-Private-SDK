//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class BRCAccountSession, NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRCProgress : NSProgress
{
    NSMutableDictionary *_progressByAliasContainerID;
    BOOL _published;
    NSArray *_parentFileIDs;
    BRCAccountSession *_session;
    BOOL _group;
}

+ (id)_progressForDocument:(id)arg1 group:(BOOL)arg2 sizeInfo:(id)arg3;
+ (id)uploadProgressForDocument:(id)arg1 sizeInfo:(id)arg2;
+ (id)downloadProgressForDocument:(id)arg1 sizeInfo:(id)arg2;
@property(readonly, nonatomic) NSArray *parentFileIDs; // @synthesize parentFileIDs=_parentFileIDs;
@property(readonly, nonatomic) BOOL isPublished; // @synthesize isPublished=_published;
// - (void).cxx_destruct;
- (void)addAliasItem:(id)arg1;
- (id)initWithGroup:(BOOL)arg1 parentFileIDs:(id)arg2 session:(id)arg3;
- (void)brc_unpublish;
- (void)brc_publish;
- (void)setCompletedUnitCount:(long long)arg1;

@end

