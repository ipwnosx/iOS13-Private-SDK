//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSError, NSString;

@interface RPFileTransferProgress : NSObject <NSSecureCoding>
{
    int _linkType;
    int _type;
    double _bytesPerSecond;
    double _remainingSeconds;
    double _compressionRate;
    NSString *_currentFilename;
    NSError *_error;
    long long _transferredByteCount;
    long long _totalByteCount;
    long long _transferredFileCount;
    long long _totalFileCount;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) long long totalFileCount; // @synthesize totalFileCount=_totalFileCount;
@property(nonatomic) long long transferredFileCount; // @synthesize transferredFileCount=_transferredFileCount;
@property(nonatomic) long long totalByteCount; // @synthesize totalByteCount=_totalByteCount;
@property(nonatomic) long long transferredByteCount; // @synthesize transferredByteCount=_transferredByteCount;
@property(nonatomic) int linkType; // @synthesize linkType=_linkType;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *currentFilename; // @synthesize currentFilename=_currentFilename;
@property(nonatomic) double compressionRate; // @synthesize compressionRate=_compressionRate;
@property(nonatomic) double remainingSeconds; // @synthesize remainingSeconds=_remainingSeconds;
@property(nonatomic) double bytesPerSecond; // @synthesize bytesPerSecond=_bytesPerSecond;
// - (void).cxx_destruct;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

