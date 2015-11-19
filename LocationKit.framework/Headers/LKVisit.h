//
// Created by SocialRadar on 6/9/15.
// Copyright (c) 2015 SocialRadar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LKPlacemark.h"
#import "LKVisitCriteria.h"

@interface LKVisit : CLVisit <NSCoding>


@property (nonatomic, strong) LKPlacemark *place;
@property (nonatomic, strong) LKVisitCriteria *criteria;

@end