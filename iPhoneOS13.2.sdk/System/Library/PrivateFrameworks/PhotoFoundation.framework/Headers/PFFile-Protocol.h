//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDate, NSString, NSURL;

@protocol PFFile
@property(readonly) NSString *UTI;
@property(readonly) BOOL isDirectory;
@property(readonly) NSString *fileExtension;
@property(readonly) NSDate *fileModificationDate;
@property(readonly) NSDate *fileCreationDate;
@property(readonly) NSUInteger fileSize;
@property(readonly) NSString *fileName;
@property(readonly) NSString *path;
@property(readonly) NSURL *url;
@end

