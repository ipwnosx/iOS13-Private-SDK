//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLUniformTypeIdentifierIdentity-Protocol.h>

@class NSString;

@interface PL5551UniformTypeIdentifier : NSObject <PLUniformTypeIdentifierIdentity>
{
}

@property(readonly, nonatomic) BOOL isPlayableVideo;
@property(readonly, nonatomic, getter=isPrimaryImageFormat) BOOL primaryImageFormat;
@property(readonly, nonatomic) BOOL conformsToMovie;
@property(readonly, nonatomic) BOOL conformsToImage;
@property(readonly, nonatomic) BOOL conformsToRawImage;
@property(readonly, copy, nonatomic) NSString *identifier;

@end

