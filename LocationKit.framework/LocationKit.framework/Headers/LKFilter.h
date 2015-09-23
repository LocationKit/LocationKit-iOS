//
// Created by SocialRadar on 8/18/15.
// Copyright (c) 2015 SocialRadar. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface LKFilter : NSObject<NSCoding>

@property(nonatomic, copy) NSString *venueCategory;
@property(nonatomic, copy) NSString *venueName;
@property(nonatomic) double radius;

@end