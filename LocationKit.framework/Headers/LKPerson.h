//
// Created by Alex Nechaev on 7/21/15.
// Copyright (c) 2015 SocialRadar. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface LKPerson : NSObject
@property(nonatomic, copy) NSString *deviceId;

+ (NSArray *)personsWithJson:(id)result;

- (id)initWithDictionary:(NSDictionary *)dictionary;
@end