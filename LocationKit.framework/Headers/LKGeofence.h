//
// Created by SocialRadar on 9/9/15.
// Copyright (c) 2015 SocialRadar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "LKVenue.h"

@interface LKGeofence : NSObject<NSCoding>

@property(nonatomic) CLLocationCoordinate2D center;

@property(nonatomic) double radius;

@property(nonatomic, strong) LKVenue *venue;
@end