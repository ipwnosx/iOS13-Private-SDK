//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVSubmittable-Protocol.h>

@class NSSet;

@protocol CoreDAVContainerMultiGetSubmittable <CoreDAVSubmittable>
@property(nonatomic) BOOL shouldIgnoreResponseErrors;
@property(readonly, nonatomic) NSSet *parsedContents;
@property(readonly, nonatomic) NSSet *deletedURLs;
@property(readonly, nonatomic) NSSet *missingURLs;
@end

