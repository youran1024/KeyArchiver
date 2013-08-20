//
//  UserDataModel.h
//  KeyArchiver
//
//  Created by Mr.Yang on 13-7-17.
//  Copyright (c) 2013年 Hunter. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseModel.h"

@interface UserDataModel : BaseModel
@property (nonatomic, copy)     NSString *userName;
@property (nonatomic, assign)   NSInteger userAge;
@property (nonatomic, copy)     NSString *userSex;
@property (nonatomic, strong)   NSArray *userFriendsArray;
@property (nonatomic, strong)   NSDictionary *userLearningScoreDic;

@end
