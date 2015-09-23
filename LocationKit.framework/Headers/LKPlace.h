//
// Created by SocialRadar on 6/3/15.
// Copyright (c) 2015 SocialRadar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LKAddress.h"
#import "LKVenue.h"
#import "LKEvent.h"


@interface LKPlace : NSObject <NSCoding>

@property(nonatomic, strong) LKAddress *address;
@property(nonatomic, strong) LKVenue *venue;
@property(nonatomic, strong) NSArray *events;
@property(nonatomic, strong) NSArray *alternatives;

@end