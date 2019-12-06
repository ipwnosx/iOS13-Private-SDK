//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, PPSource, PPTopic, PPTopicMetadata;

@interface PPTopicRecord : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    PPTopic *_topic;
    PPSource *_source;
    NSUInteger _algorithm;
    double _initialScore;
    double _decayRate;
    BOOL _isLocal;
    NSString *_extractionOsBuild;
    NSUInteger _extractionAssetVersion;
    PPTopicMetadata *_metadata;
    BOOL _bucketizedSentimentScore;
}

+ (id)describeAlgorithm:(NSUInteger)arg1;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) PPTopicMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSUInteger extractionAssetVersion; // @synthesize extractionAssetVersion=_extractionAssetVersion;
@property(readonly, nonatomic) NSString *extractionOsBuild; // @synthesize extractionOsBuild=_extractionOsBuild;
@property(readonly, nonatomic) BOOL isLocal; // @synthesize isLocal=_isLocal;
@property(readonly, nonatomic) double decayRate; // @synthesize decayRate=_decayRate;
@property(readonly, nonatomic) double initialScore; // @synthesize initialScore=_initialScore;
@property(readonly, nonatomic) NSUInteger algorithm; // @synthesize algorithm=_algorithm;
@property(readonly, nonatomic) PPSource *source; // @synthesize source=_source;
@property(readonly, nonatomic) PPTopic *topic; // @synthesize topic=_topic;
// - (void).cxx_destruct;
@property(readonly, nonatomic) double sentimentScore; // @dynamic sentimentScore;
- (BOOL)isEqualToTopicRecord:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

