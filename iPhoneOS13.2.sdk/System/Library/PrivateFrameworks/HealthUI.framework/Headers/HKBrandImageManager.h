//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKHealthRecordsStore, NSCache, NSMutableDictionary, NSOperationQueue;

@interface HKBrandImageManager : NSObject
{
    NSCache *_fetchedImages;
    NSMutableDictionary *_outstandingRequests;
    HKHealthRecordsStore *_healthRecordsStore;
    NSOperationQueue *_fileOperationQueue;
}

+ (id)_fetchOrCreateSalt;
+ (id)imageManagerWithHealthRecordsStore:(id)arg1;
+ (double)defaultLogoDimension;
@property(retain) NSOperationQueue *fileOperationQueue; // @synthesize fileOperationQueue=_fileOperationQueue;
@property(retain, nonatomic) HKHealthRecordsStore *healthRecordsStore; // @synthesize healthRecordsStore=_healthRecordsStore;
@property(retain, nonatomic) NSMutableDictionary *outstandingRequests; // @synthesize outstandingRequests=_outstandingRequests;
@property(retain, nonatomic) NSCache *fetchedImages; // @synthesize fetchedImages=_fetchedImages;
// - (void).cxx_destruct;
- (id)_hashedSaltedStringFromString:(id)arg1;
- (id)_logoURLForBrand:(id)arg1;
- (void)_writeImageData:(id)arg1 brand:(id)arg2;
- (void)dispatchResponsesForBrand:(id)arg1 image:(id)arg2 error:(id)arg3;
- (void)processFetchResponseWithData:(id)arg1 error:(id)arg2 brand:(id)arg3;
- (void)fetchLogoForBrand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)loadStoredLogoForBrand:(id)arg1;
- (void)retrieveLogoForBrand:(id)arg1 size:(double)arg2 options:(NSUInteger)arg3 completion:(CDUnknownBlockType)arg4;
- (void)onMainQueue:(CDUnknownBlockType)arg1;
- (void)cacheFeaturedBrandLogosWithCompletion:(CDUnknownBlockType)arg1;
- (id)_scaleKeyForCurrentDevice;
- (id)initWithHealthRecordsStore:(id)arg1;

@end

