//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface FCAssetStore : NSObject
{
    NSString *_directoryPath;
    NSString *_preferredExtension;
    NSMutableDictionary *_fileURLsByKey;
}

@property(copy, nonatomic) NSMutableDictionary *fileURLsByKey; // @synthesize fileURLsByKey=_fileURLsByKey;
@property(copy, nonatomic) NSString *preferredExtension; // @synthesize preferredExtension=_preferredExtension;
@property(copy, nonatomic) NSString *directoryPath; // @synthesize directoryPath=_directoryPath;
// - (void).cxx_destruct;
- (NSUInteger)_sizeOfFileAtURL:(id)arg1;
- (id)_keyForFileName:(id)arg1;
- (id)_filePathForKey:(id)arg1;
- (id)allKeys;
- (NSUInteger)storeSizeForKeys:(id)arg1;
- (NSUInteger)storeSize;
- (NSUInteger)sizeOfFileForKey:(id)arg1;
- (id)fileURLForKey:(id)arg1;
- (id)filePathForKey:(id)arg1;
- (BOOL)removeAllFiles;
- (BOOL)removeAllFilesExceptKeys:(id)arg1;
- (BOOL)removeFileWithKey:(id)arg1;
- (id)copyData:(id)arg1 withKey:(id)arg2;
- (id)moveFileAtPath:(id)arg1 withKey:(id)arg2;
- (id)copyFileAtPath:(id)arg1 withKey:(id)arg2;
- (id)initWithDirectoryAtPath:(id)arg1 preferredAssetPathExtension:(id)arg2;

@end

