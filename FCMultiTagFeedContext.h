//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString;

@interface FCMultiTagFeedContext : NSObject
{
    NSDate *_date;
    NSString *_uuid;
    NSArray *_tagIDs;
    NSDictionary *_regularFeedIDsByTagID;
    NSDictionary *_binAFeedIDsByTagID;
    NSDictionary *_channelIDsByTagID;
    NSDictionary *_sectionIDsByTagID;
    NSDictionary *_topicIDsByTagID;
}

+ (id)feedContextWithTags:(id)arg1 binsByTag:(id)arg2 orphanFeedIDs:(id)arg3;
+ (id)feedContextWithTags:(id)arg1 binsByTag:(id)arg2;
@property(retain, nonatomic) NSDictionary *topicIDsByTagID; // @synthesize topicIDsByTagID=_topicIDsByTagID;
@property(retain, nonatomic) NSDictionary *sectionIDsByTagID; // @synthesize sectionIDsByTagID=_sectionIDsByTagID;
@property(retain, nonatomic) NSDictionary *channelIDsByTagID; // @synthesize channelIDsByTagID=_channelIDsByTagID;
@property(retain, nonatomic) NSDictionary *binAFeedIDsByTagID; // @synthesize binAFeedIDsByTagID=_binAFeedIDsByTagID;
@property(retain, nonatomic) NSDictionary *regularFeedIDsByTagID; // @synthesize regularFeedIDsByTagID=_regularFeedIDsByTagID;
@property(retain, nonatomic) NSArray *tagIDs; // @synthesize tagIDs=_tagIDs;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;

@end
