//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PSIObject.h>


@class PSIDate;

@interface PSIAsset : PSIObject <NSCopying>
{
    PSIDate *_creationDate;
}

@property(readonly) PSIDate *creationDate; // @synthesize creationDate=_creationDate;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithUUID:(id)arg1 creationDate:(id)arg2;

@end

