//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKMarker-Protocol.h>

@class NSURL;

@interface CRKFileBackedMarker : NSObject <CRKMarker>
{
    NSURL *mFileURL;
}

// - (void).cxx_destruct;
- (BOOL)deleteWithError:(id )arg1;
- (BOOL)createWithError:(id )arg1;
@property(readonly, nonatomic) BOOL exists;
- (id)initWithFileURL:(id)arg1;
- (id)init;

@end

