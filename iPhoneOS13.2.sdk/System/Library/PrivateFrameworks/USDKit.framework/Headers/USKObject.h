//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, USKObjectPath, USKToken;

@interface USKObject : NSObject
{
    USKToken *_name;
    USKObjectPath *_path;
}

@property(readonly, retain, nonatomic) USKObjectPath *path; // @synthesize path=_path;
@property(readonly, retain, nonatomic) USKToken *name; // @synthesize name=_name;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *metadata;

@end

