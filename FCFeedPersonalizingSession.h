//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCDateRange, FCFeedPersonalizingSessionDeliveredArticleCount, NSString;

@interface FCFeedPersonalizingSession : NSObject
{
    long long _feedType;
    NSString *_sessionID;
    FCDateRange *_dateRange;
    FCFeedPersonalizingSessionDeliveredArticleCount *_articleCount;
}

@property(retain, nonatomic) FCFeedPersonalizingSessionDeliveredArticleCount *articleCount; // @synthesize articleCount=_articleCount;
@property(retain, nonatomic) FCDateRange *dateRange; // @synthesize dateRange=_dateRange;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) long long feedType; // @synthesize feedType=_feedType;
- (void).cxx_destruct;

@end

