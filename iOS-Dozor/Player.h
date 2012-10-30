//
//  Player.h
//  iOS-Dozor
//
//  Created by Anton Zubarev on 31.10.12.
//  Copyright (c) 2012 izub.anton@gmail.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Player : NSObject{

NSString *name;
NSString *surname;
NSString *nickname;
int exp;
BOOL gamestatus;
NSString *status;
NSString *teamname;
int level;
}

-(NSString *) nickname;
-(NSMutableString *)fullname;
-(int) exp;
-(NSString *)teamname;
-(NSString *)status;
-(int)level;
-(NSString*)gamestatus;

-(void)setNickname:(NSString *)nickname;
-(void)setStatus:(NSString *)status;
-(void)setExp:(int)exp;
-(void)setTeam:(NSString *)teamname;
-(void)setLevel:(int)level;
-(void)setGamestatus:(BOOL)gamestatus;

-(void)addExp:(int)exp;

-(void)changeStatus:(NSString*)newstatus;

@end
