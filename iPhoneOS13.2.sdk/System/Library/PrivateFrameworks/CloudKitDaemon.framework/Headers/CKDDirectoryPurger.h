//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CKDDirectoryPurger : NSObject
{
    id /* CDUnknownBlockType */ _shouldSkipFileBlock;
    id /* CDUnknownBlockType */ _shouldRemoveFileBlock;
    NSArray *_paths;
}

+ (void)purgeDirectoryAtPath:(id)arg1;
@property(retain, nonatomic) NSArray *paths; // @synthesize paths=_paths;
@property(copy, nonatomic) id /* CDUnknownBlockType */ shouldRemoveFileBlock; // @synthesize shouldRemoveFileBlock=_shouldRemoveFileBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ shouldSkipFileBlock; // @synthesize shouldSkipFileBlock=_shouldSkipFileBlock;
// - (void).cxx_destruct;
- (void)purge;
- (id)initWithPaths:(id)arg1;

@end

