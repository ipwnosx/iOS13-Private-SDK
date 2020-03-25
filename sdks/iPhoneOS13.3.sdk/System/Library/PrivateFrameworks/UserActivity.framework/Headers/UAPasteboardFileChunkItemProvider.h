//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserActivity/UAPasteboardItemProviding-Protocol.h>

@class NSFileHandle, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface UAPasteboardFileChunkItemProvider : NSObject <UAPasteboardItemProviding>
{
    NSString *_type;
    NSUUID *_uuid;
    NSFileHandle *_dataFile;
    NSNumber *_offsetInFile;
    long long _chunkSize;
}

@property long long chunkSize; // @synthesize chunkSize=_chunkSize;
@property(retain) NSNumber *offsetInFile; // @synthesize offsetInFile=_offsetInFile;
@property(retain) NSFileHandle *dataFile; // @synthesize dataFile=_dataFile;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (void)getDataWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (id)initWithType:(id)arg1 fileHandle:(id)arg2 offsetInFile:(id)arg3 size:(long long)arg4;

@end
