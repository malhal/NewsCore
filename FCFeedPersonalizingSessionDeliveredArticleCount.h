//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCoding-Protocol.h>

@class FCDateRange;

@interface FCFeedPersonalizingSessionDeliveredArticleCount : NSObject <NSCoding>
{
    FCDateRange *_slice;
    long long _count;
}

@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) FCDateRange *slice; // @synthesize slice=_slice;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

