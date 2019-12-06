//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData;

@interface KTLoggableData : NSObject <NSSecureCoding>
{
    BOOL _successfulSync;
    BOOL _marked;
    NSData *_deviceID;
    NSData *_clientData;
    NSData *_deviceVRFOutput;
    NSData *_clientDataVRFOutput;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSData *clientDataVRFOutput; // @synthesize clientDataVRFOutput=_clientDataVRFOutput;
@property(retain) NSData *deviceVRFOutput; // @synthesize deviceVRFOutput=_deviceVRFOutput;
@property BOOL marked; // @synthesize marked=_marked;
@property BOOL successfulSync; // @synthesize successfulSync=_successfulSync;
@property(retain) NSData *clientData; // @synthesize clientData=_clientData;
@property(copy) NSData *deviceID; // @synthesize deviceID=_deviceID;
// - (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClientData:(id)arg1;

@end

