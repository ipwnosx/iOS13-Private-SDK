//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLAssetsdSystemLibraryURLReadOnlyServiceProtocol-Protocol.h>

@class PLAssetsdConnectionAuthorization;

@interface PLAssetsdSystemLibraryURLReadOnlyService : NSObject <PLAssetsdSystemLibraryURLReadOnlyServiceProtocol>
{
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
}

// - (void).cxx_destruct;
- (void)systemPhotoLibraryURL:(CDUnknownBlockType)arg1;
- (id)initWithConnectionAuthorization:(id)arg1;

@end

