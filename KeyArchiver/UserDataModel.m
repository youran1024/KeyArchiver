//
//  UserDataModel.m
//  KeyArchiver
//
//  Created by Mr.Yang on 13-7-17.
//  Copyright (c) 2013年 Hunter. All rights reserved.
//

#import "UserDataModel.h"

@implementation UserDataModel


- (id)init
{
    self = [super init];
    if (self) {
        [self defaultData];
    }
    return self;
}

- (void)encodeWithCoder:(NSCoder *)aCoder
{
#if 0
    [aCoder encodeObject:_userName forKey:@"userName"];
    [aCoder encodeObject:@(_userAge) forKey:@"userAge"];
    [aCoder encodeObject:_userSex forKey:@"userSex"];
    [aCoder encodeObject:_userFriendsArray forKey:@"userFriendsArray"];
    [aCoder encodeObject:_userLearningScoreDic forKey:@"userLearningScoreDic"];

#pragma mark Method of baseClass for inherit
#else
     [super encodeWithCoder:aCoder];
    
#endif
    
}

- (void)defaultData
{
    self.userName = @"Hunter";
    self.userAge = 99;
    self.userSex = random() % 2 == 1 ? @"male" : @"female";
    self.userFriendsArray = @[@"1", @"2", @"3", @"4", @"5"];
    self.userLearningScoreDic = @{@"Chinese":@"99", @"Math":@"99.9", @"English":@"99.99"};
}


@end
