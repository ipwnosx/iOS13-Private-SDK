//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPIdentifiedDataRepresentation-Protocol.h>

@class NSString, SFUDataRepresentation;

__attribute__((visibility("hidden")))
@interface TSPDistributableArchiveEntry : NSObject <TSPIdentifiedDataRepresentation>
{
    long long _identifier;
    NSString *_fileStateIdentifier;
    SFUDataRepresentation *_objectData;
    set_713dd2e1 _ownedIds;
    int _classType;
    unsigned int _version;
    NSString *_relativeDataPath;
}

@property(copy, nonatomic) NSString *relativeDataPath; // @synthesize relativeDataPath=_relativeDataPath;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) int classType; // @synthesize classType=_classType;
// - (void).cxx_destruct;
- (BOOL)isLoaded;
- (id)dataRepresentation;
- (void)setOwnedIds:(const set_713dd2e1 )arg1;
- (const set_713dd2e1 )ownedIds;
- (BOOL)setDataRepresentation:(id)arg1 shouldCopy:(BOOL)arg2 error:(id )arg3;
- (void)setFileStateIdentifier:(id)arg1;
- (id)fileStateIdentifier;
- (long long)identifier;
- (void)dealloc;
- (id)initWithIdentifier:(long long)arg1;

@end

