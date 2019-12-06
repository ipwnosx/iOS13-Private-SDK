//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLAssetID-Protocol.h>

@class NSString;

@interface PLManagedAssetID : NSObject <PLAssetID>
{
    unsigned char _bundleScope;
    NSString *_uuid;
    NSString *_filename;
    NSString *_directory;
    NSString *_libraryID;
}

@property(nonatomic) unsigned char bundleScope; // @synthesize bundleScope=_bundleScope;
@property(copy, nonatomic) NSString *libraryID; // @synthesize libraryID=_libraryID;
@property(copy, nonatomic) NSString *directory; // @synthesize directory=_directory;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
// - (void).cxx_destruct;
- (id)initWithUUID:(id)arg1 filename:(id)arg2 directory:(id)arg3 libraryID:(id)arg4 bundleScope:(unsigned char)arg5;
- (id)initWithManagedAsset:(id)arg1;

@end

