//
//  Player.m
//  iOS-Dozor
//
//  Created by Anton Zubarev on 31.10.12.
//  Copyright (c) 2012 izub.anton@gmail.com. All rights reserved.
//

#import "Player.h"

@implementation Player

-(NSString *)nickname{
    return nickname;
}

-(NSMutableString *)fullname{
    
    NSMutableString *str = [[NSMutableString alloc] initWithString:name];
    [str appendString:surname];
    
    return str;
}

-(int)exp{
    return exp;
}

-(NSString *)teamname{
    return teamname;
}

-(NSString *)status{
    return status;
}


-(void)setNickname:(NSString *)_nickname{
    nickname=_nickname;
}


-(void)setStatus:(NSString *)_status{
    status=_status;
}


-(void)setExp:(int)_exp{
    exp=_exp;
}


-(void)setTeam:(NSString *)_teamname{
    teamname=_teamname;
}

-(NSString*)gamestatus{
    if (gamestatus) {
        return @"ingame";
    }
    else{
        return @"offline";
    }
}

-(void)addExp:(int)_exp{
    exp+=_exp;
}

-(void)changeStatus:(NSString*)newstatus{
    status=newstatus;
}


@end
